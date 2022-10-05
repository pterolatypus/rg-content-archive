#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(3CB Flags);
    VERSION_CONFIG;
    requiredAddons[]={
      "uk3cb_baf_vehicles_coyote_jackal",
      "uk3cb_baf_vehicles_landrover",
      "uk3cb_baf_vehicles_bulldog",
      "RG_Flags"
    };
    units[]={
      "UK3CB_BAF_Jackal_Base_D",
      "UK3CB_BAF_LandRover_Base",
      "UK3CB_BAF_FV432_Mk3_Base"
    };
  };
};

#include "CfgVehicles.cpp"
