//----Gambler Squad Grenadier

//--Gambler Squad Grenadier MTP
class CLASS(InfantryGrn_MTP): CLASS(Gambler_Base) {
    scope = 2;
    DisplayName = "Squad Grenadier MTP";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryGrn_MTP.jpg);
    icon = "iconManExplosive";
    uniformClass = "CUP_U_CRYE_G3C_MC_V2";
    backpack = QCLASS(B_Grenadier_MTP);
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
        QCLASS(vest_mtp_grn),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_grn),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    Weapons[] = {
        Q_RIFLE_UGL,
        "Throw",
        "Put"
    };
    RespawnWeapons[] = {
        Q_RIFLE_UGL,
        "Throw",
        "Put"
    };
    Magazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_UGL_HE,Q_UGL_HE,Q_UGL_HE,Q_UGL_HE,
        Q_UGL_HE,Q_UGL_HE,Q_UGL_HE,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_STUN,Q_G_STUN,Q_G_STUN,
        Q_UGL_SMOKE_W,Q_UGL_SMOKE_W
    };
    RespawnMagazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_UGL_HE,Q_UGL_HE,Q_UGL_HE,Q_UGL_HE,
        Q_UGL_HE,Q_UGL_HE,Q_UGL_HE,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_STUN,Q_G_STUN,Q_G_STUN,
        Q_UGL_SMOKE_W,Q_UGL_SMOKE_W
    };
};
//Squad Grenadier MTP Backpack
class CLASS(B_Grenadier_MTP): CLASS(B_mtp_assaultbag) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(UGL_HE,4);
        MACRO_ADDMAG(UGL_SMOKE_W,8);
        MACRO_ADDMAG(UGL_SMOKE_R,2);
        MACRO_ADDMAG(AT_HEDP,1);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad Grenadier SN
class CLASS(InfantryGrn_SN): CLASS(InfantryGrn_MTP) {
    faction       = QCLASS(TaskForce_SN);
    DisplayName   = "Squad Grenadier SN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryGrn_SN.jpg);
    backpack      = QCLASS(B_Grenadier_SN);
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
//Squad Grenadier SN Backpack
class CLASS(B_Grenadier_SN): CLASS(B_blk_assaultbag) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(UGL_HE,4);
        MACRO_ADDMAG(UGL_SMOKE_W,8);
        MACRO_ADDMAG(UGL_SMOKE_R,2);
        MACRO_ADDMAG(AT_HEDP,1);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad Grenadier JN
/*
class CLASS(InfantryGrn_JN): CLASS(InfantryGrn_MTP) {
    faction       = QCLASS(TaskForce_JN);
    DisplayName   = "Squad Grenadier JN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryGrn_JN.jpg);
    backpack      = QCLASS(B_Grenadier_JN);
    uniformClass  = QCLASS(U_CombatUniform_DPMW);
    linkedItems[]= {
        Q_LINKEDITEMS,
        QCLASS(V_Osprey_DPMW3),
        "UK3CB_BAF_H_Mk6_DPMW_A",
        "rhs_googles_clear"
    };
    respawnLinkedItems[]= {
        Q_LINKEDITEMS,
        QCLASS(V_Osprey_DPMW3),
        "UK3CB_BAF_H_Mk6_DPMW_A",
        "rhs_googles_clear"
    };
};
//Squad Grenadier JN Backpack
class RG_B_Grenadier_JN: UK3CB_BAF_B_Bergen_DPMW_Rifleman_B {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(UGL_HE,10);
        MACRO_ADDMAG(UGL_SMOKE_W,10);
        MACRO_ADDMAG(UGL_SMOKE_R,2);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_canteen,2);
        MACRO_ADDITEM(UK3CB_BAF_H_Boonie_DPMW_PRR,1);
    };
};
*/
