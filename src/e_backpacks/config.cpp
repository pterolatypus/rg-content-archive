#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Equipment - Backpacks);
    VERSION_CONFIG;

    requiredAddons[] = {
      "RG_Core"
    };

    units[] = {};
  };
};

#include "CfgVehicles.cpp"
