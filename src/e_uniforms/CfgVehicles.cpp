class CfgVehicles {
    class SoldierWB;
    class B_Soldier_base_F: SoldierWB {
        class EventHandlers;
    };

    class CLASS(Uniform_Base): B_Soldier_Base_F {
        scope = 1;
        author = AUTHOR;
        uniformClass = "";
        backpack = "";
        weapons[] = {};
        magazines[] = {};
        respawnWeapons[] = {};
        respawnMagazines[] = {};
        items[] = {};
        linkeditems[] = {};
        respawnlinkeditems[] = {};
    };

    //----Underwear
    class CLASS(Underwear_base): CLASS(Uniform_Base) {
        displayName = "[RG] Underwear";
        model = "\A3\Characters_F\Common\basicbody";
        hiddenSelectionsTextures[] = {
            QPATHTOF(textures\basicbody_rg_co.paa)
        };
        class Wounds {
            tex[] = {};
            mat[] = {
                "A3\Characters_F\Common\Data\basicbody.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
            };
        };
    };
    class CLASS(Underwear_HR_base): CLASS(Underwear_base) {
        displayName = "[RG] Underwear HR";
        hiddenSelectionsTextures[] = {
            QPATHTOF(textures\basicbody_highroller.paa)
        };
    };
    class CLASS(Underwear_G_base): CLASS(Underwear_base) {
        displayName="[RG] Underwear G";
        hiddenSelectionsTextures[] = {
            QPATHTOF(textures\basicbody_gambler.paa)
        };
    };
    class CLASS(Underwear_T_base): CLASS(Underwear_base) {
        displayName="[RG] Underwear T";
        hiddenSelectionsTextures[] = {
            QPATHTOF(textures\basicbody_talon.paa)
        };
    };
    class CLASS(Underwear_V_base): CLASS(Underwear_base) {
        displayName="[RG] Underwear V";
        hiddenSelectionsTextures[] = {
            QPATHTOF(textures\basicbody_vegas.paa)
        };
    };

    //----SN Uniforms
    class B_Soldier_F;
    class CLASS(U_SN_Base): CLASS(Uniform_Base) {
        model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"Camo","Camo2", "insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(textures\clothing1_sn_co.paa)
        };
    };
    class CLASS(U_SN_LS_Base): CLASS(U_SN_Base) {};
    class CLASS(U_SN_SS_BASE): CLASS(U_SN_Base) {
        model="\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    };

    //----Admin Clothes
    class CLASS(AdminUniGuy): CLASS(Uniform_Base) {
        model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
        hiddenSelections[] = {"Camo", "insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(textures\rg_admin_co.paa)
        };
    };
};