class CfgWeapons {
    class UniformItem;
    //--Gambler MTP
    class CUP_U_CRYE_G3C_MC;
    class CLASS(uniform_mtp): CUP_U_CRYE_G3C_MC {
  
    };
  
    class CUP_U_CRYE_G3C_MC_V2;
    class CLASS(uniform_mtp_2): CUP_U_CRYE_G3C_MC_V2 {
  
    };
  
    class CUP_U_CRYE_G3C_MC_V3;
    class CLASS(uniform_mtp_3): CUP_U_CRYE_G3C_MC_V2 {
      
    };
    
    class Uniform_Base;
    class CLASS(Uniform_Base): Uniform_Base {
        author = AUTHOR;
        picture = QPATHTOF(ui\icon_uniform.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        allowedSlots[] = {901};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "B_Soldier_F";
            containerClass = "Supply0";
            mass = 0;
        };
    };

    //----Underwear
    class CLASS(Underwear): CLASS(Uniform_Base) {
        scope = 1;
        displayName = "[RG] Underwear";
        picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(Underwear_base);
            containerClass = "Supply0";
            mass = 1;
        };
    };
    class CLASS(Underwear_H): CLASS(Underwear) {
        displayName = "[RG] Underwear Highroller";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Underwear_HR_base);
        };
    };
    class CLASS(Underwear_G): CLASS(Underwear) {
        displayName = "[RG] Underwear Gambler";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Underwear_G_base);
        };
    };
    class CLASS(Underwear_T): CLASS(Underwear) {
        displayName = "[RG] Underwear Talon";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Underwear_T_base);
        };
    };
    class CLASS(Underwear_V): CLASS(Underwear) {
        displayName = "[RG] Underwear Vegas";
        class ItemInfo: ItemInfo {
            uniformClass = QCLASS(Underwear_V_base);
        };
    };

    //----SN Uniforms
    class CLASS(U_SN_LS): CLASS(Uniform_Base) {
        scope = 2;
        displayName = "[RG] Winter Long Sleeve";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(U_SN_LS_Base);
            containerClass = "Supply50";
            mass=20;
        };
    };
    class CLASS(U_SN_SS): CLASS(Uniform_Base) {
        scope=2;
        displayName="[RG] Winter Short Sleeve";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(U_SN_SS_Base);
            containerClass = "Supply50";
            mass = 20;
        };
    };

    class U_B_CombatUniform_mcam;
    class CLASS(AdminClothes): U_B_CombatUniform_mcam {
        scope=2;
        displayName="[RG] Admin Uniform";
        picture=QPATHTOF(ui\icon_uniform.paa);
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = QCLASS(AdminUniGuy);
            containerClass = "Supply50";
            mass = 25;
        };
    };

    //---- Misc
    class ItemCore;
    class CUP_U_B_USArmy_PilotOverall: ItemCore {
        ACE_GForceCoef = 0.8; //same as U_B_PilotOverall
    };
  
};
