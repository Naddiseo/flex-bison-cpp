AC_PREREQ([2.65])

AC_INIT([flex-bison-cpp], [1.0.0], [], [], [http://naddiseo.ca/projects/flex-bison-cpp])

AH_TOP([
#pragma once
])

AC_PROG_CXX

AC_PATH_PROG(FLEX, [flex], [flex])
AC_PATH_PROG(BISON, [bison], [bison])

LDFLAGS=""
CXXFLAGS="-g -std=c++11 -Iinclude -Wall -Werror -Wfatal-errors -I. -pipe -fomit-frame-pointer -D_FORTIFY_SOURCE=2 -fstack-protector-all"
CFLAGS=""


AC_SUBST(CXXFLAGS)
AC_SUBST(CXXLDFLAGS)


AC_CONFIG_FILES([Makefile])

AC_OUTPUT
