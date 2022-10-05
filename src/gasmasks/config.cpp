#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Gasmasks);
    VERSION_CONFIG;

    requiredAddons[] = {
      "RG_Core"
    };
    units[] = {};
  };
};

#include "CfgFunctions.hpp"
