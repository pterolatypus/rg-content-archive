#include "\x\cba\addons\main\script_macros_common.hpp"
#ifndef MACROS_CORE
  #define APATH(arg1,arg2) arg1\arg2

  #define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
  }
  #define MACRO_ADDMAG(ITEM,COUNT) class _xx_##ITEM { \
    magazine = #ITEM; \
    count = COUNT; \
  }
  #define MACRO_ADDWEAPON(ITEM,COUNT) class _xx_##ITEM { \
    weapon = #ITEM; \
    count = COUNT; \
  }
  #define MACRO_ADDBACKPACK(ITEM,COUNT) class _xx_##ITEM { \
    backpack = #ITEM; \
    count = COUNT; \
  }
  #define MACROS_CORE
#endif

#ifdef SUBCOMP
  #define ADDON TRIPLES(PREFIX,COMPONENT,SUBCOMP)
  #define PARENT DOUBLES(PREFIX,COMPONENT)
  #define BASEPATH \COREPATH\COMPONENT\SUBCOMP
  #define COMPONENT_NAME QUOTE(AUTHGROUP COMPONENT_BEAUTIFIED - SUBCOMP_BEAUTIFIED)
#else
  #define ADDON DOUBLES(PREFIX,COMPONENT)
  #define BASEPATH \COREPATH\COMPONENT
  #define COMPONENT_NAME QUOTE(AUTHGROUP COMPONENT_BEAUTIFIED)
#endif

#undef PREP
#define PREP(var1) ['PATHTO_SYS(PREFIX,COMPONENT_F,functions\DOUBLES(fnc,var1))', 'TRIPLES(ADDON,fnc,var1)'] call CBA_fnc_compileFunction

#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(CLASS(var1))

#define CLASSCOMP(var1) DOUBLES(ADDON,var1)
#define QCLASSCOMP(var1) QUOTE(CLASSCOMP(var1))

#ifdef PARENT
  #define ADDONINFO(beautified) name = QUOTE(AUTHGROUP beautified); \
  author = AUTHOR; \
  addonRootClass = QUOTE(PARENT)
#else
  #define ADDONINFO(beautified) name = QUOTE(AUTHGROUP beautified); \
  author = AUTHOR
#endif
