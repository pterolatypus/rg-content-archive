//----Gambler Squad Medic

//--Squad Medic MTP
class CLASS(InfantryMed_MTP): CLASS(Gambler_Base) {
    scope = 2;
    DisplayName = "Squad Combat Medic MTP";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryMed_MTP.jpg);
    icon = "iconManMedic";
    attendant = 1;
    uniformClass = "CUP_U_CRYE_G3C_MC_V2";
    backpack = QCLASS(B_Medic_MTP);
    Items[] = {
        QCLASS(Beret_medic),
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_morphine",
        "ACE_MapTools",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ACE_Flashlight_MX991",
        "ACE_EarPlugs",
        "ACE_microDAGR",
        Q_RADIO_PRR,
        "ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500",
        "ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    RespawnItems[] = {
        QCLASS(Beret_medic),
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_morphine",
        "ACE_MapTools",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ACE_Flashlight_MX991",
        "ACE_EarPlugs",
        "ACE_microDAGR",
        Q_RADIO_PRR,
        "ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500",
        "ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet","ACE_Tourniquet",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage"
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_med),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_med),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    Weapons[] = {
        Q_RIFLE_STANDARD,
        "Throw",
        "Put"
    };
    RespawnWeapons[] = {
        Q_RIFLE_STANDARD,
        "Throw",
        "Put"
    };
    Magazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_SMOKE_Y,Q_G_SMOKE_Y,
        Q_G_SMOKE_B,Q_G_SMOKE_B,
        Q_G_STUN
    };
    RespawnMagazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_SMOKE_Y,Q_G_SMOKE_Y,
        Q_G_SMOKE_B,Q_G_SMOKE_B,
        Q_G_STUN
    };
};
//Squad Medic MTP Backpack
class CLASS(B_mtp_assaultbag_med);
class CLASS(B_Medic_MTP): CLASS(B_mtp_assaultbag_med) {
    scope = 1;
    scopeArsenal = 1;
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_morphine,6);
        MACRO_ADDITEM(ACE_epinephrine,8);
        MACRO_ADDITEM(ACE_fieldDressing,12);
        MACRO_ADDITEM(ACE_elasticBandage,6);
        MACRO_ADDITEM(ACE_packingBandage,6);
        MACRO_ADDITEM(ACE_quikclot,12);
        MACRO_ADDITEM(ACE_salineIV_500,4);
        MACRO_ADDITEM(ACE_salineIV,1);
        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_personalAidKit,1);
        MACRO_ADDITEM(ACE_bodybag,4);
        MACRO_ADDITEM(ACE_splint,5);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad Medic SN
class CLASS(InfantryMed_SN): CLASS(InfantryMed_MTP) {
    faction       = QCLASS(TaskForce_SN);
    DisplayName   = "Squad Combat Medic SN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryMed_SN.jpg);
    backpack      = QCLASS(B_Medic_SN);
    uniformClass  = QCLASS(U_SN_LS);
    linkedItems[]= {
        Q_LINKEDITEMS,
        "RG_Vest_Carrier2_SN",
        "CFP_OPS2017_Helmet_White",
        "rhsusf_shemagh_white"
    };
    respawnLinkedItems[]= {
        Q_LINKEDITEMS,
        "RG_Vest_Carrier2_SN",
        "CFP_OPS2017_Helmet_White",
        "rhsusf_shemagh_white"
    };
};
//Squad Medic SN Backpack
class CLASS(B_blk_assaultbag_med);
class CLASS(B_Medic_SN): CLASS(B_blk_assaultbag_med) {
    scope = 1;
    scopeArsenal = 1;
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_morphine,6);
        MACRO_ADDITEM(ACE_epinephrine,8);
        MACRO_ADDITEM(ACE_fieldDressing,12);
        MACRO_ADDITEM(ACE_elasticBandage,12);
        MACRO_ADDITEM(ACE_packingBandage,12);
        MACRO_ADDITEM(ACE_quikclot,12);
        MACRO_ADDITEM(ACE_tourniquet,4);
        MACRO_ADDITEM(ACE_salineIV_500,6);
        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_personalAidKit,1);
        MACRO_ADDITEM(ACE_bodybag,4);
        MACRO_ADDITEM(ACE_splint,5);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad Medic JN
/*
class CLASS(InfantryMed_JN): CLASS(InfantryMed_MTP) {
    faction       = QCLASS(TaskForce_JN);
    DisplayName   = "Squad Combat Medic JN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryMed_JN.jpg);
    backpack      = QCLASS(B_Medic_JN);
    uniformClass  = QCLASS(U_CombatUniform_DPMW);
    linkedItems[]= {
        Q_LINKEDITEMS,
        QCLASS(V_Osprey_DPMW9),
        "UK3CB_BAF_H_Mk6_DPMW_E",
        "rhs_googles_clear"
    };
    respawnLinkedItems[]= {
        Q_LINKEDITEMS,
        QCLASS(V_Osprey_DPMW9),
        "UK3CB_BAF_H_Mk6_DPMW_E",
        "rhs_googles_clear"
    };
};
//Squad Medic JN Backpack
class RG_B_Medic_JN: UK3CB_BAF_B_Carryall_DPMW {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_Y,2);
        MACRO_ADDMAG(G_SMOKE_B,2);

    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_morphine,6);
        MACRO_ADDITEM(ACE_epinephrine,8);
        MACRO_ADDITEM(ACE_fieldDressing,12);
        MACRO_ADDITEM(ACE_elasticBandage,12);
        MACRO_ADDITEM(ACE_packingBandage,12);
        MACRO_ADDITEM(ACE_quikclot,12);
        MACRO_ADDITEM(ACE_tourniquet,4);
        MACRO_ADDITEM(ACE_salineIV_250,6);
        MACRO_ADDITEM(ACE_salineIV_500,5);
        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_personalAidKit,1);
        MACRO_ADDITEM(ACE_bodybag,4);
        MACRO_ADDITEM(ACE_splint,5);
        MACRO_ADDITEM(ACE_canteen,2);
        MACRO_ADDITEM(UK3CB_BAF_H_Boonie_DPMW_PRR,1);
    };
};
*/
