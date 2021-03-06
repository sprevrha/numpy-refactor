/* npy_config.h   NOT Generated automatically by configure.

This is a manually maintained version used for the Watcom,
Borland and Microsoft Visual C++ compilers.  It is a
standard part of the distribution.
*/

#ifdef _WIN64
#define NPY_SIZEOF_DOUBLE 8
#define NPY_SIZEOF_COMPLEX_DOUBLE 16
#define NPY_SIZEOF_FLOAT 4
#define NPY_SIZEOF_COMPLEX_FLOAT 8
#define NPY_SIZEOF_INT 4
#define NPY_SIZEOF_LONG 8
#define NPY_SIZEOF_LONGDOUBLE 16
#define NPY_SIZEOF_COMPLEX_LONGDOUBLE 32
#define NPY_SIZEOF_LONGLONG 8
#define NPY_SIZEOF_SHORT 2
#define NPY_SIZEOF_PTR 8
#else
#define NPY_SIZEOF_DOUBLE 8
#define NPY_SIZEOF_COMPLEX_DOUBLE 16
#define NPY_SIZEOF_FLOAT 4
#define NPY_SIZEOF_COMPLEX_FLOAT 8
#define NPY_SIZEOF_INT 4
#define NPY_SIZEOF_LONG 4
#define NPY_SIZEOF_LONGDOUBLE 8
#define NPY_SIZEOF_COMPLEX_LONGDOUBLE 16
#define NPY_SIZEOF_LONGLONG 8
#define NPY_SIZEOF_SHORT 2
#define NPY_SIZEOF_PTR 4
#endif


#define NPY_ABI_VERSION 2.0
#define NPY_API_VERSION 2.0

#define NPY_ALLOW_THREADS 1

#define NPY_HAVE_LONGLONG 0
#define NPY_HAVE_UINTPTR_T 1
#define NPY_WORDS_BIGENDIAN 0
#define NPY_HAVE_COMPLEX_H 0
#define NPY_HAVE_STDINT_H 0
#define NPY_HAVE_STDLIB_H 1

#define NPY_HAVE_DECL_ACOS 1
#define NPY_HAVE_DECL_ACOSF 0
#define NPY_HAVE_DECL_ACOSH 0
#define NPY_HAVE_DECL_ACOSHF 0
#define NPY_HAVE_DECL_ACOSHL 0
#define NPY_HAVE_DECL_ACOSL 0
#define NPY_HAVE_DECL_ASIN 1
#define NPY_HAVE_DECL_ASINF 0
#define NPY_HAVE_DECL_ASINH 0
#define NPY_HAVE_DECL_ASINHF 0
#define NPY_HAVE_DECL_ASINHL 0
#define NPY_HAVE_DECL_ASINL 0
#define NPY_HAVE_DECL_ATAN 1
#define NPY_HAVE_DECL_ATAN2F 0
#define NPY_HAVE_DECL_ATAN2L 0
#define NPY_HAVE_DECL_ATANF 0
#define NPY_HAVE_DECL_ATANH 0
#define NPY_HAVE_DECL_ATANHF 0
#define NPY_HAVE_DECL_ATANHL 0
#define NPY_HAVE_DECL_ATANL 0
#define NPY_HAVE_DECL_CABSF 0
#define NPY_HAVE_DECL_CABSL 0
#define NPY_HAVE_DECL_CARGF 0
#define NPY_HAVE_DECL_CARGL 0
#define NPY_HAVE_DECL_CCOSF 0
#define NPY_HAVE_DECL_CCOSL 0
#define NPY_HAVE_DECL_CEIL 1
#define NPY_HAVE_DECL_CEILF 0
#define NPY_HAVE_DECL_CEILL 0
#define NPY_HAVE_DECL_CEXPF 0
#define NPY_HAVE_DECL_CEXPL 0
#define NPY_HAVE_DECL_CLOGF 0
#define NPY_HAVE_DECL_CLOGL 0
#define NPY_HAVE_DECL_COPYSIGN 0
#define NPY_HAVE_DECL_COPYSIGNF 0
#define NPY_HAVE_DECL_COPYSIGNL 0
#define NPY_HAVE_DECL_COS 1
#define NPY_HAVE_DECL_COSF 0
#define NPY_HAVE_DECL_COSH 1
#define NPY_HAVE_DECL_COSHF 0
#define NPY_HAVE_DECL_COSHL 0
#define NPY_HAVE_DECL_COSL 0
#define NPY_HAVE_DECL_CPOWF 0
#define NPY_HAVE_DECL_CPOWL 0
#define NPY_HAVE_DECL_CSINF 0
#define NPY_HAVE_DECL_CSINL 0
#define NPY_HAVE_DECL_CSQRTF 0
#define NPY_HAVE_DECL_CSQRTL 0
#define NPY_HAVE_DECL_EXP 1
#define NPY_HAVE_DECL_EXP2 0
#define NPY_HAVE_DECL_EXP2F 0
#define NPY_HAVE_DECL_EXP2L 0
#define NPY_HAVE_DECL_EXPF 0
#define NPY_HAVE_DECL_EXPL 0
#define NPY_HAVE_DECL_EXPM1 0
#define NPY_HAVE_DECL_EXPM1F 0
#define NPY_HAVE_DECL_EXPM1L 0
#define NPY_HAVE_DECL_FABS 1
#define NPY_HAVE_DECL_FABSF 0
#define NPY_HAVE_DECL_FABSL 0
#define NPY_HAVE_DECL_FLOOR 1
#define NPY_HAVE_DECL_FLOORF 0
#define NPY_HAVE_DECL_FLOORL 0
#define NPY_HAVE_DECL_FMOD 1
#define NPY_HAVE_DECL_FMODF 0
#define NPY_HAVE_DECL_FMODL 0
#define NPY_HAVE_DECL_HYPOTF 0
#define NPY_HAVE_DECL_HYPOTL 0
#define NPY_HAVE_DECL_ISFINITE 0
#define NPY_HAVE_DECL_ISINF 0
#define NPY_HAVE_DECL_ISNAN 0
#define NPY_HAVE_DECL_LOG 1
#define NPY_HAVE_DECL_LOG10 1
#define NPY_HAVE_DECL_LOG10F 0
#define NPY_HAVE_DECL_LOG10L 0
#define NPY_HAVE_DECL_LOG1P 0
#define NPY_HAVE_DECL_LOG1PF 0
#define NPY_HAVE_DECL_LOG1PL 0
#define NPY_HAVE_DECL_LOG2 0
#define NPY_HAVE_DECL_LOG2F 0
#define NPY_HAVE_DECL_LOG2L 0
#define NPY_HAVE_DECL_LOGF 0
#define NPY_HAVE_DECL_LOGL 0
#define NPY_HAVE_DECL_MODF 1
#define NPY_HAVE_DECL_MODFF 0
#define NPY_HAVE_DECL_MODFL 0
#define NPY_HAVE_DECL_NEXTAFTER 0
#define NPY_HAVE_DECL_NEXTAFTERF 0
#define NPY_HAVE_DECL_NEXTAFTERL 0
#define NPY_HAVE_DECL_POW 1
#define NPY_HAVE_DECL_POWF 0
#define NPY_HAVE_DECL_POWL 0
#define NPY_HAVE_DECL_RINT 0
#define NPY_HAVE_DECL_RINTF 0
#define NPY_HAVE_DECL_RINTL 0
#define NPY_HAVE_DECL_SIN 1
#define NPY_HAVE_DECL_SINF 0
#define NPY_HAVE_DECL_SINH 1
#define NPY_HAVE_DECL_SINHF 0
#define NPY_HAVE_DECL_SINHL 0
#define NPY_HAVE_DECL_SINL 0
#define NPY_HAVE_DECL_SQRT 1
#define NPY_HAVE_DECL_SQRTF 0
#define NPY_HAVE_DECL_SQRTL 0
#define NPY_HAVE_DECL_TAN 1
#define NPY_HAVE_DECL_TANF 0
#define NPY_HAVE_DECL_TANH 1
#define NPY_HAVE_DECL_TANHF 0
#define NPY_HAVE_DECL_TANHL 0
#define NPY_HAVE_DECL_TANL 0
#define NPY_HAVE_DECL_TRUNC 0
#define NPY_HAVE_DECL_TRUNCF 0
#define NPY_HAVE_DECL_TRUNCL 0
#define NPY_HAVE_DECL_FREXP 1
#define NPY_HAVE_DECL_FREXPF 0
#define NPY_HAVE_DECL_FREXPL 0
#define NPY_HAVE_DECL_LDEXP 1
#define NPY_HAVE_DECL_LDEXPF 0
#define NPY_HAVE_DECL_LDEXPL 0


/* Disable broken MS math functions */
#if defined(_MSC_VER) || defined(__MINGW32_VERSION)
#define NPY_HAVE_DECL_ATAN2 0
#define NPY_HAVE_DECL_HYPOT 0
#else
#define NPY_HAVE_DECL_ATAN2 1
#define NPY_HAVE_DECL_HYPOT 1
#endif


/* On win32, force long double format string to be 'g', not 'Lg', since
   the MS runtime does not support long double whose size is > sizeof(double)
*/
#define NPY_FORCE_NO_LONG_DOUBLE_FORMATTING

#ifndef __cplusplus
#define inline __inline
#endif
