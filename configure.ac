dnl Process this file with autoconf to produce a configure script.
AC_INIT([xescoba],[1.3.0])
AC_CONFIG_SRCDIR([src/main.cc])
AM_INIT_AUTOMAKE()

AM_CONFIG_HEADER(config.h)
AC_USE_SYSTEM_EXTENSIONS
AC_PROG_RANLIB
AC_PROG_CXX
AC_SEARCH_LIBS([strerror],[cposix])
ALL_LINGUAS="es"

dnl Checks for programs.
AM_PATH_GTK_2_0(2.0.0, ,
        AC_MSG_ERROR([*** GTK >=2.0.0 not installed - please install first***]))

dnl Checks for libraries.
AM_GNU_GETTEXT_VERSION
AM_GNU_GETTEXT

dnl Checks for header files.
AC_HEADER_STDC
AC_HEADER_TIME
AC_CHECK_HEADERS(string.h)

dnl Checks for typedefs, structures, and compiler characteristics.

dnl Checks for library functions.
AC_CHECK_FUNCS(strstr)

AC_CONFIG_FILES([Makefile libcomun/Makefile libcartas/Makefile libiconos/Makefile \
src/Makefile po/Makefile.in data/Makefile doc/Makefile])
AC_OUTPUT
