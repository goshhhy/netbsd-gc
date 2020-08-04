#include "ioconf.h"
/*
 * MACHINE GENERATED: DO NOT EDIT
 *
 * ioconf.c, from "/home/ky0ko/code/netbsd-gc/src/sys/arch/gcwii/conf/GENERIC"
 */

#include <sys/param.h>
#include <sys/conf.h>
#include <sys/device.h>
#include <sys/mount.h>

static const struct cfiattrdata mainbuscf_iattrdata = {
	"mainbus", 0, {
		{ NULL, NULL, 0 },
	}
};

static const struct cfiattrdata * const mainbus_attrs[] = { &mainbuscf_iattrdata, NULL };
CFDRIVER_DECL(mainbus, DV_DULL, mainbus_attrs);

CFDRIVER_DECL(cpu, DV_DULL, NULL);

CFDRIVER_DECL(usbgecko, DV_DULL, NULL);


struct cfdriver * const cfdriver_list_initial[] = {
	&mainbus_cd,
	&cpu_cd,
	&usbgecko_cd,
	NULL
};

extern struct cfattach mainbus_ca;
extern struct cfattach cpu_ca;
extern struct cfattach usbgecko_ca;

static const struct cfparent pspec0 = {
	"mainbus", "mainbus", 0
};

#define NORM FSTATE_NOTFOUND
#define STAR FSTATE_STAR

struct cfdata cfdata[] = {
    /* driver           attachment    unit state      loc   flags  pspec */
/*  0: mainbus0 at root */
    { "mainbus",	"mainbus",	 0, NORM,    NULL,      0, NULL },
/*  1: cpu0 at mainbus0 */
    { "cpu",		"cpu",		 0, NORM,    NULL,      0, &pspec0 },
/*  2: usbgecko0 at mainbus0 */
    { "usbgecko",	"usbgecko",	 0, NORM,    NULL,      0, &pspec0 },
    { NULL,		NULL,		 0,    0,    NULL,      0, NULL }
};

static struct cfattach * const mainbus_cfattachinit[] = {
	&mainbus_ca, NULL
};
static struct cfattach * const cpu_cfattachinit[] = {
	&cpu_ca, NULL
};
static struct cfattach * const usbgecko_cfattachinit[] = {
	&usbgecko_ca, NULL
};

const struct cfattachinit cfattachinit[] = {
	{ "mainbus", mainbus_cfattachinit },
	{ "cpu", cpu_cfattachinit },
	{ "usbgecko", usbgecko_cfattachinit },
	{ NULL, NULL }
};

const short cfroots[] = {
	 0 /* mainbus0 */,
	-1
};

/* pseudo-devices */

const struct pdevinit pdevinit[] = {
	{ cpuctlattach, 1 },
	{ rndattach, 1 },
	{ ptyattach, 1 },
	{ loopattach, 1 },
	{ 0, 0 }
};
