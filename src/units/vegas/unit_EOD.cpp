//---Vegas EOD Specialist

//--EOD Spc MTP
class CLASS(VegasEOD_MTP): CLASS(SoldierBase_V) {
    scope = 2;
    faction = "RG_TaskForce_MTP";
    DisplayName = "Vegas Engineer";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasEOD_MTP.jpg);
    icon = "iconManExplosive";
    canDeactivateMines = 1;
    engineer = 1;
    backpack = "";
    uniformClass = "CUP_U_B_BAF_MTP_UBACSTSHIRT";
    Items[] = {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_MapTools",
        "ACE_EarPlugs",
        "ACE_IR_Strobe_Item",
        "ACRE_PRC148",
        "ACRE_PRC148",
        "ACE_microDAGR",
        "ItemAndroid"
    };
    RespawnItems[] = {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_MapTools",
        "ACE_EarPlugs",
        "ACE_IR_Strobe_Item",
        "ACRE_PRC148",
        "ACRE_PRC148",
        "ACE_microDAGR",
        "ItemAndroid"
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        "CUP_V_C_Police_Holster",
        QCLASS(beret_vegas),
        "rhs_googles_black",
        "CUP_NVG_GPNVG_Hide"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        "CUP_V_C_Police_Holster",
        QCLASS(beret_vegas),
        "rhs_googles_black",
        "CUP_NVG_GPNVG_Hide"
    };
    Weapons[] = {
        "Throw",
        "Put",
        Q_SIDEARM
    };
    RespawnWeapons[] = {
        "Throw",
        "Put",
        Q_SIDEARM
    };
    Magazines[] = {
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ
    };
    RespawnMagazines[] = {
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ
    };
};

//--EOD Spc JN
/*
class RG_VegasEOD_JN: RG_VegasEOD_MTP {
    faction       = "RG_TaskForce_JN";
    DisplayName   = "Vegas EOD JN";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasEOD_JN.jpg);
};

//--EOD Spc SN
class RG_VegasEOD_SN: RG_VegasEOD_MTP {
    faction       = "RG_TaskForce_SN";
    DisplayName   = "Vegas Demolitions SN";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasEOD_SN.jpg);
    backpack      = "RG_B_VEGAS_EOD_SN";
    uniformClass  = "RG_u_smock_arctic";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "cpc_weaponsbelt_rngr",
        "rhsusf_opscore_mc_pelt_nsw",
        "rhsusf_shemagh_od"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "cpc_weaponsbelt_rngr",
        "rhsusf_opscore_mc_pelt_nsw",
        "rhsusf_shemagh_od"
    };
    Weapons[]=
    {
        "Throw",
        "Put",
        "RG_M4A1AFG_W_F",
        "ACE_VMM3",
        "UK3CB_BAF_Soflam_Laserdesignator"
    };
    RespawnWeapons[]=
    {
        "Throw",
        "Put",
        "RG_M4A1AFG_W_F",
        "ACE_VMM3",
        "UK3CB_BAF_Soflam_Laserdesignator"
    };
};
//EOD Spc SN Backpack
class RG_B_VEGAS_EOD_SN: UK3CB_BAF_B_Bergen_Arctic_Rifleman_B {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_FRAG,2);
        MACRO_ADDMAG(G_STUN,6);
        MACRO_ADDMAG(G_SMOKE_R,2);
        MACRO_ADDMAG(DemoCharge_Remote_Mag,2);
        MACRO_ADDMAG(ClaymoreDirectionalMine_Remote_Mag,2);
        MACRO_ADDMAG(Laserbatteries,1);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_elasticBandage,6);
        MACRO_ADDITEM(ACE_packingBandage,6);
        MACRO_ADDITEM(ACE_quikclot,8);
        MACRO_ADDITEM(ACE_tourniquet,4);
        MACRO_ADDITEM(ACE_morphine,1);
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(MineDetector,1);
        MACRO_ADDITEM(ACE_Clacker,1);
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(RG_Beret_vegas,1);
        MACRO_ADDITEM(rhsusf_acc_eotech_xps3,1);
        MACRO_ADDITEM(ACE_EntrenchingTool,1);
    };
};
*/