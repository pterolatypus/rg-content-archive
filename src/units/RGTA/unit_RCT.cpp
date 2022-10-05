//----RG Recruit (Training)
class CLASS(Gambler_Base);
class RG_Recruit: CLASS(Gambler_Base) {
    scope = 2;
    editorSubcategory = QCLASS(RGTA);
    DisplayName = "Recruit/Reserve";
    editorPreview = QPATHTOF(RGTA\UI\preview\RG_Recruit.jpg);
    icon = "iconMan";
    engineer = 1;
    backpack = "";
    Items[] = {
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
      Q_NVG
    };
    RespawnItems[] = {
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
      Q_NVG
    };
    linkedItems[] = {
      Q_LINKEDITEMS,
      "CUP_V_B_BAF_MTP_Osprey_Mk4_Webbing",
      "rg_Beret_recruit",
      "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
      Q_LINKEDITEMS,
      "CUP_V_B_BAF_MTP_Osprey_Mk4_Webbing",
      "rg_Beret_recruit",
      "rhs_googles_clear"
    };
    Weapons[] = {
      "Throw",
      "Put",
      Q_RIFLE_STANDARD
    };
    RespawnWeapons[] = {
      "Throw",
      "Put",
      Q_RIFLE_STANDARD
    };
    Magazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_STUN,Q_G_STUN
    };
    RespawnMagazines[]= {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_G_SMOKE_W,Q_G_SMOKE_W,
        Q_G_FRAG,Q_G_FRAG,
        Q_G_STUN,Q_G_STUN
    };
};
