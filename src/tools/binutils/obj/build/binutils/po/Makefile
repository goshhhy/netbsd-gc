# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003-2016 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = binutils
VERSION = 2.27

SHELL = /bin/sh


srcdir = /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/po
top_srcdir = /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils
VPATH = /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/po
top_builddir = ..

prefix = /home/ky0ko/code/netbsd-gc/src/obj/tooldir.Linux-5.4.7-arch1-1-x86_64
exec_prefix = ${prefix}
datadir = $(prefix)/
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /home/ky0ko/code/netbsd-gc/src/obj/tooldir.Linux-5.4.7-arch1-1-x86_64/bin/powerpc--netbsd-install -c -p -r
INSTALL_DATA = ${INSTALL} -m 644
MKINSTALLDIRS = /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/../mkinstalldirs

CC = cc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH /usr/sbin/msgfmt
MSGFMT = /usr/sbin/msgfmt
XGETTEXT = PATH=../src:$$PATH /usr/sbin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -O
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/bg.po $(srcdir)/da.po $(srcdir)/es.po $(srcdir)/fi.po $(srcdir)/fr.po $(srcdir)/id.po $(srcdir)/it.po $(srcdir)/ja.po $(srcdir)/ro.po $(srcdir)/ru.po $(srcdir)/rw.po $(srcdir)/sk.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/uk.po $(srcdir)/vi.po $(srcdir)/zh_CN.po $(srcdir)/zh_TW.po $(srcdir)/hr.po $(srcdir)/ca.po
GMOFILES =  $(srcdir)/bg.gmo $(srcdir)/da.gmo $(srcdir)/es.gmo $(srcdir)/fi.gmo $(srcdir)/fr.gmo $(srcdir)/id.gmo $(srcdir)/it.gmo $(srcdir)/ja.gmo $(srcdir)/ro.gmo $(srcdir)/ru.gmo $(srcdir)/rw.gmo $(srcdir)/sk.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/uk.gmo $(srcdir)/vi.gmo $(srcdir)/zh_CN.gmo $(srcdir)/zh_TW.gmo $(srcdir)/hr.gmo $(srcdir)/ca.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/addr2line.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/ar.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/arsup.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/arsup.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/bin2c.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/binemul.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/binemul.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/bucomm.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/bucomm.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/budbg.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/coffdump.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/coffgrok.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/coffgrok.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/cxxfilt.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/debug.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/debug.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/debug.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/dlltool.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/dlltool.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/dllwrap.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/dwarf.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/dwarf.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/elfcomm.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/elfcomm.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/elfedit.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/emul_aix.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/emul_vanilla.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/filemode.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/ieee.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/ieee.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/is-ranlib.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/is-strip.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/maybe-ranlib.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/maybe-strip.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/mclex.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/nlmconv.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/nlmconv.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/nm.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/not-ranlib.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/not-strip.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/objcopy.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/objdump.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/objdump.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/od-macho.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/od-xcoff.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/prdbg.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/rclex.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/rdcoff.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/rdcoff.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/rddbg.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/rddbg.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/readelf.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/rename.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/resbin.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/rescoff.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/resrc.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/resres.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/size.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/srconv.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/stabs.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/stabs.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/strings.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/sysdep.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/sysdump.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/syslex_wrap.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/unwind-ia64.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/unwind-ia64.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/version.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/windint.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/windmc.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/windmc.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/windres.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/windres.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/winduni.c \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/winduni.h \
     /home/ky0ko/code/netbsd-gc/src/tools/binutils/../../external/gpl3/binutils.old/dist/binutils/wrstabs.c

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-pdf:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
