# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003-2016 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = gas
VERSION = 2.27

SHELL = /bin/sh


srcdir = /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/po
top_srcdir = /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas
VPATH = /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/po
top_builddir = ..

prefix = /home/ky0ko/code/netbsd-gc/src/obj/tooldir.Linux-5.4.7-arch1-1-x86_64
exec_prefix = ${prefix}
datadir = $(prefix)/
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /home/ky0ko/code/netbsd-gc/src/obj/tooldir.Linux-5.4.7-arch1-1-x86_64/bin/powerpc--netbsd-install -c -p -r
INSTALL_DATA = ${INSTALL} -m 644
MKINSTALLDIRS = /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/../mkinstalldirs

CC = cc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH /usr/sbin/msgfmt
MSGFMT = /usr/sbin/msgfmt
XGETTEXT = PATH=../src:$$PATH /usr/sbin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -O
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/fr.po $(srcdir)/tr.po $(srcdir)/es.po $(srcdir)/rw.po $(srcdir)/id.po $(srcdir)/ru.po $(srcdir)/fi.po $(srcdir)/ja.po $(srcdir)/zh_CN.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/tr.gmo $(srcdir)/es.gmo $(srcdir)/rw.gmo $(srcdir)/id.gmo $(srcdir)/ru.gmo $(srcdir)/fi.gmo $(srcdir)/ja.gmo $(srcdir)/zh_CN.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/app.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/as.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/as.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/asintl.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/atof-generic.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/bignum.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/bit_fix.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/cgen.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/cgen.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/compress-debug.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/compress-debug.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/cond.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/atof-ieee.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/atof-vax.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/e-crisaout.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/e-criself.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/e-i386aout.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/e-i386coff.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/e-i386elf.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/e-mipself.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-aout.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-aout.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-coff.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-coff.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-ecoff.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-ecoff.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-elf.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-elf.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-evax.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-evax.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-fdpicelf.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-fdpicelf.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-macho.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-macho.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-multi.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-multi.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-som.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/obj-som.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-aarch64.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-aarch64.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-alpha.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-alpha.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-arc.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-arc.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-arm.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-arm.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-avr.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-avr.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-bfin.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-bfin.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-cr16.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-cr16.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-cris.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-cris.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-crx.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-crx.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-d10v.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-d10v.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-d30v.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-d30v.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-dlx.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-dlx.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-epiphany.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-epiphany.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-fr30.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-fr30.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-frv.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-frv.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-ft32.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-ft32.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-h8300.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-h8300.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-hppa.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-hppa.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-i370.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-i370.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-i386.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-i386.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-i860.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-i860.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-i960.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-i960.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-ia64.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-ia64.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-ip2k.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-ip2k.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-iq2000.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-iq2000.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-lm32.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-lm32.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-m32c.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-m32c.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-m32r.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-m32r.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-m68hc11.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-m68hc11.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-m68k.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-m68k.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mcore.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mcore.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mep.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mep.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-metag.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-metag.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-microblaze.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-microblaze.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mips.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mips.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mmix.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mmix.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mn10200.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mn10200.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mn10300.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mn10300.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-moxie.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-msp430.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-msp430.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mt.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-mt.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-nds32.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-nds32.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-nios2.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-nios2.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-ns32k.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-ns32k.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-or1k.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-or1k.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-pdp11.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-pdp11.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-pj.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-pj.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-ppc.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-ppc.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-rl78.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-rl78.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-rx.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-rx.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-s390.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-s390.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-score.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-score.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-sh.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-sh.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-sh64.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-sh64.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-sparc.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-sparc.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-spu.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-spu.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tic30.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tic30.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tic4x.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tic4x.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tic54x.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tic54x.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tic6x.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tic6x.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tilegx.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tilegx.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tilepro.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-tilepro.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-v850.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-v850.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-vax.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-vax.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-visium.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-visium.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-xc16x.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-xc16x.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-xgate.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-xgate.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-xstormy16.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-xstormy16.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-xtensa.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-xtensa.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-z80.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-z80.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-z8k.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/tc-z8k.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-386bsd.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-aix5.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-armeabi.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-armfbsdeabi.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-armfbsdvfp.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-armlinuxeabi.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-dynix.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-epoc-pe.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-freebsd.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-generic.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-gnu.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-go32.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-hppa.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-hppa64.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-hppalinux64.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-i386aix.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-ia64aix.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-interix.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-lynx.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-mach.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-macos.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-nbsd.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-nbsd532.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-netware.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-pc532mach.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-pe.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-psos.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-riscix.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-solaris.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-sparcaout.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-sun3.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-svr4.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-symbian.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-tmips.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-vms.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-vxworks.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/te-wince-pe.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/xtensa-relax.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/config/xtensa-relax.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/depend.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/dw2gencfi.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/dw2gencfi.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/dwarf2dbg.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/dwarf2dbg.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/ecoff.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/ecoff.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/ehopt.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/emul-target.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/emul.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/expr.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/expr.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/flonum-copy.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/flonum-konst.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/flonum-mult.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/flonum.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/frags.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/frags.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/hash.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/hash.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/input-file.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/input-file.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/input-scrub.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/itbl-lex.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/itbl-ops.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/itbl-ops.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/listing.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/listing.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/literal.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/macro.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/macro.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/messages.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/obj.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/output-file.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/output-file.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/read.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/read.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/remap.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/sb.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/sb.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/stabs.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/struc-symbol.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/subsegs.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/subsegs.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/symbols.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/symbols.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/tc.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/write.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/gas/write.h

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-pdf:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
