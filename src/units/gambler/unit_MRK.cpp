//----Gambler Squad Marksman

//--Gambler Squad MRK MTP
class CLASS(InfantryMrk_MTP): CLASS(Gambler_Base) {
    scope = 2;
    DisplayName = "Squad Marksman MTP";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryMrk_MTP.jpg);
    icon = "iconMan";
    uniformClass = "CUP_U_CRYE_G3C_MC_V2";
    backpack = QCLASS(B_Marksman_MTP);
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
        QCLASS(vest_mtp_mrk),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_mrk),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    Weapons[] = {
        Q_RIFLE_DMR,
        "ACE_Vector",
        "Throw",
        "Put"
    };
    RespawnWeapons[] = {
        Q_RIFLE_DMR,
        "ACE_Vector",
        "Throw",
        "Put"
    };
    Magazines[]= {
        Q_MAG_DMR,Q_MAG_DMR,Q_MAG_DMR,
        Q_MAG_DMR,Q_MAG_DMR,
        Q_MAG_DMR_TRC,Q_MAG_DMR_TRC,Q_MAG_DMR_TRC,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_STUN
    };
    RespawnMagazines[]= {
        Q_MAG_DMR,Q_MAG_DMR,Q_MAG_DMR,
        Q_MAG_DMR,Q_MAG_DMR,
        Q_MAG_DMR_TRC,Q_MAG_DMR_TRC,Q_MAG_DMR_TRC,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_STUN
    };
};
//Gambler MRK MTP Backpack
class CLASS(B_Marksman_MTP): CLASS(B_mtp_kitbag) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(MAG_DMR,3);
        MACRO_ADDMAG(MAG_AUR,2);
        MACRO_ADDMAG(AT_HEDP, 1);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_Rangecard,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad MRK SN
class CLASS(InfantryMrk_SN): CLASS(InfantryMrk_MTP) {
    faction       = QCLASS(TaskForce_SN);
    DisplayName   = "Squad Marksman SN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryMrk_SN.jpg);
    backpack      = QCLASS(B_Marksman_SN);
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
//Gambler MRK SN Backpack
class CLASS(B_Marksman_SN): CLASS(B_blk_kitbag) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(MAG_DMR,3);
        MACRO_ADDMAG(MAG_AUR,2);
        MACRO_ADDMAG(AT_HEDP, 1);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_Rangecard,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad MRK JN
/*
class CLASS(InfantryMrk_JN): CLASS(InfantryMrk_MTP) {
    faction       = QCLASS(TaskForce_JN);
    DisplayName   = "Squad Marksman JN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryMrk_JN.jpg);
    backpack      = QCLASS(B_Marksman_JN);
    uniformClass  = QCLASS(U_CombatUniform_DPMW) ;
    linkedItems[]= {
        Q_LINKEDITEMS,
        QCLASS(V_Osprey_DPMW7),
        "UK3CB_BAF_H_Mk6_DPMW_A",
        "rhs_googles_clear"
    };
    respawnLinkedItems[]= {
        Q_LINKEDITEMS,
        QCLASS(V_Osprey_DPMW7),
        "UK3CB_BAF_H_Mk6_DPMW_A",
        "rhs_googles_clear"
    };
};
//Gambler MRK JN Backpack
class UK3CB_BAF_B_Bergen_DPMW_Rifleman_A;
class RG_B_Marksman_JN: UK3CB_BAF_B_Bergen_DPMW_Rifleman_A {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(MAG_AUR,2);
        MACRO_ADDMAG(AT_HEDP, 1);
    };
    class TransportItems {
        MACRO_ADDITEM(rhsusf_acc_ACOG_RMR,1);
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_Rangecard,1);
        MACRO_ADDITEM(ACE_canteen,2);
        MACRO_ADDITEM(UK3CB_BAF_H_Boonie_DPMW_PRR,1);
    };
};
*/
