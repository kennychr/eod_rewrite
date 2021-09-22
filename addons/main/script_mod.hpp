// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX eod_rewrite

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define PROJ_TEMPL_TAG EOD_REWRITE

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.56

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(eod_rewrite - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(eod_rewrite - COMPONENT)
#endif
