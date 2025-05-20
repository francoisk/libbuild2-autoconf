// HAVE_SYS_ENDIAN_H

#undef HAVE_SYS_ENDIAN_H

/* Checks for the sys/endian.h header, which defines machine-specific
 * endianness macros.
 */
#if defined(__FreeBSD__) || \
    defined(__NetBSD__)
#  define HAVE_SYS_ENDIAN_H 1
#endif
