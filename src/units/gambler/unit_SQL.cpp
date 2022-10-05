//----Gambler Squad Leader

//--Gambler Squad Leader MTP
class CLASS(InfantryLdr_MTP): CLASS(Gambler_Base) {
    scope = 2;
    DisplayName = "Squad Leader MTP";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryLdr_MTP.jpg);
    icon = "iconManOfficer";
    backpack = QCLASS(B_SQL_MTP);
    uniformClass = "CUP_U_CRYE_G3C_MC";
    Items[] = {
        QCLASS(Beret_gambler_Sgt),
        "ACE_MapTools",
        "ACE_EarPlugs",
        "ACE_Flashlight_MX991",
        "ACE_microDAGR",
        "ItemAndroid",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_morphine",
        Q_RADIO_PRR
    };
    RespawnItems[] = {
        QCLASS(Beret_gambler_Sgt),
        "ACE_MapTools",
        "ACE_EarPlugs",
        "ACE_Flashlight_MX991",
        "ACE_microDAGR",
        "ItemAndroid",
        "ACE_CableTie","ACE_CableTie","ACE_CableTie",
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_morphine",
        Q_RADIO_PRR
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_sql),
        QCLASS(mohawk_mtp_g_nco),
        "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_sql),
        QCLASS(mohawk_mtp_g_nco),
        "rhs_googles_clear"
    };
    Weapons[] = {
        Q_RIFLE_UGL,
        Q_SIDEARM,
        "Rangefinder",
        "Throw",
        "Put"
    };
    RespawnWeapons[] = {
        Q_RIFLE_UGL,
        Q_SIDEARM,
        "Rangefinder",
        "Throw",
        "Put"
    };
    Magazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_G_STUN,Q_G_STUN,Q_G_STUN,
        Q_UGL_SMOKE_W,Q_UGL_SMOKE_W,
        Q_UGL_SMOKE_R,Q_UGL_SMOKE_R
    };
    RespawnMagazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_G_STUN,Q_G_STUN,Q_G_STUN,
        Q_UGL_SMOKE_W,Q_UGL_SMOKE_W,
        Q_UGL_SMOKE_R,Q_UGL_SMOKE_R
    };
};

//Squad Leader MTP Backpack
class CLASS(B_mtp_assaultbag_radio);
class CLASS(B_SQL_MTP): CLASS(B_mtp_assaultbag_radio) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(MAG_AUR,1);
        MACRO_ADDMAG(G_SMOKE_W,3);
        MACRO_ADDMAG(G_SMOKE_B,2);
        MACRO_ADDMAG(G_SMOKE_R,2);
        MACRO_ADDMAG(UGL_SMOKE_R,2);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(RADIO_ITR,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad Leader SN
class CLASS(InfantryLdr_SN): CLASS(InfantryLdr_MTP) {
    faction       = QCLASS(TaskForce_SN);
    DisplayName   = "Squad Leader SN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryLdr_SN.jpg);
    backpack      = QCLASS(B_SQL_SN);
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
//Squad Leader SN Backpack
class CLASS(B_blk_assaultbag_radio);
class CLASS(B_SQL_SN): CLASS(B_blk_assaultbag_radio) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(MAG_AUR,1);
        MACRO_ADDMAG(G_SMOKE_B,2);
        MACRO_ADDMAG(G_SMOKE_R,2);
        MACRO_ADDMAG(UGL_SMOKE_R,2);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(RADIO_ITR,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad Leader JN
/*
class CLASS(InfantryLdr_JN): CLASS(InfantryLdr_MTP) {
    faction       = QCLASS(TaskForce_JN);
    DisplayName   = "Squad Leader JN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryLdr_JN.jpg);
    backpack      = QCLASS(B_SQL_JN);
    uniformClass  = QCLASS(U_CombatUniform_DPMW_ShortSleeve);
    linkedItems[]= {
        Q_LINKEDITEMS,
        "CUP_V_B_BAF_DPM_Osprey_Mk3_Rifleman",
        "UK3CB_BAF_H_Mk6_DPMW_C",
        "rhs_googles_clear"
    };
    respawnLinkedItems[]= {
        Q_LINKEDITEMS,
        "CUP_V_B_BAF_DPM_Osprey_Mk3_Rifleman",
        "UK3CB_BAF_H_Mk6_DPMW_C",
        "rhs_googles_clear"
    };
};

//Squad Leader JN Backpack
class UK3CB_BAF_B_Bergen_DPMW_SL_A;
class RG_B_SQL_JN: UK3CB_BAF_B_Bergen_DPMW_SL_A {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(MAG_AUR,1);
        MACRO_ADDMAG(G_SMOKE_B,2);
        MACRO_ADDMAG(G_SMOKE_R,2);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(RADIO_ITR,1);
        MACRO_ADDITEM(ACE_canteen,2);
        MACRO_ADDITEM(UK3CB_BAF_H_Boonie_DPMW_PRR,1);
      };
};
*/
