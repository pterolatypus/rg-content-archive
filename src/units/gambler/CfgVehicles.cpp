#include "..\common_defs.hpp"

//Gambler Squad Unit Defs
class CfgVehicles {
    class CLASS(SoldierBase);
    class CLASS(Gambler_Base): CLASS(SoldierBase) {
        displayName = "Gambler Rifleman Base";
        faction = QCLASS(TaskForce_MTP);
        editorSubcategory = QCLASS(Section);
        nakedUniform = QCLASS(Underwear_G);
        uniformClass = "CUP_U_CRYE_G3C_MC";
    };
    #include "unit_SQL.cpp"
    #include "unit_2IC.cpp"
    #include "unit_AUR.cpp"
    #include "unit_ENG.cpp"
    #include "unit_GRN.cpp"
    #include "unit_LAT.cpp"
    #include "unit_MED.cpp"
    #include "unit_MRK.cpp"
};
