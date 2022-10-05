#include "script_macros.hpp"

class CfgPatches {
    class ADDON {
        ADDONINFO(Spec Gear - Helmets);
        VERSION_CONFIG;

        requiredAddons[] = {
            "rg_core"
        };

        authors[] = {
            "Pterolatypus"
        };

        units[] = {
        };
    };
};

#include "CfgWeapons.cpp"