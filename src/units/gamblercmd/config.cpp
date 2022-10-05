#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Units - Gambler Command);
    VERSION_CONFIG;

    requiredAddons[] = {
      QUOTE(PARENT),
      "RG_Units_Base",
      "RG_Units_gambler"
    };

    units[] = {
      #include "units"
    };
  };
};

#include "CfgVehicles.cpp"
