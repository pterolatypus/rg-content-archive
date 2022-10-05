#define ARMOURVALUES \
class HitpointsProtectionInfo {\
    class Neck {\
        HitpointName = "HitNeck";\
        armor = 12;\
        PassThrough = 0.400000;\
    };\
    class Chest {\
        HitpointName = "HitChest";\
        armor = "22+4";\
        PassThrough = 0.200000;\
    };\
    class Diaphragm {\
        HitpointName = "HitDiaphragm";\
        armor = "22+4";\
        PassThrough = 0.200000;\
    };\
    class Abdomen {\
        hitpointName = "HitAbdomen";\
        armor = "16+4";\
        passThrough = 0.300000;\
    };\
}\

class CfgWeapons {
    //--Gambler MTP
    // SQL
    class CUP_V_B_CIRAS_Base;
    class CUP_V_B_Ciras_MCam: CUP_V_B_CIRAS_Base {
        class ItemInfo;
    };
    class CLASS(vest_mtp_sql): CUP_V_B_Ciras_MCam {
        displayName = "RG Vest MTP (SQL)";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };
    // 2IC
    class CUP_V_JPC_communicationsbelt_coy;
    class CUP_V_JPC_communicationsbelt_mc: CUP_V_JPC_communicationsbelt_coy {
        class ItemInfo;
    };
    class CLASS(vest_mtp_2ic): CUP_V_JPC_communicationsbelt_mc {
        displayName = "RG Vest MTP (2IC)";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };
    // AUR
    class ItemCore;
    class CFP_FAPC_MG_Multicam: ItemCore {
        class ItemInfo;
    };
    class CLASS(vest_mtp_aur): CFP_FAPC_MG_Multicam {
        displayName = "RG Vest MTP (AUR)";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };
    // ENG
    class CUP_V_CPC_medical_coy;
    class CUP_V_CPC_medical_mc: CUP_V_CPC_medical_coy {
        class ItemInfo;
    };
    class CLASS(vest_mtp_eng): CUP_V_CPC_medical_mc {
        displayName = "RG Vest MTP (ENG)";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };
    // GRN
    class lbt_pouchless_coy;
    class lbt_weapons_mc: lbt_pouchless_coy {
        class ItemInfo;
    };
    class CLASS(vest_mtp_grn): lbt_weapons_mc {
        displayName = "RG Vest MTP (GRN)";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };
    // LAT
    class lbt_operator_mc: lbt_pouchless_coy {
        class ItemInfo;
    };
    class CLASS(vest_mtp_lat): lbt_operator_mc {
        displayName = "RG Vest MTP (LAT)";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };
    // MED
    class Vest_NoCamo_Base;
    class 6094_MEDIC_tan: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class CLASS(vest_mtp_med): 6094_MEDIC_tan {
        displayName = "RG Vest MTP (MED)";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };
    // MRK
    class CUP_V_JPC_medical_coy;
    class CUP_V_JPC_medical_mc: CUP_V_JPC_medical_coy {
        class ItemInfo;
    };
    class CLASS(vest_mtp_mrk): CUP_V_JPC_medical_mc {
        displayName = "RG Vest MTP (MRK)";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };

    //--Gambler Command MTP
    // PCO
    class mbss_com_od: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class CLASS(vest_mtp_pco): mbss_com_od {
        displayName = "RG Vest MTP (PCO)";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };
    // PXO
    class Vest_NoCamo_Base;
    class 6094_SCOUT_tan: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class CLASS(vest_mtp_pxo): 6094_SCOUT_tan {
        displayName = "RG Vest MTP (PXO)";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };
    // FSG
    class CUP_V_CPC_tlbelt_coy;
    class cup_v_cpc_tlbelt_mc: CUP_V_CPC_tlbelt_coy {
        class ItemInfo;
    };
    class CLASS(vest_mtp_fsg): cup_v_cpc_tlbelt_mc {
        displayName = "RG Vest MTP (FSG)";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };

    //--Gambler SN
    class Vest_NoCamo_Base;
    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class CLASS(Vest_Carrier1_SN): V_PlateCarrier1_rgr {
        displayName = "[RG] Vest Winter Carrier";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        author = AUTHOR;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(textures\vests_sn_co.paa)};
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {"camo"};
            hiddenSelectionsTextures[] = {QPATHTOF(textures\vests_sn_co.paa)};
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };

    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class CLASS(Vest_Carrier2_SN): V_PlateCarrier2_rgr {
        displayName="[RG] Vest Winter Medium";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        author = AUTHOR;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(textures\vests_sn_co.paa)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {QPATHTOF(textures\vests_sn_co.paa)};
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };

    class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class CLASS(Vest_CarrierSF_SN): V_PlateCarrierSpec_rgr {
        displayName = "[RG] Vest Winter Heavy";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        author = AUTHOR;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(textures\vests_sn_co.paa)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {QPATHTOF(textures\vests_sn_co.paa)};
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };

    class Vest_Camo_Base;
    class V_TacVest_khk: Vest_Camo_Base {
        class ItemInfo;
    };
    class CLASS(Vest_CarrierTac_SN): V_TacVest_khk {
        displayName = "[RG] Vest Winter Tactical";
        scope = 2;
        scopeArsenal = 2;
        mass = 80;
        descriptionShort = "Armor Level IV";
        author = AUTHOR;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(textures\tacticalvest_sn_co.paa)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {QPATHTOF(textures\tacticalvest_sn_co.paa)};
            containerClass = "Supply160";
            ARMOURVALUES;
        };
    };
};
