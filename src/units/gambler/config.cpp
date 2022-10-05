#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Units - Gambler);
    VERSION_CONFIG;

    requiredAddons[] = {
      QUOTE(PARENT),
      "RG_Units_Base",
      "cba_xeh"
    };

    units[] = {
      #include "units"
    };
  };
};

#include "CfgVehicles.cpp"
#include "CfgEventHandlers.cpp"
