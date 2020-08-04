#ifndef _MACHINE_AUTOCONF_H_
#define _MACHINE_AUTOCONF_H_

struct confargs {
	const char *ca_name;
	u_int ca_node;
	int ca_nreg;
	u_int *ca_reg;
	int ca_nintr;
	int *ca_intr;

	bus_addr_t ca_baseaddr;
	bus_space_tag_t ca_tag;
};

#endif /* _MACHINE_AUTOCONF_H_ */
