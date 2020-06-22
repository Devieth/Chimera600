#include "math/data_types.h"

#define CHIMERA_AUTHOR "Kavawuvi ^v^, gbMichelle, & now Devieth"
#define CHIMERA_BUILD_NUMBER 50
#define CHIMERA_ALPHA_VERSION -600
#define CHIMERA_LUA_INTERPRETER 2.05

#ifdef CHIMERA_ALPHA_VERSION
#define CHIMERA_BUILD_STRING STR(CHIMERA_ALPHA_VERSION) " (" STR(CHIMERA_BUILD_NUMBER) ") alpha"
#else
#define CHIMERA_BUILD_STRING STR(CHIMERA_BUILD_NUMBER)
#endif
