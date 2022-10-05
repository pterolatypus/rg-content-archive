//----Vegas Operator

//--Operator MTP
class CLASS(VegasOpr_MTP): CLASS(SoldierBase_V) {
    scope = 2;
    faction = "RG_TaskForce_MTP";
    DisplayName = "Vegas Operator";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasOpr_MTP.jpg);
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

//--Operator JN
/*
class RG_VegasOpr_JN: RG_VegasOpr_MTP {
    faction       = "RG_TaskForce_JN";
    DisplayName   = "Vegas Operator JN";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasOpr_JN.jpg);
};

//--Operator SN
class RG_VegasOpr_SN: RG_VegasOpr_MTP {
    faction       = "RG_TaskForce_SN";
    DisplayName   = "Vegas Operator SN";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasOpr_SN.jpg);
    backpack      = "RG_B_VEGAS_Operator_SN";
    uniformClass  = "RG_u_smock_arctic";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "cpc_Fastbelt_rngr",
        "rhsusf_opscore_fg_pelt_nsw",
        "rhsusf_shemagh2_od"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "cpc_Fastbelt_rngr",
        "rhsusf_opscore_fg_pelt_nsw",
        "rhsusf_shemagh2_od"
    };
    Weapons[]=
    {
        "Throw",
        "Put",
        "RG_M4A1AFG_W_F",
        "RG_PISTOLV_F",
        "UK3CB_BAF_Soflam_Laserdesignator"
    };
    RespawnWeapons[]=
    {
        "Throw",
        "Put",
        "RG_M4A1AFG_W_F",
        "RG_PISTOLV_F",
        "UK3CB_BAF_Soflam_Laserdesignator"
    };
};
//Operator SN Backpack
class RG_B_VEGAS_Operator_SN: UK3CB_BAF_B_Bergen_Arctic_Rifleman_B {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_FRAG,2);
        MACRO_ADDMAG(G_STUN,6);
        MACRO_ADDMAG(G_SMOKE_R,2);
        MACRO_ADDMAG(G_SMOKE_B,2);
        MACRO_ADDMAG(Laserbatteries,1);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_elasticBandage,6);
        MACRO_ADDITEM(ACE_packingBandage,6);
        MACRO_ADDITEM(ACE_quikclot,8);
        MACRO_ADDITEM(ACE_tourniquet,4);
        MACRO_ADDITEM(ACE_morphine,1);
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(RG_Beret_vegas,1);
        MACRO_ADDITEM(rhsusf_acc_eotech_xps3,1);
    };
};
*/
