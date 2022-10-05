#include "..\common_defs.hpp"
//Talon CSG Unit Definitions
class CfgVehicles {
    class CFP_Camelbak_Mule_Drab;
    class CLASS(B_TalonDaypack): CFP_Camelbak_Mule_Drab {
        scope = 1;
        class TransportItems {
            MACRO_ADDITEM(ACE_canteen, 3);
        };
    };
  
    class RG_SoldierBase;
    class CLASS(SoldierBase_Talon): CLASS(SoldierBase) {
    	camouflage = 1.1; //B_Soldier_F is 1.4
        cost = 70000; //AI will prefer to shoot at infantry than pilots
        nakedUniform = QCLASS(Underwear_T);
    	editorSubcategory = QCLASS(TalonCSG);
        backpack = "";
    };
    #include "unit_V_CMDR.cpp"
    #include "unit_V_CREW.cpp"
    #include "unit_F_PLT.cpp"
    #include "unit_R_PLT.cpp"
    #include "unit_R_CHF.cpp"
    #include "unit_R_LDR_1.cpp"
    #include "unit_R_LDR_2.cpp"
};
