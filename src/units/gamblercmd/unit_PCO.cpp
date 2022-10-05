//----Gambler Platoon Commander

//--Gambler Platoon CO MTP
class CLASS(PlatoonCO_MTP): CLASS(GamblerCO_Base) {
    scope = 2;
    DisplayName = "Platoon CO MTP";
    editorPreview = QPATHTOF(gamblercmd\UI\preview\RG_PlatoonCO_MTP.jpg);
    icon = "iconManOfficer";
    uniformClass = "CUP_U_CRYE_G3C_MC";
    backpack = QCLASS(B_PLCO_MTP);
    Items[]= {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_morphine",
        "ACE_MapTools",
        "ACE_CableTie","ACE_CableTie",
        "ACE_Flashlight_MX991",
        "ACE_EarPlugs",
        "ItemcTab",
        Q_RADIO_ITR
    };
    RespawnItems[]= {
        "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
        "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
        "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
        "ACE_quikclot","ACE_quikclot","ACE_quikclot",
        "ACE_tourniquet","ACE_tourniquet",
        "ACE_morphine",
        "ACE_MapTools",
        "ACE_CableTie","ACE_CableTie",
        "ACE_Flashlight_MX991",
        "ACE_EarPlugs",
        "ItemcTab",
        Q_RADIO_ITR
    };
    linkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_pco),
        QCLASS(mohawk_mtp_g_cmd),
        "shesh_tan"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_pco),
        QCLASS(mohawk_mtp_g_cmd),
        "shesh_tan"
    };
    Weapons[] = {
        "Throw",
        "Put",
        QCLASS(SIW_UGL_ACOG),
        Q_SIDEARM,
        "Laserdesignator_01_khk_F"
    };
    RespawnWeapons[] = {
        "Throw",
        "Put",
        QCLASS(SIW_UGL_ACOG),
        Q_SIDEARM,
        "Laserdesignator_01_khk_F"
    };
    Magazines[] = {
        Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
        Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_UGL_HEDP,Q_UGL_HEDP,Q_UGL_HEDP,
        Q_G_FRAG,Q_G_FRAG,
        "Laserbatteries"
    };
    RespawnMagazines[] = {
        Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
        Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_UGL_HEDP,Q_UGL_HEDP,Q_UGL_HEDP,
        Q_G_FRAG,Q_G_FRAG,
        "Laserbatteries"
    };
};
//Platoon CO MTP Backpack
class CLASS(B_mtp_kitbag_radio);
class CLASS(B_PLCO_MTP): CLASS(B_mtp_kitbag_radio) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_W,2);
        MACRO_ADDMAG(G_SMOKE_O,2);
        MACRO_ADDMAG(G_SMOKE_B,4);
        MACRO_ADDMAG(G_SMOKE_G,2);
        MACRO_ADDMAG(G_SMOKE_P,2);
        MACRO_ADDMAG(UGL_SMOKE_B,3);
        MACRO_ADDMAG(UGL_SMOKE_R,3);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_morphine,1);
        MACRO_ADDITEM(ACE_tourniquet,2);
        MACRO_ADDITEM(RG_Beret_gambler_Cpt,1);
        MACRO_ADDITEM(RADIO_LRR,1);
        MACRO_ADDITEM(ACE_microDAGR,1);
        MACRO_ADDITEM(ACE_canteen,2);

    };
};

//--Gambler Platoon Commander SN
class RG_PlatoonCO_SN: RG_PlatoonCO_MTP {
    faction = QCLASS(TaskForce_SN);
    DisplayName = "Platoon CO SN";
    editorPreview = QPATHTOF(gamblercmd\UI\preview\RG_PlatoonCO_SN.jpg);
    backpack = QCLASS(B_PLCO_SN);
    uniformClass = QCLASS(U_SN_LS);
    linkedItems[] = {
        Q_LINKEDITEMS,
        "RG_Vest_Carrier2_SN",
        "CFP_OPS2017_Helmet_White",
        "rhsusf_shemagh2_white"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        "RG_Vest_Carrier2_SN",
        "CFP_OPS2017_Helmet_White",
        "rhsusf_shemagh2_white"
    };
};
//Platoon CO SN Backpack
class CLASS(B_blk_kitbag_radio);
class CLASS(B_PLCO_SN): CLASS(B_blk_kitbag_radio) {
    scope = 1;
    scopeArsenal = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_W,2);
        MACRO_ADDMAG(G_SMOKE_O,2);
        MACRO_ADDMAG(G_SMOKE_B,4);
        MACRO_ADDMAG(G_SMOKE_G,2);
        MACRO_ADDMAG(G_SMOKE_P,2);
        MACRO_ADDMAG(UGL_SMOKE_B,3);
        MACRO_ADDMAG(UGL_SMOKE_R,3);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_morphine,1);
        MACRO_ADDITEM(ACE_tourniquet,2);
        MACRO_ADDITEM(RG_Beret_gambler_Cpt,1);
        MACRO_ADDITEM(RADIO_LRR,1);
        MACRO_ADDITEM(ACE_microDAGR,1);
        MACRO_ADDITEM(ACE_canteen,2);

    };
};

//--Gambler Platoon Commander JN
/*
class RG_PlatoonCO_JN: RG_PlatoonCO_MTP
{
    faction       = "RG_TaskForce_JN";
    DisplayName   = "Platoon CO JN";
    editorPreview = QPATHTOF(gamblercmd\UI\preview\RG_PlatoonCO_JN.jpg);
    backpack      = "RG_B_PLCO_JN";
    uniformClass  = "RG_U_CombatUniform_DPMW_ShortSleeve";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "CUP_V_B_BAF_DPM_Osprey_Mk3_Officer",
        "UK3CB_BAF_H_Mk6_DPMW_C",
        "UK3CB_BAF_G_Tactical_Black"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "CUP_V_B_BAF_DPM_Osprey_Mk3_Officer",
        "UK3CB_BAF_H_Mk6_DPMW_C",
        "UK3CB_BAF_G_Tactical_Black"
    };
};
//Platoon CO JN Backpack
class UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A;
class RG_B_PLCO_JN: UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A {
    scope = 1;
    class TransportMagazines {
        MACRO_ADDMAG(G_SMOKE_W,2);
        MACRO_ADDMAG(G_SMOKE_O,2);
        MACRO_ADDMAG(G_SMOKE_B,4);
        MACRO_ADDMAG(G_SMOKE_G,2);
        MACRO_ADDMAG(G_SMOKE_P,2);
        MACRO_ADDMAG(Laserbatteries,1);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_morphine,1);
        MACRO_ADDITEM(ACE_tourniquet,2);
        MACRO_ADDITEM(RG_Beret_gambler_Cpt,1);
        MACRO_ADDITEM(RADIO_LRR,1);
        MACRO_ADDITEM(ACE_microDAGR,1);
        MACRO_ADDITEM(ACE_canteen,2);
        MACRO_ADDITEM(UK3CB_BAF_H_Boonie_DPMW_PRR,1);

    };
};
*/
