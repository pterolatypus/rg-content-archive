#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Units);
    VERSION_CONFIG;
    requiredAddons[] = {
      "rg_core",
      "rg_e_uniforms"
    };
    units[] = {};
  };
};

#include "CfgFunctions.cpp"