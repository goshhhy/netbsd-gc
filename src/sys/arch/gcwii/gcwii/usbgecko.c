
#include <sys/param.h>
#include <sys/device.h>
#include <sys/kernel.h>
#include <sys/systm.h>

#include <dev/cons.h>


int usbgecko_match(device_t, cfdata_t, void *);
void usbgecko_attach(device_t, device_t, void *);
static void usbgeckocnprobe (struct consdev *);
static void usbgeckocninit (struct consdev *);
static int  usbgeckocngetc (dev_t);
static void usbgeckocnputc (dev_t, int);
static void usbgeckocnpollc (dev_t, int);

struct consdev usbgecko_cn = {
	usbgeckocnprobe,
	usbgeckocninit,
	usbgeckocngetc,
	usbgeckocnputc,
	usbgeckocnpollc,
	NULL,
	NULL,
	NULL,
	NODEV,
	CN_NORMAL
};

int 
usbgecko_match(device_t parent, cfdata_t match, void* aux)
{
	return 1;
}

void
usbgecko_attach(device_t parent, device_t self, void *aux)
{
}

void
usbgeckocnprobe(struct consdev *cn)
{
}

void
usbgeckocninit(struct consdev *cn)
{
}

int
usbgeckocngetc(dev_t dev)
{
	return 0;
}

void
usbgeckocnputc(dev_t dev, int c)
{
}

void
usbgeckocnpollc(dev_t dev, int on)
{
}