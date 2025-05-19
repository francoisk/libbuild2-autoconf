// HAVE__SNPRINTF

#undef HAVE__SNPRINTF

/* This checks for the snprintf() function, which safely
 * formats strings into a buffer.
 * It’s part of the C99 standard and widely available.
 */
#if defined(_WIN32) || defined(__MINGW32__)
#  define HAVE__SNPRINTF 1
#endif
