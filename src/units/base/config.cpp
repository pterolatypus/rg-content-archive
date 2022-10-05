#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Units - Base);
    VERSION_CONFIG;

    requiredAddons[] = {
      QUOTE(PARENT)
    };

    units[] = {};
  };
};

#include "CfgVehicles.cpp"
