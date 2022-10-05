//----Gambler Platoon Executive Officer (2IC)

//--Gambler Platoon XO MTP
class CLASS(PlatoonXO_MTP): CLASS(GamblerCO_Base) {
    scope = 2;
    DisplayName = "Platoon XO MTP";
    editorPreview = QPATHTOF(gamblercmd\UI\preview\RG_PlatoonXO_MTP.jpg);
    icon = "iconManLeader";
    uniformClass = "CUP_U_CRYE_G3C_MC_V3";
    backpack = QCLASS(B_PLXO_MTP);
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
        QCLASS(vest_mtp_pxo),
        QCLASS(mohawk_mtp_g_cmd),
        "rhs_googles_clear"
    };
    respawnLinkedItems[] = {
        Q_LINKEDITEMS,
        QCLASS(vest_mtp_pxo),
        QCLASS(mohawk_mtp_g_cmd),
        "rhs_googles_clear"
    };
    Weapons[] = {
      "Throw",
      "Put",
      QCLASS(SIW_UGL_HOLO),
      Q_SIDEARM,
      "Laserdesignator_01_khk_F"
    };
    RespawnWeapons[] = {
      "Throw",
      "Put",
      QCLASS(SIW_UGL_HOLO),
      Q_SIDEARM,
      "Laserdesignator_01_khk_F"
    };
    Magazines[] = {
        Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
        Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_UGL_HEDP,Q_UGL_HEDP,Q_UGL_HEDP,
        Q_G_FRAG,Q_G_FRAG
    };
    RespawnMagazines[] = {
        Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
        Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,Q_MAG_TRC,
        Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,Q_MAG_SIDEARM_FMJ,
        Q_UGL_HEDP,Q_UGL_HEDP,Q_UGL_HEDP,
        Q_G_FRAG,Q_G_FRAG
    };
};
//Platoon XO MTP Backpack
class CLASS(B_tan_kitbag_radio);
class CLASS(B_PLXO_MTP): CLASS(B_tan_kitbag_radio) {
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
        MACRO_ADDMAG(Laserbatteries,1);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_morphine,1);
        MACRO_ADDITEM(ACE_tourniquet,2);
        MACRO_ADDITEM(RG_Beret_gambler_2Lt,1);
        MACRO_ADDITEM(RADIO_LRR,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Platoon XO SN
class RG_PlatoonXO_SN: RG_PlatoonXO_MTP {
    faction = QCLASS(TaskForce_SN);
    DisplayName = "Platoon XO SN";
    editorPreview = QPATHTOF(gamblercmd\UI\preview\RG_PlatoonXO_SN.jpg);
    backpack = QCLASS(B_PLXO_SN);
    uniformClass = QCLASS(U_SN_LS);
    linkedItems[]= {
        Q_LINKEDITEMS,
        "RG_Vest_Carrier2_SN",
        "CFP_OPS2017_Helmet_White",
        "rhsusf_shemagh2_white"
    };
    respawnLinkedItems[]= {
        Q_LINKEDITEMS,
        "RG_Vest_Carrier2_SN",
        "CFP_OPS2017_Helmet_White",
        "rhsusf_shemagh2_white"
    };
};
//Platoon XO SN Backpack
class CLASS(B_PLXO_SN): CLASS(B_blk_kitbag_radio) {
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
        MACRO_ADDMAG(Laserbatteries,1);
    };
    class TransportItems {
        MACRO_ADDITEM(NVG,1);
        MACRO_ADDITEM(ACE_morphine,1);
        MACRO_ADDITEM(ACE_tourniquet,2);
        MACRO_ADDITEM(RG_Beret_gambler_2Lt,1);
        MACRO_ADDITEM(RADIO_LRR,1);
        MACRO_ADDITEM(ACE_canteen,2);
    };
};

//--Gambler Platoon XO JN
/*
class RG_PlatoonXO_JN: RG_PlatoonXO_MTP
{
    faction       = "RG_TaskForce_JN";
    DisplayName   = "Platoon XO JN";
    editorPreview = QPATHTOF(gamblercmd\UI\preview\RG_PlatoonXO_JN.jpg);
    backpack      = "RG_B_PLXO_JN";
    uniformClass  = "RG_U_CombatUniform_DPMW_ShortSleeve";
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "CUP_V_B_BAF_DPM_Osprey_Mk3_Officer",
        "UK3CB_BAF_H_Mk6_DPMW_C",
        "rhs_googles_clear"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "CUP_V_B_BAF_DPM_Osprey_Mk3_Officer",
        "UK3CB_BAF_H_Mk6_DPMW_C",
        "rhs_googles_clear"
    };
};
//Platoon XO JN Backpack
class RG_B_PLXO_JN: UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A {
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
        MACRO_ADDITEM(RG_Beret_gambler_2Lt,1);
        MACRO_ADDITEM(RADIO_LRR,1);
        MACRO_ADDITEM(ACE_microDAGR,1);
        MACRO_ADDITEM(ACE_canteen,2);
        MACRO_ADDITEM(UK3CB_BAF_H_Boonie_DPMW_PRR,1);
    };
};
*/