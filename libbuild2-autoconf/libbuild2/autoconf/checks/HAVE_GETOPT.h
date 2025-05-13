// HAVE_GETOPT : BUILD2_AUTOCONF_LIBC_VERSION

#undef HAVE_GETOPT

/* Since POSIX.2, 4.3BSD, and thus in OpenBSD, FreeBSD, NetBSD, glibc, macOS,
 * Mingw-w64, and Solaris since the beginning.
 */
#if defined(__GLIBC__)             || \
    defined(__FreeBSD__)           || \
    defined(__NetBSD__)            || \
    defined(__OpenBSD__)           || \
    defined(BUILD2_AUTOCONF_MACOS) || \
    defined(__MINGW32__)           || \
    ((defined(__sun) && defined(__SVR4)) || defined(__sun__))
#  define HAVE_GETOPT 1
#endif
