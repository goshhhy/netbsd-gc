#ifndef _MACHINE_DISKLABEL_H_
#define _MACHINE_DISKLABEL_H_

#define LABELUSESMBR	0			/* no MBR partitionning */
#define	LABELSECTOR	0			/* sector containing label */
#define	LABELOFFSET	64			/* offset of label in sector */
#define	MAXPARTITIONS	16			/* number of partitions */
#define	RAW_PART	2			/* raw partition: xx?c */

/* Pull in RDB partition definitions. */
#if HAVE_NBTOOL_CONFIG_H
#include <nbinclude/sys/disklabel_rdb.h>
#else
#include <sys/disklabel_rdb.h>
#endif /* HAVE_NBTOOL_CONFIG_H */

struct cpu_disklabel {
	u_long rdblock;			/* may be RDBNULL which invalidates */
	u_long pblist[MAXPARTITIONS];	/* partblock number (RDB list order) */
	int pbindex[MAXPARTITIONS];	/* index of pblock (partition order) */
	int  valid;			/* essential that this is valid */
};

#endif /* _MACHINE_DISKLABEL_H_ */
