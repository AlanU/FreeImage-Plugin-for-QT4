#ifndef FREEIMAGEPLUGIN_GLOBAL_H
#define FREEIMAGEPLUGIN_GLOBAL_H

#include <Qt/qglobal.h>

#ifdef FREEIMAGEPLUGIN_LIB
# define FREEIMAGEPLUGIN_EXPORT Q_DECL_EXPORT
#else
# define FREEIMAGEPLUGIN_EXPORT Q_DECL_IMPORT
#endif

#endif // FREEIMAGEPLUGIN_GLOBAL_H
