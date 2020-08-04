
#include <sys/cdefs.h>

#include <sys/param.h>
#include <sys/device.h>
#include <sys/mount.h>
#include <sys/msgbuf.h>
#include <sys/kernel.h>
#include <sys/reboot.h>

#include <dev/cons.h>

#include <machine/powerpc.h>

extern struct consdev usbgecko_cn;

void		initppc(u_int, u_int);
void		printcolor(u_int ycbycr, u_int count);

void
printcolor(u_int ycbycr, u_int count)
{
	u_int *pixels = (u_int *)0x00fffe00;
	int i;

	for( i = 0; i < count; i++ ) {
		pixels[i] = ycbycr;
	}
}

void
initppc(u_int startkernel, u_int endkernel)
{

}

void
consinit(void)
{
	cn_tab = &usbgecko_cn;
	(*cn_tab->cn_init)(cn_tab);
	printcolor( 0x44664422, 60000 );
}

void
cpu_startup(void)
{
	printcolor( 0xffffffff, 50000 );
}

void
cpu_reboot(int howto, char *what)
{

}

void
mem_regions(struct mem_region **mem, struct mem_region **avail)
{
	printcolor( 0x555555ff, 40000 );
}