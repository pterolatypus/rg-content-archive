#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Insignia);
    VERSION_CONFIG;

    requiredAddons[] = {
      "RG_Core"
    };
    units[] = {};
  };
};

#include "CfgUnitInsignia.cpp"
