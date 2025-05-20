// HAVE_TRUNCL : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_TRUNCL

/* Checks for the truncl() function from <math.h>.
 *
 * Since glibc 2.1, FreeBSD 5.3, OpenBSD 4.5 (May 2009), NetBSD 7.0, MacOS
 * 10.4.4.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 1)     || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(5, 3)   || \
    BUILD2_AUTOCONF_OPENBSD_PREREQ(200905) || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(7, 0)    || \
    BUILD2_AUTOCONF_MACOS_PREREQ(10, 5)    || \
    defined(_WIN32)                        || \
    defined(__MINGW32__)
#  define HAVE_TRUNCL 1
#endif
