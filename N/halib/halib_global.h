#ifndef HALIB_GLOBAL_H
#define HALIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(HALIB_LIBRARY)
#  define HALIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define HALIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // HALIB_GLOBAL_H
