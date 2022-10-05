//----Gambler Squad 2IC


//--Gambler Squad 2IC MTP
class CLASS(Infantry2ic_MTP): CLASS(Gambler_Base) {
    scope = 2;
    DisplayName = "Squad 2ic MTP";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_Infantry2ic_MTP.jpg);
    icon = "iconManLeader";
    uniformClass = "CUP_U_CRYE_G3C_MC_V2";
    backpack = QCLASS(B_2IC_MTP);
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
        "ItemAndroid",
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
        "ItemAndroid",
        Q_RADIO_PRR
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_2ic),
        QCLASS(mohawk_mtp_g_nco),
        "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_2ic),
        QCLASS(mohawk_mtp_g_nco),
        "rhs_googles_clear"
    };
    Weapons[] = {
        Q_RIFLE_STANDARD,
        Q_SIDEARM,
        "Rangefinder",
        "Throw",
        "Put"
    };
    RespawnWeapons[] = {
        Q_RIFLE_STANDARD,
        Q_SIDEARM,
        "Rangefinder",
        "Throw",
        "Put"
    };
    Magazines[]= {
      Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
      Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
      Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
      Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
      Q_G_FRAG,Q_G_FRAG,
      Q_G_STUN,Q_G_STUN,Q_G_STUN
    };
    RespawnMagazines[]= {
      Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
      Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
      Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
      Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
      Q_G_FRAG,Q_G_FRAG,
      Q_G_STUN,Q_G_STUN,Q_G_STUN
    };
};
//Squad 2IC MTP Backpack
class CLASS(B_mtp_kitbag);
class CLASS(B_2IC_MTP): CLASS(B_mtp_kitbag) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_B,3);
        MACRO_ADDMAG(G_SMOKE_R,2);
        MACRO_ADDMAG(MAG_AUR,2);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_canteen,2);
        MACRO_ADDITEM(RADIO_ITR,1);
    };
};

//--Gambler Squad 2IC SN
class CLASS(Infantry2iC_SN): CLASS(Infantry2iC_MTP) {
    faction       = QCLASS(TaskForce_SN);
    DisplayName   = "Squad 2iC SN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_Infantry2iC_SN.jpg);
    backpack      = QCLASS(B_2IC_SN);
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
//Squad 2IC SN Backpack
class CLASS(B_blk_kitbag);
class CLASS(B_2IC_SN): CLASS(B_blk_kitbag) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_B,3);
        MACRO_ADDMAG(G_SMOKE_R,2);
        MACRO_ADDMAG(MAG_AUR,2);

    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(RADIO_ITR,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad 2IC JN
/*
class CLASS(Infantry2iC_JN): CLASS(Infantry2iC_MTP) {
    faction       = QCLASS(TaskForce_JN);
    DisplayName   = "Squad 2iC JN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_Infantry2iC_JN.jpg);
    backpack      = QCLASS(B_2IC_JN);
    uniformClass  = QCLASS(U_CombatUniform_DPMW);
    linkedItems[]= {
        Q_LINKEDITEMS,
        QCLASS(V_Osprey_DPMW8),
        "UK3CB_BAF_H_Mk6_DPMW_C",
        "rhs_googles_clear"
    };
    respawnLinkedItems[]= {
        Q_LINKEDITEMS,
        QCLASS(V_Osprey_DPMW8),
        "UK3CB_BAF_H_Mk6_DPMW_C",
        "rhs_googles_clear"
    };
};
//Squad 2IC Backpack JN
class RG_B_2IC_JN: UK3CB_BAF_B_Bergen_DPMW_SL_A {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_B,2);
        MACRO_ADDMAG(G_SMOKE_R,1);
        MACRO_ADDMAG(MAG_AUR,2);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(RADIO_ITR,1);
        MACRO_ADDITEM(ACE_canteen,2);
        MACRO_ADDITEM(UK3CB_BAF_H_Boonie_DPMW_PRR,1);
    };
};
*/
