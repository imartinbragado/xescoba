bin_PROGRAMS = xescoba
xescoba_SOURCES = main.cc escoba.cc baraja.cc func.cc jugador.cc \
idle.cc menu.cc funcmenu.cc config.cc help.cc
xescoba_LDADD = @GTK_LIBS@  @LIBINTL@ \
		../libcomun/libcomun.a \
		../libcartas/libcartas.a \
		../libiconos/libiconos.a
localedir = $(datadir)/locale
AM_CPPFLAGS = -I../intl -DLOCALEDIR=\"$(localedir)\" -DDATADIR=\"$(datadir)\" \
        -fpermissive \
	@GTK_CFLAGS@ \
	-I$(srcdir)/../libcomun \
	-I$(srcdir)/../libiconos  -I$(srcdir)/../libcartas
noinst_HEADERS = xescoba.h baraja.h jugador.h licencia.h \
		config.h help.h
