/* confdefs.h */
#define PACKAGE_NAME "ProtonCash Core"
#define PACKAGE_TARNAME "protoncashbrain"
#define PACKAGE_VERSION "0.01"
#define PACKAGE_STRING "ProtonCash Core 0.01"
#define PACKAGE_BUGREPORT "https://github.com/MoneroFan/ProtonCash/issues"
#define PACKAGE_URL "https://protoncash.org/"
#define HAVE_CXX11 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define HAVE_PTHREAD 1
#define HAVE_DECL_STRERROR_R 1
#define HAVE_STRERROR_R 1
#define STRERROR_R_CHAR_P 1
#define HAVE_FUNC_ATTRIBUTE_VISIBILITY 1
/* end confdefs.h.  */

/* Override any GCC internal prototype to avoid an error.
   Use char because int might match the return type of a GCC
   builtin and then its argument prototype would still apply.  */
#ifdef __cplusplus
extern "C"
#endif
char clock_gettime ();
int
main ()
{
return clock_gettime ();
  ;
  return 0;
}
