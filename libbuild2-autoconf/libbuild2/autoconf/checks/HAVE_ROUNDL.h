// HAVE_ROUNDL : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_ROUNDL

/*  Since glibc 2.1, 4.3BSD, FreeBSD 6.0, OpenBSD 5.0 (November 2011), NetBSD
 *  7.0, MacOS 10.4, Windows, Mingw-w64, POSIX.1, SVr4
 */
#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 1)     || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(6, 0)   || \
    BUILD2_AUTOCONF_OPENBSD_PREREQ(201111) || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(7, 0)    || \
    BUILD2_AUTOCONF_MACOS_PREREQ(10, 4)    || \
    defined(_WIN32)                        || \
    defined(__MINGW32__)                   || \
    ((defined(__sun) && defined(__SVR4)) || defined(__sun__))
#  define HAVE_ROUNDL 1
#endif
