//----Talon Vehicle Crew

//--Vehicle Crew MTP
class RG_SupportCrew_MTP: CLASS(SoldierBase_Talon) {
    scope=2;
    faction="RG_TaskForce_MTP";
    DisplayName="CSG Vehicle Crew MTP";
    editorPreview = QPATHTOF(talon\UI\preview\RG_SupportCrew_MTP.jpg);
    icon="iconMan";
    engineer=1;
    backpack=QCLASS(B_SupportCrew_MTP);
    uniformClass = "CUP_U_CRYE_MCAM_NP_Roll";
    Items[] = {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_IR_Strobe_Item",
        "ACE_MapTools",
        "ACRE_PRC148",
        "ACRE_PRC343",
        "ACE_Flashlight_MX991",
        "NVGoggles",
        "ItemcTab",
        "ACE_EarPlugs"
    };
    RespawnItems[] = {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_IR_Strobe_Item",
        "ACE_MapTools",
        "ACRE_PRC148",
        "ACRE_PRC343",
        "ACE_Flashlight_MX991",
        "NVGoggles",
        "ItemcTab",
        "ACE_EarPlugs"
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        "ItemGPS",
        "CUP_V_B_Ciras_Mcam3",
        QCLASS(mich_t),
        "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        "ItemGPS",
        "CUP_V_B_Ciras_Mcam3",
        QCLASS(mich_t),
        "rhs_googles_clear"
    };
    weapons[] = {
        QCLASS(M4_CCO),
        Q_SIDEARM,
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        QCLASS(M4_CCO),
        Q_SIDEARM,
        "Throw",
        "Put"
    };
    magazines[] = {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_SIDEARM_JHP,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_G_SMOKE_B,
    };
    respawnMagazines[] = {
        Q_MAG_STD,Q_MAG_STD,Q_MAG_STD,
        Q_MAG_SIDEARM_JHP,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_G_SMOKE_B,
    };
};
//Vehicle Crew MTP Backpack
class RG_B_SupportCrew_MTP: KIT_BAG_MC {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_B,2);
        MACRO_ADDMAG(Chemlight_blue,2);
        MACRO_ADDMAG(ACE_HandFlare_Green,4);
    };
    class TransportItems {
        MACRO_ADDITEM(ToolKit,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Vehicle Crew JN
/*
class RG_SupportCrew_JN: RG_SupportCrew_MTP {
    faction       = "RG_TaskForce_JN";
    DisplayName   = "CSG Vehicle Crew JN";
    editorPreview = QPATHTOF(talon\UI\preview\RG_SupportCrew_JN.jpg);
    backpack      = QCLASS(B_TalonDaypack);
    uniformClass  = "RG_U_CombatUniform_DPMW_ShortSleeve";
    linkedItems[]=
    {
        "ItemMap",
        "itemGPS",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_DPMW1",
        "UK3CB_BAF_H_CrewHelmet_DPMW_ESS_A",
        "rhs_googles_clear"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "itemGPS",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_DPMW1",
        "UK3CB_BAF_H_CrewHelmet_DPMW_ESS_A",
        "rhs_googles_clear"
    };
};

//--Vehicle Crew SN
class RG_SupportCrew_SN: RG_SupportCrew_MTP {
    faction="RG_TaskForce_SN";
   DisplayName="CSG Vehicle Crew SN";
   editorPreview = QPATHTOF(talon\UI\preview\RG_SupportCrew_SN.jpg);
    backpack=QCLASS(B_TalonDaypack);
    uniformClass="RG_U_Smock_Arctic";
    linkedItems[]=
    {
        "ItemMap",
        "itemGPS",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_Winter",
        "UK3CB_BAF_H_CrewHelmet_B",
        "rhsusf_shemagh2_white"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "itemGPS",
        "ItemCompass",
        "ItemWatch",
        "RG_V_Osprey_Winter",
        "UK3CB_BAF_H_CrewHelmet_B",
        "rhsusf_shemagh2_white"
    };
};
*/