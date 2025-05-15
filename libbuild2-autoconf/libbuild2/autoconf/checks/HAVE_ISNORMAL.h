// HAVE_ISNORMAL : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_ISNORMAL

/* Linux/glibc 2.0, FreeBSD 5.1, OpenBSD 4.4 (November 2008), NetBSD 2.0, Mac
 * OS 10.2, Windows, Mingw-w64, Solaris.
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 0)     || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(5, 1)   || \
    BUILD2_AUTOCONF_OPENBSD_PREREQ(200811) || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(2, 0)    || \
    BUILD2_AUTOCONF_MACOS_PREREQ(10, 2)    || \
    defined(BUILD2_AUTOCONF_MACOS)         || \
    defined(_WIN32)                        || \
    defined(__MINGW32__)                   || \
    ((defined(__sun) && defined(__SVR4)) || defined(__sun__))
#  define HAVE_ISNORMAL 1
#endif
