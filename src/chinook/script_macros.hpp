#ifndef MACROS_CORE
  #define QUOTE(var1) #var1
  #define DOUBLES(var1,var2) ##var1##_##var2
  #define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3
  #define APATH(arg1,arg2) arg1##\##arg2
  #define FUNC(component,fname) TRIPLES(component,fnc,fname)

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

#ifndef PREFIX
    #define PREFIX RG
    #define AUTHGROUP Reality Gaming
    #define AUTHOR QUOTE(AUTHGROUP)
#endif

#ifdef SUBCOMP
  #define ADDON TRIPLES(PREFIX,COMPONENT,SUBCOMP)
  #define PARENT DOUBLES(PREFIX,COMPONENT)
  #define BASEPATH \PREFIX\PARENT\SUBCOMP
  #define COMPONENT_NAME QUOTE(AUTHGROUP COMPONENT_BEAUTIFIED - SUBCOMP_BEAUTIFIED)
#else
  #define ADDON DOUBLES(PREFIX,COMPONENT)
  #define BASEPATH \PREFIX\ADDON
  #define COMPONENT_NAME QUOTE(AUTHGROUP COMPONENT_BEAUTIFIED)
#endif


#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(CLASS(var1))

#define CLASSCOMP(var1) DOUBLES(ADDON,var1)
#define QCLASSCOMP(var1) QUOTE(CLASSCOMP(var1))

#define PATH(pathstr) BASEPATH\##pathstr
#define QPATH(pathstr) QUOTE(PATH(pathstr))

#define CSTRING(var1) QUOTE(TRIPLES($STR,ADDON,var1))
#define STRING(var1) QUOTE(TRIPLES($STR,PREFIX,var1))

#define CFUNC(var1) FUNC(ADDON,var1)
#define QCFUNC(var1) QUOTE(CFUNC(var1))

#define GVAR(var1) DOUBLES(ADDON,var1)
#define QGVAR(var1) QUOTE(GVAR(var1))
