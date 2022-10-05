#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
  class ADDON {
    ADDONINFO(Land Vehicles - Warrior);
    VERSION_CONFIG;

        authors[] = {
            "Whigital",
            "lllBENlll",
            "Pterolatypus"
        };

        units[]= {
            QCLASSCOMP(base),
            QCLASSCOMP(olive),
            QCLASSCOMP(woodland),
            QCLASSCOMP(desert),
            QCLASSCOMP(snow),
            QCLASSCOMP(un)
        };

        weapons[]= {
            QCLASS(30mm_L21A1),
            QCLASS(762_L94A1),
            QCLASS(safe)
        };

        requiredAddons[]= {
            "A3_Modules_F",
            "A3_Armor_F_EPB_APC_tracked_03",
            "A3_Armor_F_Beta",
            "ace_common",
            "ace_medical",
            "rhsusf_c_weapons",
            "UK3CB_BAF_Weapons"
        };
    };
};

#include "CfgMagazines.cpp"
#include "CfgWeapons.cpp"
#include "CfgVehicles.cpp"
