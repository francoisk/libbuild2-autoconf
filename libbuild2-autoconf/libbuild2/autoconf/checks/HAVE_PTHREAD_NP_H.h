// HAVE_PTHREAD_NP_H : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_PTHREAD_NP_H

/* Existence of the pthread_np.h header, which provides non-portable pthread
 * functions.
 *
 * Since FreeBSD 5.1, OpenBSD 2.4 (released December 1998; manpage was added
 * in later release).
 *
 * TODO HAVE_PTHREAD_SET_NAME_NP is based on this check so confirm that
 * pthread_np.h declares pthread_set_name_np() on any new platforms added
 * below.
 */
#if BUILD2_AUTOCONF_FREEBSD_PREREQ(5, 1) || \
    BUILD2_AUTOCONF_OPENBSD_PREREQ(199812)
#  define HAVE_PTHREAD_NP_H 1
#endif
