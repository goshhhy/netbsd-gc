/*
 * Copyright (c) 2020 Emily Ingalls
 * All rights reserved
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include "opt_ddb.h"
#include "opt_ppcarch.h"
#include "opt_ppcparam.h"
#include "assym.h"

#include <machine/param.h>
#include <machine/psl.h>
#include <machine/trap.h>
#include <machine/asm.h>

#include <powerpc/spr.h>
#include <powerpc/oea/spr.h>
#include <powerpc/oea/hid.h>

#include "ksyms.h"

/*
 * Some instructions gas doesn't understand (yet?)
 */
#define	bdneq	bdnzf 2,

/*
 * Globals
 */
GLOBAL(esym)
    .long   0       /* end of symbol table */
GLOBAL(oeacpufeat)
    .long   0       /* cpu feature list */

/*
 * Mark the start of kernel text for kvm_mkdb
 */
    .text
    .globl _C_LABEL(kernel_text)
_C_LABEL(kernel_text):

/*
 * Kernel entry point
 */
 
    .text
    .globl __start
__start:

    mtmsr 0
    isync

    // vtr = ntsc
    li 7, 0x0f06
    li 8, 0x0000
    lis 8, 0x0c00
    ori 8, 8, 0x2000
    sth 7, 0(8)

    // htr0 = ntsc
    li 7, 0x0000
    lis 7, 0x4769
    ori 7, 7, 0x01ad
    li 8, 0x0000
    lis 8, 0x0c00
    ori 8, 8, 0x2004
    stw 7, 0(8)

    // htr1 = ntsc
    lis 7, 0x02ea
    ori 7, 7, 0x5140
    li 8, 0x0000
    lis 8, 0x0c00
    ori 8, 8, 0x2008
    stw 7, 0(8)

    // vto = ntsc
    lis 7, 0x0003
    ori 7, 7, 0x0018
    li 8, 0x0000
    lis 8, 0x0c00
    ori 8, 8, 0x200c
    stw 7, 0(8)

    // vte = ntsc
    li 7, 0x0000
    lis 7, 0x0002
    ori 7, 7, 0x0019
    li 8, 0x0000
    lis 8, 0x0c00
    ori 8, 8, 0x2010
    stw 7, 0(8)

    // bbei = ntsc
    li 7, 0x0000
    lis 7, 0x410c
    ori 7, 7, 0x410c
    li 8, 0x0000
    lis 8, 0x0c00
    ori 8, 8, 0x2014
    stw 7, 0(8)

    // bboi = ntsc
    li 7, 0x0000
    lis 7, 0x40ed
    ori 7, 7, 0x40ed
    li 8, 0x0000
    lis 8, 0x0c00
    ori 8, 8, 0x2018
    stw 7, 0(8)

    // viclk = non-progressive
    li 7, 0x0000
    li 8, 0x0000
    lis 8, 0x0c00
    ori 8, 8, 0x206c
    sth 7, 0(8)

    // xfb at 0x80fffe00
    li 7, 0x0000
    lis 7, 0x00ff
    ori 7, 7, 0xfe00
    lis 8, 0x0c00
    ori 8, 8, 0x201c
    stw 7, 0(8)
    addi 8, 8, 8
    stw 7, 0(8)

    // enable video
    li 7, 0x0001
    li 8, 0x0000
    lis 8, 0x0c00
    ori 8, 8, 0x2002
    sth 7, 0(8)

    // write some pixels
    li 9, 0x0000
    li 7, 0x0000
    lis 7, 0x8833
    ori 7, 7, 0x88ff
    li 8, 0x0000
    lis 8, 0x00ff
    ori 8, 8, 0xfe00
_color:
    stw 7, 0(8)
    addi 8, 8, 4
    stw 7, 0(8)
    addi 8, 8, 4
    stw 7, 0(8)
    addi 8, 8, 4
    stw 7, 0(8)
    addi 8, 8, 4
    addi 9, 9, 1
    cmpi 0, 0, 9, 0x4000
    bf eq, _color

    // init exi for usbgecko (slot b, 1mhz5)
    li 7, 0x0080
    lis 8, 0x0c00
    ori 8, 8, 0x6814
    stw 7, 0(8)

    // prepare for transfer, 2 bytes
    li 7, 0x19
    lis 8, 0x0c00
    ori 8, 8, 0x6820
    stw 7, 0(8)

    // usbgecko - init
    lis 7, 0x9000
    ori 7, 7, 0x5344
    lis 8, 0x0c00
    ori 8, 8, 0x6824
    stw 7, 0(8)

   // prepare for transfer, 2 bytes
    li 7, 0x19
    lis 8, 0x0c00
    ori 8, 8, 0x6820
    stw 7, 0(8)

    // usbgecko - init
    lis 7, 0xb4e0
    lis 8, 0x0c00
    ori 8, 8, 0x6824
    stw 7, 0(8)

    // jump into netbsd proper
    bl	_C_LABEL(main)

_loop:
    bl _loop

// common switch / setfault code.
#include <powerpc/powerpc/locore_subr.S>

// common vector code
#include <powerpc/powerpc/trap_subr.S>

// common bus / io code
#include <powerpc/powerpc/pio_subr.S>
