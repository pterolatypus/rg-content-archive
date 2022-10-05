//----Talon Lead Heli Pilot

//--Lead Pilot MTP
class RG_SupportPilotLdr_MTP_2: CLASS(SoldierBase_Talon) {
    scope = 2;
    faction = QCLASS(TaskForce_MTP);
    DisplayName = "CSG Pilot Lead MTP G";
    editorPreview = QPATHTOF(talon\UI\preview\RG_SupportPilotLdr_MTP.jpg);
    icon = "iconManLeader";
    uniformClass = "CUP_U_CRYE_MCAM_NP_Roll";
    items[] = {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_IR_Strobe_Item",
        "ACE_MapTools",
        "ACE_morphine",
        "ACRE_PRC148","ACRE_PRC148",
        "RG_Beret_talon_ssg",
        "ACE_Flashlight_KSF1",
        "ACE_EarPlugs",
        "ItemcTab",
        "ACE_NVG_Wide",
        "ACE_canteen","ACE_canteen","ACE_canteen"
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
        "RG_Beret_talon_ssg",
        "ACE_Flashlight_KSF1",
        "ACE_EarPlugs",
        "ItemcTab",
        "ACE_NVG_Wide",
        "ACE_canteen","ACE_canteen","ACE_canteen"
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        "vest_pilot_combat",
        "rhsusf_hgu56p_pink",
        "rhsusf_shemagh_grn"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        "vest_pilot_combat",
        "rhsusf_hgu56p_pink",
        "rhsusf_shemagh_grn"
    };
    Weapons[] = {
        QCLASS(PDW_MP7_B),
        Q_SIDEARM,
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
        "CUP_40Rnd_46x30_MP7","CUP_40Rnd_46x30_MP7","CUP_40Rnd_46x30_MP7",
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_G_SMOKE_B,Q_G_SMOKE_B
    };
    RespawnMagazines[] = {
        "CUP_40Rnd_46x30_MP7","CUP_40Rnd_46x30_MP7","CUP_40Rnd_46x30_MP7",
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_G_SMOKE_B,Q_G_SMOKE_B
    };
};

//--Lead Pilot JN
/*
class RG_SupportPilotLdr_JN: RG_SupportPilotLdr_MTP {
    faction="RG_TaskForce_JN";
   DisplayName="CSG Pilot Lead JN";
   editorPreview = QPATHTOF(talon\UI\preview\RG_SupportPilotLdr_JN.jpg);
    backpack=QCLASS(B_TalonDaypack);
    uniformClass="RG_U_Smock_DPMW";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_DPMW8",
        "rhsusf_hgu56p"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_DPMW8",
        "rhsusf_hgu56p"
    };
};

//--Lead Pilot SN
class RG_SupportPilotLdr_SN: RG_SupportPilotLdr_MTP {
    faction="RG_TaskForce_SN";
   DisplayName="CSG Pilot Lead SN";
   editorPreview = QPATHTOF(talon\UI\preview\RG_SupportPilotLdr_SN.jpg);
    backpack=QCLASS(B_TalonDaypack);
    uniformClass="RG_U_Smock_Arctic";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_Winter",
        "rhsusf_hgu56p"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_Winter",
        "rhsusf_hgu56p"
    };
};
*/