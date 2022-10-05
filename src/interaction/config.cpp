#include "script_macros.hpp"

class CfgPatches {
    class ADDON {
        ADDONINFO(Interaction);
        VERSION_CONFIG;

        requiredAddons[] = {
          "A3_air_F",
          "ace_interaction"
        };

        authors[] = {
            "Pterolatypus"
        };

        units[] = {
        };
    };
};

#include "CfgVehicles.cpp"
