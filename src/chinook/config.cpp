#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"


class CfgPatches {
  class ADDON {
    ADDONINFO(Chinook);
    VERSION_CONFIG;

    requiredAddons[] = {
      "RG_Core",
      "CUP_AirVehciles_MH47E",//CUP typo, not my fault
      "RHS_US_A2_AirImport"
    };

    units[] = {
      CLASSCOMP(mh47e),
      CLASSCOMP(ch47f),
      CLASSCOMP(ch47f_d)
    };
  };
};

#include "CfgVehicles.cpp"
#include "CfgFunctions.cpp"
