//----Highroller Company Commander (Lt Col)

//--CoyCo MTP
class RG_CompanyCO_MTP: CLASS(Highroller_Base) {
    scope = 2;
    DisplayName = "TaskForce LtCol MTP";
    editorPreview = QPATHTOF(highroller\UI\preview\RG_CompanyCO_MTP.jpg);
    icon = "iconManOfficer";
    uniformClass = "CUP_U_CRYE_G3C_MC";
    backpack = QCLASS(B_LTC_MTP);
    Items[] = {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_morphine",
        "ACE_MapTools",
        "ACE_CableTie","ACE_CableTie",
        "ACE_Flashlight_MX991",
        "ACE_EarPlugs",
        "ItemcTab",
        Q_RADIO_ITR
    };
    RespawnItems[] = {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_morphine",
        "ACE_MapTools",
        "ACE_CableTie","ACE_CableTie",
        "ACE_Flashlight_MX991",
        "ACE_EarPlugs",
        "ItemcTab",
        Q_RADIO_ITR
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        "CUP_V_CPC_communications_rngr",
        QCLASS(Beret_highroller_ltc),
        "G_Squares_Tinted"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        "CUP_V_CPC_communications_rngr",
        QCLASS(Beret_highroller_ltc),
        "G_Squares_Tinted"
    };
    Weapons[] = {
        "Throw",
        "Put",
        QCLASS(SIW_ACOG),
        "rhsusf_weap_glock17g4",
        "Laserdesignator_01_khk_F"
    };
    RespawnWeapons[] = {
        "Throw",
        "Put",
        QCLASS(SIW_ACOG),
        "rhsusf_weap_glock17g4",
        "Laserdesignator_01_khk_F"
    };
    Magazines[] = {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        MAG_SIDEARM_FMJ,MAG_SIDEARM_FMJ,MAG_SIDEARM_FMJ,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_SMOKE_W,Q_G_SMOKE_W,
        "Laserbatteries"
    };
    RespawnMagazines[] = {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        MAG_SIDEARM_FMJ,MAG_SIDEARM_FMJ,MAG_SIDEARM_FMJ,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_SMOKE_W,Q_G_SMOKE_W,
        "Laserbatteries"
    };
};
//CoyCo MTP backpack
class SOG_BAG_tan;
class RG_B_LTC_MTP: SOG_BAG_tan {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_W,4);
        MACRO_ADDMAG(G_SMOKE_B,2);
    };
    class TransportItems {
        MACRO_ADDITEM(CLASS(fast_tan_highroller),1);
        MACRO_ADDITEM(ACE_Canteen,2);
        MACRO_ADDITEM(RADIO_ITR,1);
        MACRO_ADDITEM(NVG,1);
    };
};

//--Company Commander SN
class RG_CompanyCO_SN: RG_CompanyCO_MTP {
    faction = QCLASS(TaskForce_SN);
    DisplayName = "TaskForce LtCol SN";
    editorPreview = QPATHTOF(highroller\UI\preview\RG_CompanyCO_SN.jpg);
    backpack = QCLASS(B_LTC_SN);
    uniformClass = QCLASS(U_SN_LS);
    linkedItems[] = {
        Q_LINKEDITEMS,
        "B_UavTerminal",
        "RG_Vest_Carrier2_SN",
        "RG_Beret_highroller_ltc",
        "rhsusf_shemagh_white"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        "B_UavTerminal",
        "RG_Vest_Carrier2_SN",
        "RG_Beret_highroller_ltc",
        "rhsusf_shemagh_white"
    };
};
//CoyCo SN Backpack
class CFP_AssaultPack_White;
class RG_B_LTC_SN: CFP_AssaultPack_White {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_W,4);
        MACRO_ADDMAG(G_SMOKE_B,2);
    };
    class TransportItems {
        MACRO_ADDITEM(CLASS(fast_tan_highroller),1);
        MACRO_ADDITEM(ACE_Canteen,2);
        MACRO_ADDITEM(RADIO_ITR,1);
        MACRO_ADDITEM(NVG,1);
    };
};

//--Company Commander JN
/*
class RG_CompanyCO_JN: RG_CompanyCO_MTP {
    faction       = "RG_TaskForce_JN";
    DisplayName   = "TaskForce LtCol JN";
    editorPreview = QPATHTOF(highroller\UI\preview\RG_CompanyCO_JN.jpg);
    backpack      = "RG_B_LTC_JN";
    uniformClass  = "RG_U_CombatUniform_DPMW_ShortSleeve";
    linkedItems[]= {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "CUP_V_B_BAF_DPM_Osprey_Mk3_Officer",
        "RG_Beret_highroller_ltc",
        "G_Squares_Tinted"
    };
    respawnLinkedItems[]= {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "CUP_V_B_BAF_DPM_Osprey_Mk3_Officer",
        "RG_Beret_highroller_ltc",
        "G_Squares_Tinted"
    };
};
//CoyCo JN Backpack
class UK3CB_BAF_B_Kitbag_DPMW;
class RG_B_LTC_JN: UK3CB_BAF_B_Kitbag_DPMW {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_W,4);
        MACRO_ADDMAG(G_SMOKE_B,2);
    };
    class TransportItems {
        MACRO_ADDITEM(UK3CB_BAF_H_Mk6_DPMW_A,1);
        MACRO_ADDITEM(UK3CB_BAF_H_Boonie_DPMW_PRR,1);
        MACRO_ADDITEM(ACE_morphine,2);
        MACRO_ADDITEM(ACE_Canteen,2);
        MACRO_ADDITEM(NVG,1);
    };
};
*/
