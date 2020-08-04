KERNEL_BUILD=/home/ky0ko/code/netbsd-gc/src/sys/arch/gcwii/conf/GENERIC
IDENT= \

MACHINE=gcwii
S=	/home/ky0ko/code/netbsd-gc/src/sys
PPCDIR=oea
PPC_ARCH_MODE=ppc32
TEXTADDR=0x3400
#	$NetBSD: Makefile.powerpc,v 1.61 2018/09/22 12:24:03 rin Exp $
#
# Makefile for NetBSD
#
# This makefile is constructed from a machine description:
#	config machineid
# Most changes should be made in the machine description
#	/sys/arch/powerpc/conf/``machineid''
# after which you should do
#	config machineid
# Machine generic makefile changes should be made in
#	/sys/arch/powerpc/conf/Makefile.powerpc
# after which config should be rerun for all machines of that type.
#
# To specify debugging, add the config line: makeoptions DEBUG="-g"
# A better way is to specify -g only for a few files.
#
#	makeoptions DEBUGLIST="uvm* trap if_*"

MACHINE_ARCH?=powerpc
USETOOLS?=	no
NEED_OWN_INSTALL_TARGET?=no
.include <bsd.own.mk>

##
## (1) port identification
##
THISPPC=	$S/arch/${MACHINE}
POWERPC=	$S/arch/powerpc
GENASSYM_CONF=	${POWERPC}/powerpc/genassym.cf
GENASSYM_CONF+=	${POWERPC}/${PPCDIR}/genassym.cf
.if exists(${THISPPC}/${MACHINE}/genassym.cf)
GENASSYM_CONF+=	${THISPPC}/${MACHINE}/genassym.cf
.endif
.-include "${THISPPC}/conf/Makefile.${MACHINE}.inc"

##
## (2) compile settings
##
CPPFLAGS+=	-D${MACHINE}=${MACHINE}
CWARNFLAGS+=	-Wreturn-type
.if ${PPCDIR} == "oea"
CFLAGS+=	${${ACTIVE_CC} == "gcc":? -mno-strict-align :}
CFLAGS+=	${${ACTIVE_CC} == "gcc":? -Wa,-maltivec :}
.endif
.if ${PPCDIR} == "booke"
DEFCOPTS=	-O2
CFLAGS+=	-fstack-protector
CFLAGS+=	${${ACTIVE_CC} == "gcc":? -misel :}
.endif
CFLAGS+=	${${ACTIVE_CC} == "gcc":? -msdata=none :}
CFLAGS+=	-msoft-float
CFLAGS+=	${CCPUOPTS}
AFLAGS+=	${AOPTS} -D_NOREGNAMES

##
## (3) libkern and compat
##
OPT_MODULAR=	

##
## (4) local objects, compile rules, and dependencies
##
.if !defined(SYSTEM_FIRST_OBJ)
SYSTEM_FIRST_OBJ= locore.o
.endif
.if !defined(SYSTEM_FIRST_SFILE)
SYSTEM_FIRST_SFILE= ${THISPPC}/${MACHINE}/locore.S
.endif
MD_OBJS=	${SYSTEM_FIRST_OBJ}
MD_CFILES=
MD_SFILES=	${SYSTEM_FIRST_SFILE}

${SYSTEM_FIRST_OBJ}: ${SYSTEM_FIRST_SFILE} assym.h
	${NORMAL_S}

##
## (5) link settings
##
KERNLDSCRIPT?=	${POWERPC}/conf/kern.ldscript
TEXTADDR?=	0x100000
LINKFORMAT=	-N

ENTRYPOINT=	__start

.if defined(NEED_MDSETIMAGE) && $(NEED_MDSETIMAGE) != "no" \
    && defined(RAMDISKDIR) && exists(${RAMDISKDIR}/ramdisk.fs)
SYSTEM_DEP+=	${RAMDISKDIR}/ramdisk.fs
SYSTEM_LD_TAIL_EXTRA+=; \
	echo ${TOOL_MDSETIMAGE} -s $@ ${RAMDISKDIR}/ramdisk.fs; \
	${TOOL_MDSETIMAGE} -s $@ ${RAMDISKDIR}/ramdisk.fs
.if !empty(DEBUG:M-g*)
SYSTEM_LD_TAIL_EXTRA+=; \
	echo ${TOOL_MDSETIMAGE} -s $@.gdb ${RAMDISKDIR}/ramdisk.fs; \
	${TOOL_MDSETIMAGE} -s $@.gdb ${RAMDISKDIR}/ramdisk.fs
.endif
.endif

.if defined(NEED_SREC) && ${NEED_SREC} != "no"
SYSTEM_LD_TAIL_EXTRA+=; \
	echo ${OBJCOPY} -O srec $@ $@.srec; \
	${OBJCOPY} -O srec $@ $@.srec
.endif

.if defined(NEED_BINARY) && ${NEED_BINARY} != "no"
SYSTEM_LD_TAIL_EXTRA+=; \
	echo ${OBJCOPY} -S -O binary $@ $@.bin; \
	${OBJCOPY} -S -O binary $@ $@.bin

EXTRA_KERNELS+= ${KERNELS:@.KERNEL.@${.KERNEL.}.bin@}

.if defined(NEED_UBOOTIMAGE) && ${NEED_UBOOTIMAGE} != "no"
_OSRELEASE!=		${HOST_SH} $S/conf/osrelease.sh
MKUBOOTIMAGEARGS=       -A powerpc -T kernel -C gz
MKUBOOTIMAGEARGS+=      -a ${TEXTADDR:C/....$/0000/} -e $(TEXTADDR)
MKUBOOTIMAGEARGS+=      -n "NetBSD/$(MACHINE) ${_OSRELEASE} ($(KERNEL_BUILD:T))"

SYSTEM_LD_TAIL_EXTRA+=; \
	echo ${TOOL_GZIP_N} -9c $@.bin '>' $@.bin.gz; \
	${TOOL_GZIP_N} -9c $@.bin > $@.bin.gz; \
	echo ${TOOL_MKUBOOTIMAGE} ${MKUBOOTIMAGEARGS} $@.bin.gz $@.ub; \
	${TOOL_MKUBOOTIMAGE} ${MKUBOOTIMAGEARGS} $@.bin.gz $@.ub

EXTRA_KERNELS+= ${KERNELS:@.KERNEL.@${.KERNEL.}.bin.gz@}
EXTRA_KERNELS+= ${KERNELS:@.KERNEL.@${.KERNEL.}.ub@}
.endif
.endif

.if !empty(SYSTEM_LD_TAIL_EXTRA_EXTRA)
SYSTEM_LD_TAIL_EXTRA+= ${SYSTEM_LD_TAIL_EXTRA_EXTRA}
.endif

##
## (6) port specific target dependencies
##

# depend on CPU configuration
locore.o machdep.o: Makefile

lock_stubs.o setfault.o: assym.h

##
## (7) misc settings
##

##
## (8) config(8) generated machinery
##
EXTRA_INCLUDES+=	-I$S/external/bsd/libnv/dist
EXTRA_INCLUDES+=	-I$S/../common/lib/libx86emu
EXTRA_INCLUDES+=	-I$S/../common/lib/libc/misc

ALLFILES= \
	arch/gcwii/gcwii/autoconf.c \
	arch/gcwii/gcwii/machdep.c \
	arch/powerpc/powerpc/clock.c \
	arch/powerpc/powerpc/procfs_machdep.c \
	dev/cons.c \
	arch/gcwii/gcwii/mainbus.c \
	arch/gcwii/gcwii/cpu.c \
	arch/gcwii/gcwii/usbgecko.c \
	arch/powerpc/powerpc/copystr.c \
	arch/powerpc/powerpc/core_machdep.c \
	arch/powerpc/powerpc/fixup.c \
	arch/powerpc/powerpc/fubyte.c \
	arch/powerpc/powerpc/fuswintr.c \
	arch/powerpc/powerpc/lock_stubs.S \
	arch/powerpc/powerpc/pmap_subr.c \
	arch/powerpc/powerpc/powerpc_machdep.c \
	arch/powerpc/powerpc/process_machdep.c \
	arch/powerpc/powerpc/setfault.S \
	arch/powerpc/powerpc/sig_machdep.c \
	arch/powerpc/powerpc/softint_machdep.c \
	arch/powerpc/powerpc/subyte.c \
	arch/powerpc/powerpc/suword.c \
	arch/powerpc/powerpc/suswintr.c \
	arch/powerpc/powerpc/sys_machdep.c \
	arch/powerpc/powerpc/syscall.c \
	arch/powerpc/powerpc/vm_machdep.c \
	arch/powerpc/powerpc/fpu.c \
	arch/powerpc/oea/cpu_subr.c \
	arch/powerpc/oea/oea_machdep.c \
	arch/powerpc/oea/pmap.c \
	arch/powerpc/oea/pmap_kernel.c \
	arch/powerpc/powerpc/trap.c \
	arch/powerpc/pic/intr.c \
	dev/dev_verbose.c \
	crypto/arc4/arc4.c \
	crypto/rijndael/rijndael-alg-fst.c \
	crypto/rijndael/rijndael-api-fst.c \
	crypto/rijndael/rijndael.c \
	crypto/nist_ctr_drbg/nist_ctr_drbg.c \
	crypto/cprng_fast/cprng_fast.c \
	netatalk/at_print.c \
	netinet/igmp.c \
	netinet/in.c \
	netinet/in_offload.c \
	netinet/in_pcb.c \
	netinet/in_print.c \
	netinet/in_proto.c \
	netinet/ip_icmp.c \
	netinet/ip_id.c \
	netinet/ip_input.c \
	netinet/ip_output.c \
	netinet/ip_reass.c \
	netinet/raw_ip.c \
	netinet/tcp_input.c \
	netinet/tcp_output.c \
	netinet/tcp_sack.c \
	netinet/tcp_subr.c \
	netinet/tcp_timer.c \
	netinet/tcp_usrreq.c \
	netinet/tcp_congctl.c \
	netinet/tcp_vtw.c \
	netinet/udp_usrreq.c \
	netinet/portalgo.c \
	netinet6/in6_print.c \
	fs/cd9660/cd9660_bmap.c \
	fs/cd9660/cd9660_lookup.c \
	fs/cd9660/cd9660_node.c \
	fs/cd9660/cd9660_rrip.c \
	fs/cd9660/cd9660_util.c \
	fs/cd9660/cd9660_vfsops.c \
	fs/cd9660/cd9660_vnops.c \
	fs/ptyfs/ptyfs_subr.c \
	fs/ptyfs/ptyfs_vfsops.c \
	fs/ptyfs/ptyfs_vnops.c \
	fs/tmpfs/tmpfs_fifoops.c \
	fs/tmpfs/tmpfs_mem.c \
	fs/tmpfs/tmpfs_rename.c \
	fs/tmpfs/tmpfs_specops.c \
	fs/tmpfs/tmpfs_subr.c \
	fs/tmpfs/tmpfs_vfsops.c \
	fs/tmpfs/tmpfs_vnops.c \
	fs/union/union_subr.c \
	fs/union/union_vfsops.c \
	fs/union/union_vnops.c \
	miscfs/kernfs/kernfs_vfsops.c \
	miscfs/kernfs/kernfs_vnops.c \
	miscfs/nullfs/null_vfsops.c \
	miscfs/nullfs/null_vnops.c \
	miscfs/procfs/procfs_auxv.c \
	miscfs/procfs/procfs_cmdline.c \
	miscfs/procfs/procfs_fd.c \
	miscfs/procfs/procfs_fpregs.c \
	miscfs/procfs/procfs_linux.c \
	miscfs/procfs/procfs_map.c \
	miscfs/procfs/procfs_mem.c \
	miscfs/procfs/procfs_note.c \
	miscfs/procfs/procfs_regs.c \
	miscfs/procfs/procfs_status.c \
	miscfs/procfs/procfs_subr.c \
	miscfs/procfs/procfs_vfsops.c \
	miscfs/procfs/procfs_vnops.c \
	ufs/ffs/ffs_alloc.c \
	ufs/ffs/ffs_balloc.c \
	ufs/ffs/ffs_inode.c \
	ufs/ffs/ffs_snapshot.c \
	ufs/ffs/ffs_subr.c \
	ufs/ffs/ffs_tables.c \
	ufs/ffs/ffs_vfsops.c \
	ufs/ffs/ffs_vnops.c \
	ufs/ffs/ffs_quota2.c \
	ufs/mfs/mfs_vfsops.c \
	ufs/mfs/mfs_vnops.c \
	ufs/mfs/mfs_miniroot.c \
	ufs/ufs/ufs_bmap.c \
	ufs/ufs/ufs_extattr.c \
	ufs/ufs/ufs_inode.c \
	ufs/ufs/ufs_lookup.c \
	ufs/ufs/ufs_quota.c \
	ufs/ufs/ufs_quota1.c \
	ufs/ufs/ufs_quota2.c \
	ufs/ufs/quota1_subr.c \
	ufs/ufs/quota2_subr.c \
	ufs/ufs/ufs_rename.c \
	ufs/ufs/ufs_vfsops.c \
	ufs/ufs/ufs_vnops.c \
	uvm/uvm_amap.c \
	uvm/uvm_anon.c \
	uvm/uvm_aobj.c \
	uvm/uvm_bio.c \
	uvm/uvm_coredump.c \
	uvm/uvm_device.c \
	uvm/uvm_fault.c \
	uvm/uvm_glue.c \
	uvm/uvm_init.c \
	uvm/uvm_io.c \
	uvm/uvm_km.c \
	uvm/uvm_loan.c \
	uvm/uvm_map.c \
	uvm/uvm_meter.c \
	uvm/uvm_mmap.c \
	uvm/uvm_mremap.c \
	uvm/uvm_object.c \
	uvm/uvm_page.c \
	uvm/uvm_pager.c \
	uvm/uvm_pdaemon.c \
	uvm/uvm_pdpolicy_clock.c \
	uvm/uvm_pglist.c \
	uvm/uvm_physseg.c \
	uvm/uvm_readahead.c \
	uvm/uvm_stat.c \
	uvm/uvm_swap.c \
	uvm/uvm_unix.c \
	uvm/uvm_user.c \
	uvm/uvm_vnode.c \
	secmodel/secmodel.c \
	compat/common/compat_util.c \
	conf/debugsyms.c \
	conf/param.c \
	kern/bufq_disksort.c \
	kern/bufq_fcfs.c \
	kern/core_elf32.c \
	kern/cnmagic.c \
	kern/exec_elf32.c \
	kern/exec_script.c \
	kern/exec_subr.c \
	kern/init_main.c \
	kern/init_sysctl.c \
	kern/init_sysctl_base.c \
	kern/init_sysent.c \
	kern/kern_acct.c \
	kern/kern_auth.c \
	kern/kern_cfglock.c \
	kern/kern_clock.c \
	kern/kern_condvar.c \
	kern/kern_core.c \
	kern/kern_cpu.c \
	kern/kern_descrip.c \
	kern/kern_event.c \
	kern/kern_exec.c \
	kern/kern_exit.c \
	kern/kern_fork.c \
	kern/kern_idle.c \
	kern/kern_hook.c \
	kern/kern_kthread.c \
	kern/kern_lock.c \
	kern/kern_lwp.c \
	kern/kern_malloc.c \
	kern/kern_module.c \
	kern/kern_module_vfs.c \
	kern/kern_mutex.c \
	kern/kern_mutex_obj.c \
	kern/kern_ntptime.c \
	kern/kern_physio.c \
	kern/kern_pmf.c \
	kern/kern_proc.c \
	kern/kern_prot.c \
	kern/kern_ras.c \
	kern/kern_rate.c \
	kern/kern_reboot.c \
	kern/kern_resource.c \
	kern/kern_rndpool.c \
	kern/kern_rndq.c \
	kern/kern_rndsink.c \
	kern/kern_runq.c \
	kern/kern_rwlock.c \
	kern/kern_rwlock_obj.c \
	kern/kern_scdebug.c \
	kern/kern_sig.c \
	kern/kern_sleepq.c \
	kern/kern_softint.c \
	kern/kern_ssp.c \
	kern/kern_stub.c \
	kern/kern_subr.c \
	kern/kern_synch.c \
	kern/kern_syscall.c \
	kern/kern_sysctl.c \
	kern/kern_tc.c \
	kern/kern_time.c \
	kern/kern_timeout.c \
	kern/kern_turnstile.c \
	kern/kern_todr.c \
	kern/kern_uidinfo.c \
	kern/kern_uuid.c \
	kern/sched_4bsd.c \
	kern/subr_autoconf.c \
	kern/subr_blist.c \
	kern/subr_bufq.c \
	kern/subr_callback.c \
	kern/subr_cprng.c \
	kern/subr_cpufreq.c \
	kern/subr_copy.c \
	kern/subr_device.c \
	kern/subr_devsw.c \
	kern/subr_disk.c \
	kern/subr_disk_open.c \
	kern/subr_evcnt.c \
	kern/subr_exec_fd.c \
	kern/subr_extent.c \
	kern/subr_hash.c \
	kern/subr_humanize.c \
	kern/subr_interrupt.c \
	kern/subr_iostat.c \
	kern/subr_ipi.c \
	kern/subr_kcpuset.c \
	kern/subr_kmem.c \
	kern/subr_kobj.c \
	kern/subr_kobj_vfs.c \
	kern/subr_localcount.c \
	kern/subr_lockdebug.c \
	kern/subr_log.c \
	kern/subr_lwp_specificdata.c \
	kern/subr_once.c \
	kern/subr_optstr.c \
	kern/subr_pcq.c \
	kern/subr_pcu.c \
	kern/subr_percpu.c \
	kern/subr_pool.c \
	kern/subr_prf.c \
	kern/subr_prof.c \
	kern/subr_pserialize.c \
	kern/subr_psref.c \
	kern/subr_specificdata.c \
	kern/subr_time.c \
	kern/subr_vmem.c \
	kern/subr_workqueue.c \
	kern/subr_xcall.c \
	kern/sys_aio.c \
	kern/sys_descrip.c \
	kern/sys_generic.c \
	kern/sys_module.c \
	kern/sys_mqueue.c \
	kern/sys_lwp.c \
	kern/sys_pipe.c \
	kern/sys_process.c \
	kern/sys_ptrace.c \
	kern/sys_ptrace_common.c \
	kern/sys_pset.c \
	kern/sys_select.c \
	kern/sys_sig.c \
	kern/sys_sched.c \
	kern/sys_socket.c \
	kern/tty.c \
	kern/tty_conf.c \
	kern/tty_pty.c \
	kern/tty_ptm.c \
	kern/tty_subr.c \
	kern/tty_tty.c \
	kern/uipc_accf.c \
	kern/uipc_domain.c \
	kern/uipc_mbuf.c \
	kern/uipc_mbuf2.c \
	net/link_proto.c \
	kern/uipc_proto.c \
	kern/uipc_sem.c \
	kern/uipc_socket.c \
	kern/uipc_socket2.c \
	kern/uipc_syscalls.c \
	kern/uipc_usrreq.c \
	kern/vfs_bio.c \
	kern/vfs_cache.c \
	kern/vfs_cwd.c \
	kern/vfs_dirhash.c \
	kern/vfs_getcwd.c \
	kern/vfs_hooks.c \
	kern/vfs_init.c \
	kern/vfs_lockf.c \
	kern/vfs_lookup.c \
	kern/vfs_mount.c \
	kern/vfs_quotactl.c \
	kern/vfs_subr.c \
	kern/vfs_syscalls.c \
	kern/vfs_trans.c \
	kern/vfs_vnode.c \
	kern/vfs_vnops.c \
	kern/vfs_xattr.c \
	kern/vnode_if.c \
	miscfs/deadfs/dead_vfsops.c \
	miscfs/deadfs/dead_vnops.c \
	miscfs/fifofs/fifo_vnops.c \
	miscfs/genfs/genfs_io.c \
	miscfs/genfs/genfs_rename.c \
	miscfs/genfs/genfs_vfsops.c \
	miscfs/genfs/genfs_vnops.c \
	miscfs/genfs/layer_subr.c \
	miscfs/genfs/layer_vfsops.c \
	miscfs/genfs/layer_vnops.c \
	miscfs/specfs/spec_vnops.c \
	dev/clock_subr.c \
	dev/dkwedge/dk.c \
	dev/mm.c \
	dev/rndpseudo.c \
	net/bpf_stub.c \
	net/dl_print.c \
	net/if.c \
	net/if_llatbl.c \
	net/if_loop.c \
	net/if_media.c \
	net/pfil.c \
	net/pktqueue.c \
	net/net_stats.c \
	net/radix.c \
	net/raw_cb.c \
	net/raw_usrreq.c \
	net/route.c \
	net/rss_config.c \
	net/rtbl.c \
	net/rtsock.c \
	netinet/cpu_in_cksum.c \
	netinet/in4_cksum.c \
	netinet/in_cksum.c \
	netinet/ip_encap.c \
	netinet/wqinput.c \
	secmodel/suser/secmodel_suser.c \
	secmodel/securelevel/secmodel_securelevel.c \
	secmodel/extensions/secmodel_extensions.c \
	secmodel/bsd44/secmodel_bsd44.c \
	devsw.c \
	ioconf.c \
	swapnetbsd.c \

#%OFILES

#%CFILES

#%SFILES

KERNELS+=netbsd

#%RULES

##
## (9) port independent kernel machinery
##
.include "$S/conf/Makefile.kern.inc"
${KERNLIB} ${KERNLIB_PROF} ${KERNLIBLN}: assym.h

##
## (10) Appending make options.
##
OPT.procfs_machdep.c+= procfs
OPT.mainbus.c+= mainbus
OPT.cpu.c+= cpu
OPT.usbgecko.c+= usbgecko
OPT.core_machdep.c+= coredump
OPT.pmap_subr.c+= ppc_oea
OPT.cpu_subr.c+= ppc_oea
OPT.oea_machdep.c+= ppc_oea
OPT.pmap.c+= ppc_oea
OPT.pmap_kernel.c+= ppc_oea
OPT.trap.c+= ppc_oea
OPT.igmp.c+= inet
OPT.in.c+= inet
OPT.in_offload.c+= inet
OPT.in_pcb.c+= inet
OPT.in_proto.c+= inet
OPT.ip_icmp.c+= inet
OPT.ip_id.c+= inet
OPT.ip_input.c+= inet
OPT.ip_output.c+= inet
OPT.ip_reass.c+= inet
OPT.raw_ip.c+= inet
OPT.tcp_input.c+= inet
OPT.tcp_output.c+= inet
OPT.tcp_sack.c+= inet
OPT.tcp_subr.c+= inet
OPT.tcp_timer.c+= inet
OPT.tcp_usrreq.c+= inet
OPT.tcp_congctl.c+= inet
OPT.tcp_vtw.c+= inet
OPT.udp_usrreq.c+= inet
OPT.portalgo.c+= inet
OPT.cd9660_bmap.c+= cd9660
OPT.cd9660_lookup.c+= cd9660
OPT.cd9660_node.c+= cd9660
OPT.cd9660_rrip.c+= cd9660
OPT.cd9660_util.c+= cd9660
OPT.cd9660_vfsops.c+= cd9660
OPT.cd9660_vnops.c+= cd9660
OPT.ptyfs_subr.c+= ptyfs
OPT.ptyfs_vfsops.c+= ptyfs
OPT.ptyfs_vnops.c+= ptyfs
OPT.tmpfs_fifoops.c+= tmpfs
OPT.tmpfs_mem.c+= tmpfs
OPT.tmpfs_rename.c+= tmpfs
OPT.tmpfs_specops.c+= tmpfs
OPT.tmpfs_subr.c+= tmpfs
OPT.tmpfs_vfsops.c+= tmpfs
OPT.tmpfs_vnops.c+= tmpfs
OPT.union_subr.c+= union
OPT.union_vfsops.c+= union
OPT.union_vnops.c+= union
OPT.kernfs_vfsops.c+= kernfs
OPT.kernfs_vnops.c+= kernfs
OPT.null_vfsops.c+= nullfs
OPT.null_vnops.c+= nullfs
OPT.procfs_auxv.c+= procfs
OPT.procfs_cmdline.c+= procfs
OPT.procfs_fd.c+= procfs
OPT.procfs_fpregs.c+= procfs
OPT.procfs_linux.c+= procfs
OPT.procfs_map.c+= procfs
OPT.procfs_mem.c+= procfs
OPT.procfs_note.c+= procfs
OPT.procfs_regs.c+= procfs
OPT.procfs_status.c+= procfs
OPT.procfs_subr.c+= procfs
OPT.procfs_vfsops.c+= procfs
OPT.procfs_vnops.c+= procfs
OPT.ffs_alloc.c+= ffs
OPT.ffs_balloc.c+= ffs
OPT.ffs_inode.c+= ffs
OPT.ffs_snapshot.c+= ffs
OPT.ffs_subr.c+= ffs
OPT.ffs_tables.c+= ffs
OPT.ffs_vfsops.c+= ffs
OPT.ffs_vnops.c+= ffs
OPT.ffs_quota2.c+= quota2 ffs mfs
OPT.mfs_vfsops.c+= mfs
OPT.mfs_vnops.c+= mfs
OPT.ufs_bmap.c+= ufs
OPT.ufs_extattr.c+= ffs mfs ufs_extattr
OPT.ufs_inode.c+= ffs mfs
OPT.ufs_lookup.c+= ufs
OPT.ufs_quota.c+= quota quota2 ffs mfs
OPT.ufs_quota1.c+= quota ffs mfs
OPT.ufs_quota2.c+= quota2 ffs mfs
OPT.quota2_subr.c+= quota2 ffs mfs
OPT.ufs_rename.c+= ffs mfs
OPT.ufs_vfsops.c+= ufs
OPT.ufs_vnops.c+= ufs
OPT.uvm_amap.c+= uvm
OPT.uvm_anon.c+= uvm
OPT.uvm_aobj.c+= uvm
OPT.uvm_bio.c+= uvm
OPT.uvm_coredump.c+= coredump
OPT.uvm_device.c+= uvm
OPT.uvm_fault.c+= uvm
OPT.uvm_glue.c+= uvm
OPT.uvm_init.c+= uvm
OPT.uvm_io.c+= uvm
OPT.uvm_km.c+= uvm
OPT.uvm_loan.c+= uvm
OPT.uvm_map.c+= uvm
OPT.uvm_meter.c+= uvm
OPT.uvm_mmap.c+= uvm
OPT.uvm_mremap.c+= uvm
OPT.uvm_object.c+= uvm
OPT.uvm_page.c+= uvm
OPT.uvm_pager.c+= uvm
OPT.uvm_pdaemon.c+= uvm
OPT.uvm_pdpolicy_clock.c+=
OPT.uvm_pglist.c+= uvm
OPT.uvm_physseg.c+= uvm
OPT.uvm_readahead.c+= uvm
OPT.uvm_stat.c+= uvm
OPT.uvm_swap.c+= vmswap
OPT.uvm_unix.c+= uvm
OPT.uvm_user.c+= uvm
OPT.uvm_vnode.c+= uvm
OPT.compat_util.c+= kern
OPT.debugsyms.c+= kern
OPT.param.c+= kern
OPT.bufq_disksort.c+= bufq_disksort
OPT.bufq_fcfs.c+= bufq_fcfs
OPT.core_elf32.c+= exec_elf32
OPT.cnmagic.c+= kern
OPT.exec_elf32.c+= exec_elf32
OPT.exec_script.c+= exec_script
OPT.exec_subr.c+= kern
OPT.init_main.c+= kern
OPT.init_sysctl.c+= kern
OPT.init_sysctl_base.c+= kern
OPT.init_sysent.c+= kern
OPT.kern_acct.c+= kern
OPT.kern_auth.c+= kern
OPT.kern_cfglock.c+= kern
OPT.kern_clock.c+= kern
OPT.kern_condvar.c+= kern
OPT.kern_core.c+= coredump
OPT.kern_cpu.c+= kern
OPT.kern_descrip.c+= kern
OPT.kern_event.c+= kern
OPT.kern_exec.c+= kern
OPT.kern_exit.c+= kern
OPT.kern_fork.c+= kern
OPT.kern_idle.c+= kern
OPT.kern_hook.c+= kern
OPT.kern_kthread.c+= kern
OPT.kern_lock.c+= kern
OPT.kern_lwp.c+= kern
OPT.kern_malloc.c+= kern
OPT.kern_module.c+= kern
OPT.kern_module_vfs.c+= kern
OPT.kern_mutex.c+= kern
OPT.kern_mutex_obj.c+= kern
OPT.kern_ntptime.c+= kern
OPT.kern_physio.c+= kern
OPT.kern_pmf.c+= kern
OPT.kern_proc.c+= kern
OPT.kern_prot.c+= kern
OPT.kern_ras.c+= kern
OPT.kern_rate.c+= kern
OPT.kern_reboot.c+= kern
OPT.kern_resource.c+= kern
OPT.kern_rndpool.c+= kern
OPT.kern_rndq.c+= kern
OPT.kern_rndsink.c+= kern
OPT.kern_runq.c+= kern
OPT.kern_rwlock.c+= kern
OPT.kern_rwlock_obj.c+= kern
OPT.kern_scdebug.c+= kern
OPT.kern_sig.c+= kern
OPT.kern_sleepq.c+= kern
OPT.kern_softint.c+= kern
OPT.kern_ssp.c+= kern
OPT.kern_stub.c+= kern
OPT.kern_subr.c+= kern
OPT.kern_synch.c+= kern
OPT.kern_syscall.c+= kern
OPT.kern_sysctl.c+= kern
OPT.kern_tc.c+= kern
OPT.kern_time.c+= kern
OPT.kern_timeout.c+= kern
OPT.kern_turnstile.c+= kern
OPT.kern_todr.c+= kern
OPT.kern_uidinfo.c+= kern
OPT.kern_uuid.c+= kern
OPT.sched_4bsd.c+= sched_4bsd
OPT.subr_autoconf.c+= kern
OPT.subr_blist.c+= vmswap
OPT.subr_bufq.c+= kern
OPT.subr_callback.c+= kern
OPT.subr_cprng.c+= kern
OPT.subr_cpufreq.c+= kern
OPT.subr_copy.c+= kern
OPT.subr_device.c+= kern
OPT.subr_devsw.c+= kern
OPT.subr_disk.c+= kern
OPT.subr_disk_open.c+= kern
OPT.subr_evcnt.c+= kern
OPT.subr_exec_fd.c+= kern
OPT.subr_extent.c+= kern
OPT.subr_hash.c+= kern
OPT.subr_humanize.c+= kern
OPT.subr_interrupt.c+= kern
OPT.subr_iostat.c+= kern
OPT.subr_ipi.c+= kern
OPT.subr_kcpuset.c+= kern
OPT.subr_kmem.c+= kern
OPT.subr_kobj.c+= kern
OPT.subr_kobj_vfs.c+= kern
OPT.subr_localcount.c+= kern
OPT.subr_lockdebug.c+= kern
OPT.subr_log.c+= kern
OPT.subr_lwp_specificdata.c+= kern
OPT.subr_once.c+= kern
OPT.subr_optstr.c+= kern
OPT.subr_pcq.c+= kern
OPT.subr_pcu.c+= kern
OPT.subr_percpu.c+= kern
OPT.subr_pool.c+= kern
OPT.subr_prf.c+= kern
OPT.subr_prof.c+= kern
OPT.subr_pserialize.c+= kern
OPT.subr_psref.c+= kern
OPT.subr_specificdata.c+= kern
OPT.subr_time.c+= kern
OPT.subr_vmem.c+= kern
OPT.subr_workqueue.c+= kern
OPT.subr_xcall.c+= kern
OPT.sys_aio.c+= aio
OPT.sys_descrip.c+= kern
OPT.sys_generic.c+= kern
OPT.sys_module.c+= kern
OPT.sys_mqueue.c+= mqueue
OPT.sys_lwp.c+= kern
OPT.sys_pipe.c+=
OPT.sys_process.c+= ptrace_hooks
OPT.sys_ptrace.c+= ptrace
OPT.sys_ptrace_common.c+= ptrace
OPT.sys_pset.c+= kern
OPT.sys_select.c+= kern
OPT.sys_sig.c+= kern
OPT.sys_sched.c+= kern
OPT.sys_socket.c+= kern
OPT.tty.c+= kern
OPT.tty_conf.c+= kern
OPT.tty_pty.c+= pty
OPT.tty_ptm.c+= pty
OPT.tty_subr.c+= kern
OPT.tty_tty.c+= kern
OPT.uipc_accf.c+= kern
OPT.uipc_domain.c+= kern
OPT.uipc_mbuf.c+= kern
OPT.uipc_mbuf2.c+= kern
OPT.link_proto.c+= kern
OPT.uipc_proto.c+= kern
OPT.uipc_sem.c+= kern
OPT.uipc_socket.c+= kern
OPT.uipc_socket2.c+= kern
OPT.uipc_syscalls.c+= kern
OPT.uipc_usrreq.c+= kern
OPT.vfs_bio.c+= vfs
OPT.vfs_cache.c+= vfs
OPT.vfs_cwd.c+= vfs
OPT.vfs_dirhash.c+= vfs
OPT.vfs_getcwd.c+= vfs
OPT.vfs_hooks.c+= vfs
OPT.vfs_init.c+= vfs
OPT.vfs_lockf.c+= vfs
OPT.vfs_lookup.c+= vfs
OPT.vfs_mount.c+= vfs
OPT.vfs_quotactl.c+= vfs
OPT.vfs_subr.c+= vfs
OPT.vfs_syscalls.c+= vfs
OPT.vfs_trans.c+= vfs
OPT.vfs_vnode.c+= vfs
OPT.vfs_vnops.c+= vfs
OPT.vfs_xattr.c+= vfs
OPT.vnode_if.c+= vfs
OPT.dead_vfsops.c+= vfs
OPT.dead_vnops.c+= vfs
OPT.fifo_vnops.c+= vfs
OPT.genfs_io.c+= vfs
OPT.genfs_rename.c+= vfs
OPT.genfs_vfsops.c+= vfs
OPT.genfs_vnops.c+= vfs
OPT.layer_subr.c+= layerfs
OPT.layer_vfsops.c+= layerfs
OPT.layer_vnops.c+= layerfs
OPT.spec_vnops.c+= vfs
OPT.clock_subr.c+= kern
OPT.dk.c+= kern
OPT.mm.c+= kern
OPT.rndpseudo.c+= rnd
OPT.bpf_stub.c+= net
OPT.if.c+= net
OPT.if_llatbl.c+= inet
OPT.if_loop.c+= loop
OPT.if_media.c+= net
OPT.pfil.c+= net
OPT.pktqueue.c+= net
OPT.net_stats.c+= net
OPT.radix.c+= net
OPT.raw_cb.c+= net
OPT.raw_usrreq.c+= net
OPT.route.c+= net
OPT.rss_config.c+= net
OPT.rtbl.c+= net
OPT.rtsock.c+= net
OPT.cpu_in_cksum.c+= inet
OPT.in4_cksum.c+= inet
OPT.in_cksum.c+= inet
OPT.ip_encap.c+= inet
OPT.wqinput.c+= inet
OPT.secmodel_suser.c+= secmodel_suser
OPT.secmodel_securelevel.c+= secmodel_securelevel
OPT.secmodel_extensions.c+= secmodel_extensions
OPT.secmodel_bsd44.c+= secmodel_bsd44
