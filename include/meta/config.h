#ifndef META_CONFIG_H_
#define META_CONFIG_H_

#if __cplusplus > 201103L
#define META_DEPRECATED(reason) [[deprecated(reason)]]
#elif defined(__clang__)
#define META_DEPRECATED(reason) __attribute__((deprecated(reason)))
#elif defined(__GNUG__)
#define META_DEPRECATED(reason) __attribute__((deprecated))
#elif defined(_MSC_VER)
#if _MSC_VER < 1910
#define META_DEPRECATED(reason) __declspec(deprecated)
#else
#define META_DEPRECATED(reason) [[deprecated(reason)]]
#endif
#endif

#include "meta/kludges.h"

// OS X
/* #undef META_IS_DARWIN */
/* #undef _DARWIN_USE_64_BIT_INODE */

#endif
