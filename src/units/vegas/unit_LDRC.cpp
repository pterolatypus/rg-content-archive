////----Vegas Leader

//--Vegas Lead MTP
class CLASS(VegasLdrC_MTP): CLASS(SoldierBase_V) {
    scope = 2;
    cost = 100000;
    attendant = 1;
    faction = "RG_TaskForce_MTP";
    DisplayName = "Vegas Lead";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasLdrC_MTP.jpg);
    icon = "iconManOfficer";
    backpack = "";
    uniformClass = "CUP_U_B_BAF_MTP_UBACSTSHIRT";
    Items[] = {
        "ACE_MapTools",
        "ACE_EarPlugs",
        "ACE_IR_Strobe_Item",
        "ACRE_PRC148",
        "ACRE_PRC148",
        "ACE_microDAGR",
        "ItemAndroid"
    };
    RespawnItems[] = {
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

//--Vegas Lead JN
/*
class RG_VegasLdrC_JN: RG_VegasLdrC_MTP
{
    faction       = "RG_TaskForce_JN";
    DisplayName   = "Vegas Leader JN";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasLdrC_JN.jpg);
};

//--Vegas Lead SN
class RG_VegasLdrC_SN: RG_VegasLdrC_MTP
{
    faction       = "RG_TaskForce_SN";
    DisplayName   = "Vegas Leader SN";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasLdrC_SN.jpg);
    backpack      = "RG_B_VEGAS_Lead_SN";
    uniformClass  = "RG_u_smock_arctic";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "cpc_communicationsbelt_rngr",
        "rhsusf_opscore_ut_pelt_nsw",
        "rhsusf_shemagh2_gogg_white"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "cpc_communicationsbelt_rngr",
        "rhsusf_opscore_ut_pelt_nsw",
        "rhsusf_shemagh2_gogg_white"
    };
    Weapons[]=
    {
        "Throw",
        "Put",
        "RG_hk416d10_LMT",
        "RG_PISTOLV_F",
        "UK3CB_BAF_Soflam_Laserdesignator"
    };
    RespawnWeapons[]=
    {
        "Throw",
        "Put",
        "RG_hk416d10_LMT",
        "RG_PISTOLV_F",
        "UK3CB_BAF_Soflam_Laserdesignator"
    };
};
//Vegas Lead SN Backpack
class UK3CB_BAF_B_Bergen_Arctic_Rifleman_B;
class RG_B_VEGAS_Lead_SN: UK3CB_BAF_B_Bergen_Arctic_Rifleman_B {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_FRAG,2);
        MACRO_ADDMAG(G_STUN,6);
        MACRO_ADDMAG(G_SMOKE_W,4);
        MACRO_ADDMAG(G_SMOKE_R,1);
        MACRO_ADDMAG(G_SMOKE_B,2);
        MACRO_ADDMAG(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green,2);
        MACRO_ADDMAG(Laserbatteries,1);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_elasticBandage,6);
        MACRO_ADDITEM(ACE_packingBandage,6);
        MACRO_ADDITEM(ACE_quikclot,8);
        MACRO_ADDITEM(ACE_tourniquet,4);
        MACRO_ADDITEM(ACE_morphine,2);
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(RG_Beret_vegas_ssg,1);
        MACRO_ADDITEM(ACE_epinephrine,2);
        MACRO_ADDITEM(ACE_Chemlight_Shield,1);
        MACRO_ADDITEM(rhsusf_acc_T1_high,1);
    };
};
*/
