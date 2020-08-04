#include <sys/cdefs.h>

#include <sys/param.h>
#include <sys/device.h>
#include <sys/systm.h>

#include <sys/bus.h>

#include <machine/autoconf.h>

int cpu_match(device_t parent, cfdata_t match, void *aux);
void cpu_attach(device_t parent, device_t self, void *aux);

CFATTACH_DECL_NEW(cpu, 0, cpu_match, cpu_attach, NULL, NULL);

int
cpu_match(device_t parent, cfdata_t match, void *aux)
{

	return 1;
}

void
cpu_attach(device_t parent, device_t self, void *aux)
{
	struct confargs *ca = aux;
	int id = ca->ca_node;

	cpu_attach_common(self, id);
}