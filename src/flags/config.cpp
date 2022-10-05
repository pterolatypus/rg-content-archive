#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Flags);
    VERSION_CONFIG;

    requiredAddons[] = {
      "RG_Core",
      "A3_Signs_F"
    };

    units[] = {
      CLASS(Flag_F),
      CLASS(Flag_G_F),
      CLASS(Flag_T_F),
      CLASS(Flag_V_F),
      CLASS(Flag_H_F),
      CLASS(Flag_C_F)
    };
  };
};

#include "CfgVehicles.cpp"
#include "CfgFunctions.cpp"
#include "CfgEventHandlers.cpp"