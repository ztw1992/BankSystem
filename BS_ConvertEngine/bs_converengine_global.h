#ifndef BS_CONVERENGINE_GLOBAL_H
#define BS_CONVERENGINE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BS_CONVERTENGIENT_LIBRARY)
#  define BS_CONVERTENGIENT_GLOBAL_EXPORT Q_DECL_EXPORT
#else
#  define BS_CONVERTENGIENT_GLOBAL_EXPORT Q_DECL_IMPORT
#endif

#endif // BS_CONVERENGINE_GLOBAL_H