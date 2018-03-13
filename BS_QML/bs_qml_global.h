#ifndef BS_QML_GLOBAL_H
#define BS_QML_GLOBAL_H


#include <QtCore/qglobal.h>

#if defined(BS_QML_LIBRARY)
#  define BS_QML_GLOBAL_EXPORT Q_DECL_EXPORT
#else
#  define BS_QML_GLOBAL_EXPORT Q_DECL_IMPORT
#endif


#endif // BS_QML_GLOBAL_H
