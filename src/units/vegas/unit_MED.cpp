//----Vegas Medic

//--Medic MTP
class CLASS(VegasMed_MTP): CLASS(SoldierBase_V) {
    scope = 2;
    attendant = 1;
    faction = "RG_TaskForce_MTP";
    DisplayName = "Vegas Medic";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasMed_MTP.jpg);
    icon = "iconManMedic";
    backpack = "";
    uniformClass = "CUP_U_B_BAF_MTP_UBACSTSHIRT";
    items[] = {
        "ACE_MapTools",
        "ACE_EarPlugs",
        "ACE_IR_Strobe_Item",
        "ACRE_PRC148",
        "ACRE_PRC148",
        "ACE_microDAGR",
        "ItemAndroid"
    };
    respawnItems[] = {
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
    weapons[] = {
        "Throw",
        "Put",
        Q_SIDEARM
    };
    respawnWeapons[] = {
        "Throw",
        "Put",
        Q_SIDEARM
    };
    magazines[] = {
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ
    };
    respawnMagazines[] = {
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ
    };
};

//--Medic JN
/*
class RG_VegasMed_JN: RG_VegasMed_MTP {
    faction       = "RG_TaskForce_JN";
    DisplayName   = "Vegas Medic C JN";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasMed_JN.jpg);
};

//--Medic SN
class RG_VegasMed_SN: RG_VegasMed_MTP {
    faction       = "RG_TaskForce_SN";
    DisplayName   = "Vegas Medic C SN";
    editorPreview = QPATHTOF(vegas\UI\preview\RG_VegasMed_SN.jpg);
    backpack      = "RG_B_VEGAS_Medic_SN";
    uniformClass  = "RG_u_smock_arctic";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "cpc_medicalbelt_rngr",
        "rhsusf_opscore_paint_pelt_nsw_cam",
        "UK3CB_BAF_G_Tactical_Clear"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "cpc_medicalbelt_rngr",
        "rhsusf_opscore_paint_pelt_nsw_cam",
        "UK3CB_BAF_G_Tactical_Clear"
    };
    Weapons[]=
    {
        "Throw",
        "Put",
        "RG_MK18_W_ACOG_F",
        "RG_PISTOLV_F",
        "UK3CB_BAF_Soflam_Laserdesignator"
    };
    RespawnWeapons[]=
    {
        "Throw",
        "Put",
        "RG_MK18_W_ACOG_F",
        "RG_PISTOLV_F",
        "UK3CB_BAF_Soflam_Laserdesignator"
    };
};
//Medic SN Backpack
class RG_B_VEGAS_Medic_SN: UK3CB_BAF_B_Bergen_Arctic_Rifleman_B {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_FRAG,2);
        MACRO_ADDMAG(G_STUN,6);
        MACRO_ADDMAG(G_SMOKE_W,2);
        MACRO_ADDMAG(G_SMOKE_Y,2);
        MACRO_ADDMAG(G_SMOKE_B,2);
        MACRO_ADDMAG(Laserbatteries,1);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_fieldDressing,15);
        MACRO_ADDITEM(ACE_elasticBandage,15);
        MACRO_ADDITEM(ACE_packingBandage,8);
        MACRO_ADDITEM(ACE_tourniquet,5);
        MACRO_ADDITEM(ACE_salineIV_500,6);
        MACRO_ADDITEM(ACE_epinephrine,8);
        MACRO_ADDITEM(ACE_morphine,8);
        MACRO_ADDITEM(ACE_atropine,3);
        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_personalAidKit,4);
        MACRO_ADDITEM(ACE_quikclot,10);
        MACRO_ADDITEM(ACE_Splint, 20);
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(RG_Beret_vegas,1);
        MACRO_ADDITEM(rhsusf_acc_eotech_xps3,1);
    };
};
*/
