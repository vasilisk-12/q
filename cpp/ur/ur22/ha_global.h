#ifndef HA_GLOBAL_H
#define HA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(HA_LIBRARY)
#  define HASHARED_EXPORT Q_DECL_EXPORT
#else
#  define HASHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // HA_GLOBAL_H
