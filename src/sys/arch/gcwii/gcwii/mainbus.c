
#include <sys/cdefs.h>

#include <sys/param.h>
#include <sys/device.h>
#include <sys/systm.h>

#include <sys/bus.h>

#include <machine/autoconf.h>

int	mainbus_match(device_t, cfdata_t, void *);
void	mainbus_attach(device_t, device_t, void *);

CFATTACH_DECL_NEW(mainbus, 0,
    mainbus_match, mainbus_attach, NULL, NULL);

int	mainbus_print (void *, const char *);

int
mainbus_match(device_t parent, cfdata_t match, void *aux)
{

	return 1;
}

void
mainbus_attach(device_t parent, device_t self, void *aux)
{
	struct confargs ca;

	ca.ca_name = "cpu";
	ca.ca_node = 0;
	config_found_ia(self, "mainbus", &ca, mainbus_print);
}

int
mainbus_print(void *aux, const char *pnp)
{

	if (pnp)
		aprint_normal("cpu at %s", pnp);
	return (UNCONF);
}