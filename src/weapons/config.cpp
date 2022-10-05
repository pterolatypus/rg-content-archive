#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Weapons);
    VERSION_CONFIG;

    requiredAddons[] = {
      "RG_Core",
      "rhsusf_c_weapons",
      "uk3cb_baf_weapons_l110",
      "uk3cb_baf_weapons_l129"
    };

    weapons[] = {
      #include "weapons"
    };

    units[] = {};
  };
};

#include "CfgWeapons.cpp"
#include "CfgMagazines.cpp"