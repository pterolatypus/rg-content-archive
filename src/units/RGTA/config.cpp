#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Units - RGTA);
    VERSION_CONFIG;

    requiredAddons[] = {
      QUOTE(PARENT),
      "RG_Units_Base"
    };

    units[] = {
      #include "units"
    };
  };
};

#include "CfgVehicles.cpp"
