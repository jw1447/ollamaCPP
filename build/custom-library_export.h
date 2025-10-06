
#ifndef CUSTOM_LIBRARY_EXPORT_H
#define CUSTOM_LIBRARY_EXPORT_H

#ifdef CUSTOM_LIBRARY_STATIC_DEFINE
#  define CUSTOM_LIBRARY_EXPORT
#  define CUSTOM_LIBRARY_NO_EXPORT
#else
#  ifndef CUSTOM_LIBRARY_EXPORT
#    ifdef custom_library_EXPORTS
        /* We are building this library */
#      define CUSTOM_LIBRARY_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define CUSTOM_LIBRARY_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef CUSTOM_LIBRARY_NO_EXPORT
#    define CUSTOM_LIBRARY_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef CUSTOM_LIBRARY_DEPRECATED
#  define CUSTOM_LIBRARY_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef CUSTOM_LIBRARY_DEPRECATED_EXPORT
#  define CUSTOM_LIBRARY_DEPRECATED_EXPORT CUSTOM_LIBRARY_EXPORT CUSTOM_LIBRARY_DEPRECATED
#endif

#ifndef CUSTOM_LIBRARY_DEPRECATED_NO_EXPORT
#  define CUSTOM_LIBRARY_DEPRECATED_NO_EXPORT CUSTOM_LIBRARY_NO_EXPORT CUSTOM_LIBRARY_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef CUSTOM_LIBRARY_NO_DEPRECATED
#    define CUSTOM_LIBRARY_NO_DEPRECATED
#  endif
#endif

#endif /* CUSTOM_LIBRARY_EXPORT_H */
