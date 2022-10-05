//----Talon Heli Crew Chief

//--Crew Chief MTP
class RG_SupportChief_MTP: CLASS(SoldierBase_Talon) {
    scope=2;
    faction="RG_TaskForce_MTP";
    DisplayName="CSG Heli Crew Chief MTP";
    editorPreview = QPATHTOF(talon\UI\preview\RG_SupportChief_MTP.jpg);
    attendant=1;
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
        "rhsusf_hgu56p_mask",
        "G_Tactical_Clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        "vest_pilot_combat",
        "rhsusf_hgu56p_mask",
        "G_Tactical_Clear"
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

//--Crew Chief JN
/*
class RG_SupportChief_JN: RG_SupportChief_MTP {
    faction="RG_TaskForce_JN";
   DisplayName="CSG Heli Crew Chief JN";
   editorPreview = QPATHTOF(talon\UI\preview\RG_SupportChief_JN.jpg);
    backpack=QCLASS(B_TalonDaypack);
    uniformClass="RG_U_Smock_DPMW";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_DPMW1",
        "rhsusf_hgu56p_visor_black"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_DPMW1",
        "rhsusf_hgu56p_visor_black"
    };
};

//--Crew Chief SN
class RG_SupportChief_SN: RG_SupportChief_MTP {
    faction="RG_TaskForce_SN";
   DisplayName="CSG Heli Crew Chief SN";
   editorPreview = QPATHTOF(talon\UI\preview\RG_SupportChief_SN.jpg);
    backpack=QCLASS(B_TalonDaypack);
    uniformClass="RG_U_Smock_Arctic";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_Winter",
        "rhsusf_hgu56p_visor_black"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_Winter",
        "rhsusf_hgu56p_visor_black"
    };
};
*/