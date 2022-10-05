//----Talon Helicopter (Rotary-Wing) Pilot

//--Heli Pilot MTP
class RG_SupportHeli_MTP: CLASS(SoldierBase_Talon) {
    scope = 2;
    faction = "RG_TaskForce_MTP";
    DisplayName = "CSG Heli Pilot MTP";
    editorPreview = QPATHTOF(talon\UI\preview\RG_SupportHeli_MTP.jpg);
    uniformClass = "CUP_U_CRYE_MCAM_NP_Roll";
    backpack = "";
    items[] = {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_IR_Strobe_Item",
        "ACE_MapTools",
        "ACE_morphine",
        "ACRE_PRC148","ACRE_PRC148",
        "RG_Beret_talon",
        "ACE_Flashlight_KSF1",
        "ACE_EarPlugs",
        "ItemAndroid",
        "ACE_NVG_Wide",
        "ACE_Canteen","ACE_Canteen","ACE_Canteen"
    };
    respawnItems[] = {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_IR_Strobe_Item",
        "ACE_MapTools",
        "ACE_morphine",
        "ACRE_PRC148","ACRE_PRC148",
        "RG_Beret_talon",
        "ACE_Flashlight_KSF1",
        "ACE_EarPlugs",
        "ItemAndroid",
        "ACE_NVG_Wide",
        "ACE_Canteen","ACE_Canteen","ACE_Canteen"
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        "vest_pilot_combat",
        "rhsusf_hgu56p"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        "vest_pilot_combat",
        "rhsusf_hgu56p"
    };
    Weapons[] = {
        QCLASS(PDW_MP7_B),
        "Throw",
        "Put"
    };
    RespawnWeapons[] = {
        QCLASS(PDW_MP7_B),
        Q_SIDEARM,
        "Throw",
        "Put"
    };
    Magazines[] = {
        "CUP_40Rnd_46x30_MP7","CUP_40Rnd_46x30_MP7"
    };
    RespawnMagazines[] = {
        "CUP_40Rnd_46x30_MP7","CUP_40Rnd_46x30_MP7"
    };
};

//backwards compat
class RG_SupportPilotLdr_MTP: RG_SupportHeli_MTP {
    scope = 1;
};

//--Heli Pilot JN
/*
class RG_SupportHeli_JN: RG_SupportHeli_MTP {
    faction="RG_TaskForce_JN";
   DisplayName="CSG Heli Pilot JN";
   editorPreview = QPATHTOF(talon\UI\preview\RG_SupportHeli_JN.jpg);
    backpack=QCLASS(B_TalonDaypack);
    uniformClass="RG_U_Smock_DPMW";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Pilot_DPMW",
        "rhsusf_hgu56p_visor_black",
        "UK3CB_BAF_G_Tactical_Black"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Pilot_DPMW",
        "rhsusf_hgu56p_visor_black",
        "UK3CB_BAF_G_Tactical_Black"
    };
};

//--Heli Pilot SN
class RG_SupportHeli_SN: RG_SupportHeli_MTP {
    faction="RG_TaskForce_SN";
   DisplayName="CSG Heli Pilot SN";
   editorPreview = QPATHTOF(talon\UI\preview\RG_SupportHeli_SN.jpg);
    backpack=QCLASS(B_TalonDaypack);
    uniformClass="RG_U_Smock_Arctic";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_Winter",
        "rhsusf_hgu56p_visor_black",
        "UK3CB_BAF_G_Tactical_Black"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_Winter",
        "rhsusf_hgu56p_visor_black",
        "UK3CB_BAF_G_Tactical_Black"
    };
};
*/
