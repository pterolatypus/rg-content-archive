#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Boxes);
    VERSION_CONFIG;

    requiredAddons[] = {
      "RG_Core"
    };

    units[] = {
      QCLASS(Box_Base),
      QCLASS(Box_BaseNet_G),
      QCLASS(Box_BaseNet_FSG),
      QCLASS(Box_BaseNet_V),
      QCLASS(Box_BaseNet_M),
      QCLASS(Box_SupplyCrate),
      QCLASS(box_supply_pallet),
      QCLASS(box_weapons_base),
      QCLASS(Box_Berets),
      QCLASS(Box_gear_un),
      QCLASS(Box_divinggear),
      QCLASS(Box_gamblerft),
      QCLASS(Box_gamblerft_sm),
      QCLASS(Box_gamblerfsg),
      QCLASS(Box_gambler_pco),
      QCLASS(Box_medical),
      QCLASS(Box_parachutes),
      QCLASS(Box_talon),
      QCLASS(Box_vegas),
      QCLASS(Crate_Night),
      QCLASS(Crate_Vegas),
      QCLASS(Box_assets)
    };
  };
};

#include "CfgVehicles.cpp"
#include "CfgEventHandlers.cpp"