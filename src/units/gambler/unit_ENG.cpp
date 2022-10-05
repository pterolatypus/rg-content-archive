//----Gambler Squad Engineer

//--Gambler Squad ENG MTP
class CLASS(InfantryMech_MTP): CLASS(Gambler_Base) {
    scope = 2;
    DisplayName = "Squad Engineer MTP";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryMech_MTP.jpg);
    icon = "iconManEngineer";
    canDeactivateMines = 1;
    engineer = 1;
    uniformClass = "CUP_U_CRYE_G3C_MC_V3";
    backpack = QCLASS(B_Engineer_MTP);
    Items[] = {
        QCLASS(Beret_gambler),
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
        Q_RADIO_PRR
    };
    RespawnItems[] = {
        QCLASS(Beret_gambler),
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
        Q_RADIO_PRR
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_eng),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_eng),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    Weapons[] = {
        Q_RIFLE_STANDARD,
        "ACE_VMM3",
        "Throw",
        "Put"
    };
    RespawnWeapons[] = {
        Q_RIFLE_STANDARD,
        "ACE_VMM3",
        "Throw",
        "Put"
    };
    Magazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_STUN,Q_G_STUN
    };
    RespawnMagazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_STUN,Q_G_STUN
    };
};
//Engineer MTP Backpack
class CLASS(B_mtp_kitbag_wirecutters);
class CLASS(B_Engineer_MTP): CLASS(B_mtp_kitbag_wirecutters) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(DemoCharge_Remote_Mag,2);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(Toolkit,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
        MACRO_ADDITEM(MineDetector,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_Clacker,1);
        MACRO_ADDITEM(ACE_wirecutter,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad Engineer SN
class CLASS(InfantryMech_SN): CLASS(InfantryMech_MTP) {
    faction       = QCLASS(TaskForce_SN);
    DisplayName   = "Squad Engineer SN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryMech_SN.jpg);
    backpack      = QCLASS(B_Engineer_SN);
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
//Engineer SN Backpack
class CLASS(B_blk_kitbag_wirecutters);
class CLASS(B_Engineer_SN): CLASS(B_blk_kitbag_wirecutters) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(DemoCharge_Remote_Mag,2);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(Toolkit,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
        MACRO_ADDITEM(MineDetector,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_Clacker,1);
        MACRO_ADDITEM(ACE_wirecutter,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad ENG JN
/*
class CLASS(InfantryMech_JN): CLASS(InfantryMech_MTP) {
    faction       = QCLASS(TaskForce_JN);
    DisplayName   = "Squad Engineer JN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryMech_JN.jpg);
    backpack      = QCLASS(B_Engineer_JN);
    uniformClass  = QCLASS(U_CombatUniform_DPMW);
    linkedItems[]= {
        Q_LINKEDITEMS,
        "CUP_V_B_BAF_DPM_Osprey_Mk3_Engineer",
        "UK3CB_BAF_H_Mk6_DPMW_A",
        "rhs_googles_clear"
    };
    respawnLinkedItems[]= {
        Q_LINKEDITEMS,
        "CUP_V_B_BAF_DPM_Osprey_Mk3_Engineer",
        "UK3CB_BAF_H_Mk6_DPMW_A",
        "rhs_googles_clear"
    };
};
//Engineer JN Backpack
class UK3CB_BAF_B_Carryall_DPMW;
class RG_B_Engineer_JN: UK3CB_BAF_B_Carryall_DPMW {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_W,5);
        MACRO_ADDMAG(DemoCharge_Remote_Mag,2);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(Toolkit,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
        MACRO_ADDITEM(MineDetector,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_Clacker,1);
        MACRO_ADDITEM(ACE_wirecutter,1);
        MACRO_ADDITEM(ACE_canteen,2);
        MACRO_ADDITEM(UK3CB_BAF_H_Boonie_DPMW_PRR,1);
    };
};
*/
