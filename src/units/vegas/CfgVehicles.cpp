#include "..\common_defs.hpp"
//Vegas (Special Forces) Unit Definitions
class CfgVehicles {
    class CLASS(SoldierBase);
    class CLASS(SoldierBase_V): CLASS(SoldierBase) {
    	camouflage = 0.6; //B_recon_F is 0.6
        nakedUniform = QCLASS(Underwear_V);
    	editorSubcategory = QCLASS(Vegas);
        backpack = "";
        uniformClass = "CUP_U_B_BAF_MTP_UBACSTSHIRT";
    };
    #include "unit_LDRC.cpp"
    #include "unit_AUR.cpp"
    #include "unit_AUR2.cpp"
    #include "unit_OPR.cpp"
    #include "unit_GRN.cpp"
    #include "unit_EOD.cpp"
    #include "unit_MED.cpp"
    #include "unit_MED2.cpp"
    #include "unit_SPT.cpp"
    #include "unit_SNP.cpp"
    #include "unit_RTO.cpp"
};
