//----Gambler Platoon Support

//--Gambler Plt Support MTP
class CLASS(PlatoonFSG_MTP): CLASS(GamblerCO_Base) {
    scope = 2;
    displayName = "Platoon Support MTP";
    editorPreview = QPATHTOF(gamblercmd\UI\preview\RG_PlatoonFSG_MTP.jpg);
    attendant = 1;
    icon = "iconMan";
    uniformClass = "CUP_U_CRYE_G3C_MC_V3";
    backpack = QCLASS(B_FSG_MTP);
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
        "ACE_microDAGR",
        "ItemAndroid",
        "ACE_RangeTable_82mm","ACE_ArtilleryTable",
        "RG_beret_gambler",
        "ACE_Canteen","ACE_Canteen",
        Q_RADIO_PRR,
        Q_RADIO_ITR,
        Q_NVG
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
        "ACE_microDAGR",
        "ItemAndroid",
        "ACE_RangeTable_82mm","ACE_ArtilleryTable",
        "RG_beret_gambler",
        "ACE_Canteen","ACE_Canteen",
        Q_RADIO_PRR,
        Q_RADIO_ITR,
        Q_NVG
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_fsg),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_fsg),
        QCLASS(mohawk_mtp_g),
        "rhs_googles_clear"
    };
    Weapons[] = {
        Q_RIFLE_STANDARD,
        "ACE_Vector",
        "Throw",
        "Put"
    };
    RespawnWeapons[] = {
        Q_RIFLE_STANDARD,
        "ACE_Vector",
        "Throw",
        "Put"
    };
    Magazines[] = {
      Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
      Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
      Q_G_FRAG,Q_G_FRAG,
      Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
      Q_G_SMOKE_B,Q_G_SMOKE_B
    };
    RespawnMagazines[] = {
      Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
      Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
      Q_G_FRAG,Q_G_FRAG,
      Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
      Q_G_SMOKE_B,Q_G_SMOKE_B
    };
};
//Plt Support MTP Backpack
class B_carryall_cbr;
class CLASS(B_FSG_MTP): B_carryall_cbr {
  scope = 1;
  class TransportItems {
    MACRO_ADDITEM(ACE_EntrenchingTool,1);
  };
};

//--Gambler Plt Support SN
class RG_PlatoonFSG_SN: RG_PlatoonFSG_MTP {
    faction = QCLASS(TaskForce_SN);
    DisplayName = "Platoon Support SN";
    editorPreview = QPATHTOF(gamblercmd\UI\preview\RG_InfantryMech_SN.jpg);
    backpack = QCLASS(B_FSG_SN);
    uniformClass = QCLASS(U_SN_LS);
    linkedItems[] = {
        Q_LINKEDITEMS,
        "RG_Vest_Carrier2_SN",
        "CFP_OPS2017_Helmet_White",
        "rhsusf_shemagh_white"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        "RG_Vest_Carrier2_SN",
        "CFP_OPS2017_Helmet_White",
        "rhsusf_shemagh_white"
    };
};
//Plt Support SN Backpack
class SP_Carryall_white;
class CLASS(B_FSG_SN): SP_Carryall_white {
  scope = 1;
  class TransportItems {
    MACRO_ADDITEM(ACE_EntrenchingTool,1);
  };
};

//--Gambler Plt Support JN
/*
class RG_PlatoonFSG_JN: RG_PlatoonFSG_MTP
{
    faction="RG_TaskForce_JN";
    DisplayName="Platoon Support JN";
    editorPreview = QPATHTOF(gamblercmd\UI\preview\RG_InfantryMech_JN.jpg);
    backpack = QCLASS(B_FSG_MTP);
    uniformClass="RG_U_CombatUniform_DPMW";
    Items[]= {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_MapTools",
        "ACE_CableTie",
        "ACE_Flashlight_MX991",
        "ACE_EarPlugs",
        "ACE_morphine",
        "ACE_microDAGR",
        Q_RADIO_PRR,
        Q_RADIO_ITR,
        "ACE_EntrenchingTool",
        "ItemAndroid",
        Q_NVG,
        "UK3CB_BAF_H_Boonie_DPMW_PRR"
    };
    RespawnItems[]= {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_MapTools",
        "ACE_CableTie",
        "ACE_Flashlight_MX991",
        "ACE_EarPlugs",
        "ACE_morphine",
        "ACE_microDAGR",
        Q_RADIO_PRR,
        Q_RADIO_ITR,
        "ACE_EntrenchingTool",
        "ItemAndroid",
        Q_NVG,
        "UK3CB_BAF_H_Boonie_DPMW_PRR"
    };
    linkedItems[]= {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        QCLASS(V_Osprey_DPMW4),
        "UK3CB_BAF_H_Mk6_DPMW_B",
        "rhs_googles_clear"
    };
    respawnLinkedItems[]= {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        QCLASS(V_Osprey_DPMW4),
        "UK3CB_BAF_H_Mk6_DPMW_B",
        "rhs_googles_clear"
    };
    Magazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_SMOKE_B,Q_G_SMOKE_B,
        Q_G_SMOKE_O,Q_G_SMOKE_O
    };
    RespawnMagazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_SMOKE_B,Q_G_SMOKE_B,
        Q_G_SMOKE_O,Q_G_SMOKE_O
    };
};
*/
