//----Talon Jet (Fixed-Wing) Pilot

//--Jet Pilot MTP
class RG_SupportJet_MTP: CLASS(SoldierBase_Talon) {
    scope = 2;
    faction = "RG_TaskForce_MTP";
    displayName = "CSG Jet Pilot MTP";
    editorPreview = QPATHTOF(talon\UI\preview\RG_SupportJet_MTP.jpg);
    uniformClass = "CUP_U_B_USArmy_PilotOverall";
    items[] = {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_IR_Strobe_Item",
        "ACE_MapTools",
        "ACE_morphine","ACE_morphine",
        "ACRE_PRC148","ACRE_PRC148",
        "RG_Beret_talon",
        "ACE_Flashlight_KSF1",
        "ACE_EarPlugs",
        "ACE_MRE_CreamTomatoSoup",
        "ACE_canteen","ACE_canteen","ACE_canteen"
    };
    respawnItems[] = {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_IR_Strobe_Item",
        "ACE_MapTools",
        "ACE_morphine","ACE_morphine",
        "ACRE_PRC148","ACRE_PRC148",
        "ACE_NVG_Wide",
        "RG_Beret_talon",
        "ACE_Flashlight_KSF1",
        "ACE_EarPlugs",
        "ACE_MRE_CreamTomatoSoup",
        "ACE_canteen","ACE_canteen","ACE_canteen"
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        "ItemGPS",
        "vest_EOS",
        "H_PilotHelmetFighter_O"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        "ItemGPS",
        "vest_EOS",
        "H_PilotHelmetFighter_O"
    };
    weapons[] = {
        Q_SIDEARM,
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        Q_SIDEARM,
        "Throw",
        "Put"
    };
    magazines[] = {
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_G_SMOKE_B,Q_G_SMOKE_B
    };
    respawnMagazines[] = {
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_G_SMOKE_B,Q_G_SMOKE_B
    };
};

//--Jet Pilot JN
/*
class RG_SupportJet_JN: RG_SupportJet_MTP {
    faction="RG_TaskForce_JN";
   DisplayName="CSG Jet Pilot JN";
   editorPreview = QPATHTOF(talon\UI\preview\RG_SupportJet_JN.jpg);
    backpack=QCLASS(B_TalonDaypack);
    uniformClass=QCLASS(U_HeliPilotCoveralls_RAF);
    linkedItems[]=
    {
        "ItemMap",
        "itemGPS",
        "ItemCompass",
        "ItemWatch",
        "CUP_V_B_PilotVest",
        "H_PilotHelmetFighter_O"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "itemGPS",
        "ItemCompass",
        "ItemWatch",
        "CUP_V_B_PilotVest",
        "H_PilotHelmetFighter_O"
    };
};

//--Jet Pilot SN
class RG_SupportJet_SN: RG_SupportJet_MTP {
    faction="RG_TaskForce_SN";
   DisplayName="CSG Jet Pilot SN";
   editorPreview = QPATHTOF(talon\UI\preview\RG_SupportJet_SN.jpg);
    backpack=QCLASS(B_TalonDaypack);
    uniformClass=QCLASS(U_HeliPilotCoveralls_RAF);
    linkedItems[]=
    {
        "ItemMap",
        "itemGPS",
        "ItemCompass",
        "ItemWatch",
        "CUP_V_B_PilotVest",
        "H_PilotHelmetFighter_O"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "itemGPS",
        "ItemCompass",
        "ItemWatch",
        "CUP_V_B_PilotVest",
        "H_PilotHelmetFighter_O"
    };
};
*/
