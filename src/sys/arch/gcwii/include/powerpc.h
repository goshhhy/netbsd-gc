#ifndef	_MACHINE_POWERPC_H_
#define	_MACHINE_POWERPC_H_

struct mem_region {
	paddr_t start;
	psize_t size;
};

void mem_regions(struct mem_region **, struct mem_region **);

#endif	/* _MACHINE_POWERPC_H_ */
