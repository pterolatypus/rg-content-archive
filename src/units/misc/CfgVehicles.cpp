#include "..\common_defs.hpp"
class CfgVehicles {

//MEDICAL RESUPPLY BACKPACKS
class B_carryall_cbr;
class RG_PlatoonMedic_MTP_BackPack: B_carryall_cbr {
    displayname="[RG] MTP Medical Backpack";
    scope=1;
    class TransportItems {
        MACRO_ADDITEM(ACE_elasticBandage, 30);
        MACRO_ADDITEM(ACE_packingBandage, 20);
        MACRO_ADDITEM(ACE_quikClot, 15);
        MACRO_ADDITEM(ACE_tourniquet, 6);
        MACRO_ADDITEM(ACE_bloodIV_250, 8);
        MACRO_ADDITEM(ACE_bloodIV_500, 10);
        MACRO_ADDITEM(ACE_bloodIV, 8);
        MACRO_ADDITEM(ACE_morphine, 6);
        MACRO_ADDITEM(ACE_epinephrine,8);
        MACRO_ADDITEM(ACE_adenosine,6);
        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_personalAidKit, 4);
        MACRO_ADDITEM(ACE_Splint, 12);
    };
};

class SP_Carryall_white;
class RG_PlatoonMedic_SN_BackPack: SP_Carryall_white {
    displayname="[RG] Winter Medical Backpack";
    scope=1;
    class TransportItems {
        MACRO_ADDITEM(ACE_elasticBandage, 30);
        MACRO_ADDITEM(ACE_packingBandage, 20);
        MACRO_ADDITEM(ACE_quikClot, 15);
        MACRO_ADDITEM(ACE_tourniquet, 6);
        MACRO_ADDITEM(ACE_bloodIV_250, 8);
        MACRO_ADDITEM(ACE_bloodIV_500, 10);
        MACRO_ADDITEM(ACE_bloodIV, 8);
        MACRO_ADDITEM(ACE_morphine, 6);
        MACRO_ADDITEM(ACE_epinephrine,8);
        MACRO_ADDITEM(ACE_adenosine,6);
        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_personalAidKit, 4);
        MACRO_ADDITEM(ACE_Splint, 12);
    };
};

/*
class RG_PlatoonMedic_DS_BackPack: B_carryall_cbr {
    scope=1;
    displayname="[RG] Desert Medical Backpack";
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_Y,8);
        MACRO_ADDMAG(ACE_HandFlare_Yellow, 4);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_fieldDressing, 30);
        MACRO_ADDITEM(ACE_elasticBandage, 30);
        MACRO_ADDITEM(ACE_packingBandage, 30);
        MACRO_ADDITEM(ACE_quikClot, 30);
        MACRO_ADDITEM(ACE_tourniquet, 4);
        MACRO_ADDITEM(ACE_bloodIV_250, 4);
        MACRO_ADDITEM(ACE_bloodIV_500, 4);
        MACRO_ADDITEM(ACE_bloodIV, 4);
        MACRO_ADDITEM(ACE_morphine, 15);
        MACRO_ADDITEM(ACE_epinephrine,12);
        MACRO_ADDITEM(RG_Beret_medic,1);
        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_personalAidKit, 5);
        MACRO_ADDITEM(ACE_Splint, 20);
    };
};
class UK3CB_BAF_B_Carryall_DPMW;
class RG_PlatoonMedic_WD_BackPack: UK3CB_BAF_B_Carryall_DPMW {
    displayname="[RG] Jungle Medical Backpack";
    scope=1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_Y,8);
        MACRO_ADDMAG(ACE_HandFlare_Yellow, 4);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_fieldDressing, 30);
        MACRO_ADDITEM(ACE_elasticBandage, 30);
        MACRO_ADDITEM(ACE_packingBandage, 30);
        MACRO_ADDITEM(ACE_quikClot, 30);
        MACRO_ADDITEM(ACE_tourniquet, 4);
        MACRO_ADDITEM(ACE_bloodIV_250, 4);
        MACRO_ADDITEM(ACE_bloodIV_500, 4);
        MACRO_ADDITEM(ACE_bloodIV, 4);
        MACRO_ADDITEM(ACE_morphine, 15);
        MACRO_ADDITEM(ACE_epinephrine,12);
        MACRO_ADDITEM(RG_Beret_medic,1);
        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_personalAidKit, 5);
        MACRO_ADDITEM(ACE_Splint, 20);
    };
};
*/

//TALON
class RG_SupportBugout_DS_BackPack: B_carryall_cbr {
    author=AUTHOR;
    scope=2;
    displayName="Talon bug out bag";
    class TransportMagazines {
        MACRO_ADDMAG(UK3CB_BAF_SmokeShellBlue, 2);
        MACRO_ADDMAG(Chemlight_blue, 2);
        MACRO_ADDMAG(ACE_HandFlare_Green, 2);
    };
    class TransportItems {
        MACRO_ADDITEM(Toolkit, 1);
    };
};

};
