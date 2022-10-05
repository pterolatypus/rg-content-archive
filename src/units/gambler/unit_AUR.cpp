//----Gambler Squad AUR

//--Gambler Squad AUR MTP
class CLASS(InfantryAuR_MTP): CLASS(Gambler_Base) {
    scope = 2;
    DisplayName = "Squad Auto Rifleman MTP";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryAuR_MTP.jpg);
    icon = "iconManMG";
    uniformClass = "CUP_U_CRYE_G3C_MC_V3";
    backpack = QCLASS(B_AUR_MTP);
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
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_morphine",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_MapTools",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ACE_Flashlight_MX991",
        "ACE_EarPlugs",
        "ACE_microDAGR",
        Q_RADIO_PRR
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_aur),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_aur),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    Weapons[] = {
        Q_RIFLE_SAW,
        Q_SIDEARM,
        "Throw",
        "Put"
    };
    RespawnWeapons[] = {
        Q_RIFLE_SAW,
        Q_SIDEARM,
        "Throw",
        "Put"
    };
    Magazines[]= {
        Q_MAG_AUR,Q_MAG_AUR,Q_MAG_AUR,Q_MAG_AUR,
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_FRAG,
        Q_G_STUN,Q_G_STUN
    };
    RespawnMagazines[]= {
        Q_MAG_AUR,Q_MAG_AUR,Q_MAG_AUR,Q_MAG_AUR,
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_FRAG,
        Q_G_STUN,Q_G_STUN
    };
};
//Gambler AUR MTP Backpack
class CLASS(B_mtp_assaultbag);
class CLASS(B_AUR_MTP): CLASS(B_mtp_assaultbag) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(MAG_AUR,1);
        MACRO_ADDMAG(MAG_AUR_TRC,3);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad AUR SN
class CLASS(InfantryAuR_SN): CLASS(InfantryAuR_MTP) {
    faction       = QCLASS(TaskForce_SN);
    DisplayName   = "Squad Auto Rifleman SN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryAuR_SN.jpg);
    backpack      = QCLASS(B_AUR_SN);
    uniformClass  = QCLASS(U_SN_LS);
    linkedItems[]= {
        Q_LINKEDITEMS,
        "RG_Vest_Carrier1_SN",
        "CFP_OPS2017_Helmet_White",
        "rhsusf_shemagh_white"
    };
    respawnLinkedItems[]= {
        Q_LINKEDITEMS,
        "RG_Vest_Carrier1_SN",
        "CFP_OPS2017_Helmet_White",
        "rhsusf_shemagh_white"
    };
};
//Gambler AUR SN Backpack
class CLASS(B_blk_assaultbag);
class CLASS(B_AUR_SN): CLASS(B_blk_assaultbag) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(MAG_AUR,1);
        MACRO_ADDMAG(MAG_AUR_TRC,3);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad AUR JN
/*
class CLASS(InfantryAuR_JN): CLASS(InfantryAuR_MTP) {
    faction       = QCLASS(TaskForce_JN);
    DisplayName   = "Squad Auto Rifleman JN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryAuR_JN.jpg);
    backpack      = QCLASS(B_AUR_JN);
    uniformClass  = QCLASS(U_CombatUniform_DPMW);
    linkedItems[]= {
        Q_LINKEDITEMS,
        "CUP_V_B_BAF_DPM_Osprey_Mk3_AutomaticRifleman",
        "UK3CB_BAF_H_Mk6_DPMW_B",
        "rhs_googles_clear"
    };
    respawnLinkedItems[]= {
        Q_LINKEDITEMS,
        "CUP_V_B_BAF_DPM_Osprey_Mk3_AutomaticRifleman",
        "UK3CB_BAF_H_Mk6_DPMW_B",
        "rhs_googles_clear"
    };
};
//Gambler AUR JN Backpack
class UK3CB_BAF_B_Bergen_DPMW_Rifleman_B;
class RG_B_AUR_JN: UK3CB_BAF_B_Bergen_DPMW_Rifleman_B {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(MAG_AUR,2);
        MACRO_ADDMAG(MAG_AUR_TRC,1);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_canteen,2);
        MACRO_ADDITEM(UK3CB_BAF_H_Boonie_DPMW_PRR,1);
    };
};
*/