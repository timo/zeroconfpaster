#ifndef ZEROCONFPASTER_GLOBAL_H
#define ZEROCONFPASTER_GLOBAL_H

#include <QtGlobal>

#if defined(ZEROCONFPASTER_LIBRARY)
#  define ZEROCONFPASTERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define ZEROCONFPASTERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // ZEROCONFPASTER_GLOBAL_H
