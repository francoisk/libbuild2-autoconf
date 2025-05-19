// HAVE_STRUCT_STAT : HAVE_STAT

#undef HAVE_STRUCT_STAT

/* Checks for the stat structure, used with the stat
 * system call to retrieve file status information.
 *
 * The POSIX stat() function takes a struct stat so its existence is implied
 * by HAVE_STAT.
 */
#ifdef HAVE_STAT
#  define HAVE_STRUCT_STAT 1
#endif
