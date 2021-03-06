#ifndef __NPY_MATH_H_
#define __NPY_MATH_H_

#include <math.h>
#include "npy_common.h"

#if defined(__cplusplus)
extern "C" {
#endif

/*
 * NAN and INFINITY like macros (same behavior as glibc for NAN, same as C99
 * for INFINITY)
 *
 * XXX: I should test whether INFINITY and NAN are available on the platform
 */
NPY_INLINE static float __npy_inff(void)
{
    const union { npy_uint32 __i; float __f;} __bint = {0x7f800000UL};
    return __bint.__f;
}

NPY_INLINE static float __npy_nanf(void)
{
    const union { npy_uint32 __i; float __f;} __bint = {0x7fc00000UL};
    return __bint.__f;
}

NPY_INLINE static float __npy_pzerof(void)
{
    const union { npy_uint32 __i; float __f;} __bint = {0x00000000UL};
    return __bint.__f;
}

NPY_INLINE static float __npy_nzerof(void)
{
    const union { npy_uint32 __i; float __f;} __bint = {0x80000000UL};
    return __bint.__f;
}

#define NPY_INFINITYF __npy_inff()
#define NPY_NANF __npy_nanf()
#define NPY_PZEROF __npy_pzerof()
#define NPY_NZEROF __npy_nzerof()

#define NPY_INFINITY ((npy_double)NPY_INFINITYF)
#define NPY_NAN ((npy_double)NPY_NANF)
#define NPY_PZERO ((npy_double)NPY_PZEROF)
#define NPY_NZERO ((npy_double)NPY_NZEROF)

#define NPY_INFINITYL ((npy_longdouble)NPY_INFINITYF)
#define NPY_NANL ((npy_longdouble)NPY_NANF)
#define NPY_PZEROL ((npy_longdouble)NPY_PZEROF)
#define NPY_NZEROL ((npy_longdouble)NPY_NZEROF)

/*
 * Useful constants
 */
#define NPY_E         2.718281828459045235360287471352662498  /* e */
#define NPY_LOG2E     1.442695040888963407359924681001892137  /* log_2 e */
#define NPY_LOG10E    0.434294481903251827651128918916605082  /* log_10 e */
#define NPY_LOGE2     0.693147180559945309417232121458176568  /* log_e 2 */
#define NPY_LOGE10    2.302585092994045684017991454684364208  /* log_e 10 */
#define NPY_PI        3.141592653589793238462643383279502884  /* pi */
#define NPY_PI_2      1.570796326794896619231321691639751442  /* pi/2 */
#define NPY_PI_4      0.785398163397448309615660845819875721  /* pi/4 */
#define NPY_1_PI      0.318309886183790671537767526745028724  /* 1/pi */
#define NPY_2_PI      0.636619772367581343075535053490057448  /* 2/pi */
#define NPY_EULER     0.577215664901532860606512090082402431  /* Euler constant */
#define NPY_SQRT2     1.414213562373095048801688724209698079  /* sqrt(2) */
#define NPY_SQRT1_2   0.707106781186547524400844362104849039  /* 1/sqrt(2) */

#define NPY_Ef        2.718281828459045235360287471352662498F /* e */
#define NPY_LOG2Ef    1.442695040888963407359924681001892137F /* log_2 e */
#define NPY_LOG10Ef   0.434294481903251827651128918916605082F /* log_10 e */
#define NPY_LOGE2f    0.693147180559945309417232121458176568F /* log_e 2 */
#define NPY_LOGE10f   2.302585092994045684017991454684364208F /* log_e 10 */
#define NPY_PIf       3.141592653589793238462643383279502884F /* pi */
#define NPY_PI_2f     1.570796326794896619231321691639751442F /* pi/2 */
#define NPY_PI_4f     0.785398163397448309615660845819875721F /* pi/4 */
#define NPY_1_PIf     0.318309886183790671537767526745028724F /* 1/pi */
#define NPY_2_PIf     0.636619772367581343075535053490057448F /* 2/pi */
#define NPY_EULERf    0.577215664901532860606512090082402431F /* Euler constan*/
#define NPY_SQRT2f    1.414213562373095048801688724209698079F /* sqrt(2) */
#define NPY_SQRT1_2f  0.707106781186547524400844362104849039F /* 1/sqrt(2) */

#define NPY_El        2.718281828459045235360287471352662498L /* e */
#define NPY_LOG2El    1.442695040888963407359924681001892137L /* log_2 e */
#define NPY_LOG10El   0.434294481903251827651128918916605082L /* log_10 e */
#define NPY_LOGE2l    0.693147180559945309417232121458176568L /* log_e 2 */
#define NPY_LOGE10l   2.302585092994045684017991454684364208L /* log_e 10 */
#define NPY_PIl       3.141592653589793238462643383279502884L /* pi */
#define NPY_PI_2l     1.570796326794896619231321691639751442L /* pi/2 */
#define NPY_PI_4l     0.785398163397448309615660845819875721L /* pi/4 */
#define NPY_1_PIl     0.318309886183790671537767526745028724L /* 1/pi */
#define NPY_2_PIl     0.636619772367581343075535053490057448L /* 2/pi */
#define NPY_EULERl    0.577215664901532860606512090082402431L /* Euler constan*/
#define NPY_SQRT2l    1.414213562373095048801688724209698079L /* sqrt(2) */
#define NPY_SQRT1_2l  0.707106781186547524400844362104849039L /* 1/sqrt(2) */

/*
 * C99 double math funcs
 */
NDARRAY_API double npy_sin(double x);
NDARRAY_API double npy_cos(double x);
NDARRAY_API double npy_tan(double x);
NDARRAY_API double npy_sinh(double x);
NDARRAY_API double npy_cosh(double x);
NDARRAY_API double npy_tanh(double x);

NDARRAY_API double npy_asin(double x);
NDARRAY_API double npy_acos(double x);
NDARRAY_API double npy_atan(double x);
NDARRAY_API double npy_aexp(double x);
NDARRAY_API double npy_alog(double x);
NDARRAY_API double npy_asqrt(double x);
NDARRAY_API double npy_afabs(double x);

NDARRAY_API double npy_log(double x);
NDARRAY_API double npy_log10(double x);
NDARRAY_API double npy_exp(double x);
NDARRAY_API double npy_sqrt(double x);

NDARRAY_API double npy_fabs(double x);
NDARRAY_API double npy_ceil(double x);
NDARRAY_API double npy_fmod(double x, double y);
NDARRAY_API double npy_floor(double x);

NDARRAY_API double npy_expm1(double x);
NDARRAY_API double npy_log1p(double x);
NDARRAY_API double npy_hypot(double x, double y);
NDARRAY_API double npy_acosh(double x);
NDARRAY_API double npy_asinh(double xx);
NDARRAY_API double npy_atanh(double x);
NDARRAY_API double npy_rint(double x);
NDARRAY_API double npy_trunc(double x);
NDARRAY_API double npy_exp2(double x);
NDARRAY_API double npy_log2(double x);

NDARRAY_API double npy_atan2(double x, double y);
NDARRAY_API double npy_pow(double x, double y);
NDARRAY_API double npy_modf(double x, double* y);

NDARRAY_API double npy_copysign(double x, double y);
NDARRAY_API double npy_nextafter(double x, double y);
NDARRAY_API double npy_spacing(double x);

/*
 * IEEE 754 fpu handling. Those are guaranteed to be macros
 */
#if NPY_HAVE_DECL_ISNAN
    #define npy_isnan(x) isnan((x))
#else
    #define npy_isnan(x) ((x) != (x))
#endif

#if NPY_HAVE_DECL_ISFINITE
    #define npy_isfinite(x) isfinite((x))
#else
    #define npy_isfinite(x) !npy_isnan((x) + (-x))
#endif

#if NPY_HAVE_DECL_ISINF
    #define npy_isinf(x) isinf((x))
#else
    #define npy_isinf(x) (!npy_isfinite(x) && !npy_isnan(x))
#endif


/*
 * float C99 math functions
 */

NDARRAY_API float npy_sinf(float x);
NDARRAY_API float npy_cosf(float x);
NDARRAY_API float npy_tanf(float x);
NDARRAY_API float npy_sinhf(float x);
NDARRAY_API float npy_coshf(float x);
NDARRAY_API float npy_tanhf(float x);
NDARRAY_API float npy_fabsf(float x);
NDARRAY_API float npy_floorf(float x);
NDARRAY_API float npy_ceilf(float x);
NDARRAY_API float npy_rintf(float x);
NDARRAY_API float npy_truncf(float x);
NDARRAY_API float npy_sqrtf(float x);
NDARRAY_API float npy_log10f(float x);
NDARRAY_API float npy_logf(float x);
NDARRAY_API float npy_expf(float x);
NDARRAY_API float npy_expm1f(float x);
NDARRAY_API float npy_asinf(float x);
NDARRAY_API float npy_acosf(float x);
NDARRAY_API float npy_atanf(float x);
NDARRAY_API float npy_asinhf(float x);
NDARRAY_API float npy_acoshf(float x);
NDARRAY_API float npy_atanhf(float x);
NDARRAY_API float npy_log1pf(float x);
NDARRAY_API float npy_exp2f(float x);
NDARRAY_API float npy_log2f(float x);

NDARRAY_API float npy_atan2f(float x, float y);
NDARRAY_API float npy_hypotf(float x, float y);
NDARRAY_API float npy_powf(float x, float y);
NDARRAY_API float npy_fmodf(float x, float y);

NDARRAY_API float npy_modff(float x, float* y);

NDARRAY_API float npy_copysignf(float x, float y);
NDARRAY_API float npy_nextafterf(float x, float y);
NDARRAY_API float npy_spacingf(float x);

/*
 * float C99 math functions
 */

NDARRAY_API npy_longdouble npy_sinl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_cosl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_tanl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_sinhl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_coshl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_tanhl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_fabsl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_floorl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_ceill(npy_longdouble x);
NDARRAY_API npy_longdouble npy_rintl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_truncl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_sqrtl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_log10l(npy_longdouble x);
NDARRAY_API npy_longdouble npy_logl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_expl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_expm1l(npy_longdouble x);
NDARRAY_API npy_longdouble npy_asinl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_acosl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_atanl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_asinhl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_acoshl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_atanhl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_log1pl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_exp2l(npy_longdouble x);
NDARRAY_API npy_longdouble npy_log2l(npy_longdouble x);

NDARRAY_API npy_longdouble npy_atan2l(npy_longdouble x, npy_longdouble y);
NDARRAY_API npy_longdouble npy_hypotl(npy_longdouble x, npy_longdouble y);
NDARRAY_API npy_longdouble npy_powl(npy_longdouble x, npy_longdouble y);
NDARRAY_API npy_longdouble npy_fmodl(npy_longdouble x, npy_longdouble y);

NDARRAY_API npy_longdouble npy_modfl(npy_longdouble x, npy_longdouble* y);

NDARRAY_API npy_longdouble npy_copysignl(npy_longdouble x, npy_longdouble y);
NDARRAY_API npy_longdouble npy_nextafterl(npy_longdouble x, npy_longdouble y);
NDARRAY_API npy_longdouble npy_spacingl(npy_longdouble x);

/*
 * Non standard functions
 */
NDARRAY_API double npy_deg2rad(double x);
NDARRAY_API double npy_rad2deg(double x);
NDARRAY_API double npy_logaddexp(double x, double y);
NDARRAY_API double npy_logaddexp2(double x, double y);

NDARRAY_API float npy_deg2radf(float x);
NDARRAY_API float npy_rad2degf(float x);
NDARRAY_API float npy_logaddexpf(float x, float y);
NDARRAY_API float npy_logaddexp2f(float x, float y);

NDARRAY_API npy_longdouble npy_deg2radl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_rad2degl(npy_longdouble x);
NDARRAY_API npy_longdouble npy_logaddexpl(npy_longdouble x, npy_longdouble y);
NDARRAY_API npy_longdouble npy_logaddexp2l(npy_longdouble x, npy_longdouble y);

#define npy_degrees npy_rad2deg
#define npy_degreesf npy_rad2degf
#define npy_degreesl npy_rad2degl

#define npy_radians npy_deg2rad
#define npy_radiansf npy_deg2radf
#define npy_radiansl npy_deg2radl

/*
 * Complex declarations
 */

/*
 * C99 specifies that complex numbers have the same representation as
 * an array of two elements, where the first element is the real part
 * and the second element is the imaginary part.
 */
#define __NPY_CPACK_IMP(x, y, type, ctype)   \
    union {                                  \
        ctype z;                             \
        type a[2];                           \
    } z1;;                                   \
                                             \
    z1.a[0] = (x);                           \
    z1.a[1] = (y);                           \
                                             \
    return z1.z;

static NPY_INLINE npy_cdouble npy_cpack(double x, double y)
{
    __NPY_CPACK_IMP(x, y, double, npy_cdouble);
}

static NPY_INLINE npy_cfloat npy_cpackf(float x, float y)
{
    __NPY_CPACK_IMP(x, y, float, npy_cfloat);
}

static NPY_INLINE npy_clongdouble npy_cpackl(npy_longdouble x, npy_longdouble y)
{
    __NPY_CPACK_IMP(x, y, npy_longdouble, npy_clongdouble);
}
#undef __NPY_CPACK_IMP

/*
 * Same remark as above, but in the other direction: extract first/second
 * member of complex number, assuming a C99-compatible representation
 *
 * Those are defineds as static inline, and such as a reasonable compiler would
 * most likely compile this to one or two instructions (on CISC at least)
 */
#define __NPY_CEXTRACT_IMP(z, index, type, ctype)   \
    union {                                         \
        ctype z;                                    \
        type a[2];                                  \
    } __z_repr;                                     \
    __z_repr.z = z;                                 \
                                                    \
    return __z_repr.a[index];

static NPY_INLINE double npy_creal(npy_cdouble z)
{
    __NPY_CEXTRACT_IMP(z, 0, double, npy_cdouble);
}

static NPY_INLINE double npy_cimag(npy_cdouble z)
{
    __NPY_CEXTRACT_IMP(z, 1, double, npy_cdouble);
}

static NPY_INLINE float npy_crealf(npy_cfloat z)
{
    __NPY_CEXTRACT_IMP(z, 0, float, npy_cfloat);
}

static NPY_INLINE float npy_cimagf(npy_cfloat z)
{
    __NPY_CEXTRACT_IMP(z, 1, float, npy_cfloat);
}

static NPY_INLINE npy_longdouble npy_creall(npy_clongdouble z)
{
    __NPY_CEXTRACT_IMP(z, 0, npy_longdouble, npy_clongdouble);
}

static NPY_INLINE npy_longdouble npy_cimagl(npy_clongdouble z)
{
    __NPY_CEXTRACT_IMP(z, 1, npy_longdouble, npy_clongdouble);
}
#undef __NPY_CEXTRACT_IMP

/*
 * Double precision complex functions
 */
NDARRAY_API double npy_cabs(npy_cdouble z);
NDARRAY_API double npy_carg(npy_cdouble z);

NDARRAY_API npy_cdouble npy_cexp(npy_cdouble z);
NDARRAY_API npy_cdouble npy_clog(npy_cdouble z);
NDARRAY_API npy_cdouble npy_cpow(npy_cdouble x, npy_cdouble y);

NDARRAY_API npy_cdouble npy_csqrt(npy_cdouble z);

NDARRAY_API npy_cdouble npy_ccos(npy_cdouble z);
NDARRAY_API npy_cdouble npy_csin(npy_cdouble z);

/*
 * Single precision complex functions
 */
NDARRAY_API float npy_cabsf(npy_cfloat z);
NDARRAY_API float npy_cargf(npy_cfloat z);

NDARRAY_API npy_cfloat npy_cexpf(npy_cfloat z);
NDARRAY_API npy_cfloat npy_clogf(npy_cfloat z);
NDARRAY_API npy_cfloat npy_cpowf(npy_cfloat x, npy_cfloat y);

NDARRAY_API npy_cfloat npy_csqrtf(npy_cfloat z);

NDARRAY_API npy_cfloat npy_ccosf(npy_cfloat z);
NDARRAY_API npy_cfloat npy_csinf(npy_cfloat z);

/*
 * Extended precision complex functions
 */
NDARRAY_API npy_longdouble npy_cabsl(npy_clongdouble z);
NDARRAY_API npy_longdouble npy_cargl(npy_clongdouble z);

NDARRAY_API npy_clongdouble npy_cexpl(npy_clongdouble z);
NDARRAY_API npy_clongdouble npy_clogl(npy_clongdouble z);
NDARRAY_API npy_clongdouble npy_cpowl(npy_clongdouble x, npy_clongdouble y);

NDARRAY_API npy_clongdouble npy_csqrtl(npy_clongdouble z);

NDARRAY_API npy_clongdouble npy_ccosl(npy_clongdouble z);
NDARRAY_API npy_clongdouble npy_csinl(npy_clongdouble z);
    
#if defined(__cplusplus)
}
#endif

#endif
