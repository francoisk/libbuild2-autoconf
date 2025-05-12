// HAVE_PTHREAD_SET_NAME_NP : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_PTHREAD_SET_NAME_NP

/* Check for the presence of the pthread_set_name_np() function,
 * which sets the name of a thread. This is available on:
 * - FreeBSD 5.1+ (note that pthread_setname_np() was added later)
 * - OpenBSD 2.7 (released June 2000)
 */
#if BUILD2_AUTOCONF_FREEBSD_PREREQ(5, 1)   || \
    BUILD2_AUTOCONF_OPENBSD_PREREQ(200006)
#  define HAVE_PTHREAD_SET_NAME_NP 1
#endif
