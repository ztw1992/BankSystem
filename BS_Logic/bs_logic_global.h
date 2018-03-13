#ifndef BS_LOGIC_GLOBAL_H
#define BS_LOGIC_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BS_LOGIC_LIBRARY)
#  define BS_LOGIC_GLOBAL_EXPORT Q_DECL_EXPORT
#else
#  define BS_LOGIC_GLOBAL_EXPORT Q_DECL_IMPORT
#endif

#endif // BS_LOGIC_GLOBAL_H
