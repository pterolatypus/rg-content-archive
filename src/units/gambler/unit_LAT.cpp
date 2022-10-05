//----Gambler Squad LAT

//--Gambler Squad LAT MTP
class CLASS(InfantryLAT_MTP): CLASS(Gambler_Base) {
    scope = 2;
    DisplayName = "Squad Light AT MTP";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryLAT_MTP.jpg);
    icon = "iconManAT";
    uniformClass = "CUP_U_CRYE_G3C_MC";
    backpack = QCLASS(B_LAT_MTP);
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
        QCLASS(vest_mtp_lat),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_lat),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    Weapons[] = {
        Q_RIFLE_STANDARD,
        Q_AT_LAUNCHER,
        "Rangefinder",
        "Throw",
        "Put"
    };
    RespawnWeapons[] = {
        Q_RIFLE_STANDARD,
        Q_AT_LAUNCHER,
        "Rangefinder",
        "Throw",
        "Put"
    };
    Magazines[]= {
      Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
      Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
      Q_AT_HEAT,
      Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
      Q_G_FRAG,Q_G_FRAG,
      Q_G_STUN
    };
    RespawnMagazines[]= {
      Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
      Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
      Q_AT_HEAT,
      Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
      Q_G_FRAG,Q_G_FRAG,
      Q_G_STUN
    };
};
//Squad LAT MTP Backpack
class CLASS(B_LAT_MTP): CLASS(B_mtp_kitbag) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(AT_HEAT,1);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad LAT SN
class CLASS(InfantryLAT_SN): CLASS(InfantryLAT_MTP) {
    faction       = QCLASS(TaskForce_SN);
    DisplayName   = "Squad Light AT SN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryLAT_SN.jpg);
    backpack      = QCLASS(B_LAT_SN);
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
//Squad LAT SN Backpack
class CLASS(B_LAT_SN): CLASS(B_blk_kitbag) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(AT_HEAT,1);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Squad LAT JN
/*
class CLASS(InfantryLAT_JN): CLASS(InfantryLAT_MTP) {
    faction       = QCLASS(TaskForce_JN);
    DisplayName   = "Squad Light AT JN";
    editorPreview = QPATHTOF(gambler\UI\preview\RG_InfantryLAT_JN.jpg);
    backpack      = QCLASS(B_LAT_JN);
    uniformClass  = QCLASS(U_CombatUniform_DPMW);
    linkedItems[]= {
        Q_LINKEDITEMS,
        QCLASS(V_Osprey_DPMW2),
        "UK3CB_BAF_H_Mk6_DPMW_B",
        "rhs_googles_clear"
    };
    respawnLinkedItems[]= {
        Q_LINKEDITEMS,
        QCLASS(V_Osprey_DPMW2),
        "UK3CB_BAF_H_Mk6_DPMW_B",
        "rhs_googles_clear"
    };
};
//Squad LAT JN Backpack
class RG_B_LAT_JN: UK3CB_BAF_B_Carryall_DPMW {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(AT_HEAT,1);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_canteen,2);
        MACRO_ADDITEM(UK3CB_BAF_H_Boonie_DPMW_PRR,1);
    };
};
*/
