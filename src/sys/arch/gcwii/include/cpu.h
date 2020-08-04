#ifndef	_GCWII_CPU_H_
#define	_GCWII_CPU_H_

#if defined(_KERNEL) && !defined(_MODULE)
#ifdef _KERNEL_OPT
#include "opt_ppcarch.h"
#endif

#define CPU_MAXNUM 1

#endif	/* _KERNEL && !_MODULE */

#include <powerpc/cpu.h>

#endif	/* _GCWII_CPU_H_ */
