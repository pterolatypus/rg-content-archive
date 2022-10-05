class CfgWeapons {
    class ItemCore;
    class H_HelmetB: ItemCore {
        class ItemInfo;
    };
    class CLASS(fast_tan_base): H_HelmetB {
        scope = 2;
        author = AUTHOR;
        displayName = "FAST Ballistic (Tan)";
        descriptionShort = "Ballistic Protection";
        model = QPATHTOF(fast_helmet_f);
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp"};
        hiddenSelectionsTextures[] = {QPATHTOF(fast_helmet\fast_helmet_tan_co), "", QPATHTOF(patch\tfrg_co)};
        class ItemInfo: ItemInfo {
            uniformModel = QPATHTOF(fast_helmet_f);
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp"};
            hiddenSelectionsTextures[] = {QPATHTOF(fast_helmet\fast_helmet_tan_co), "", QPATHTOF(patch\tfrg_co)};
        };
    };
    class CLASS(fast_tan_headset): CLASS(fast_tan_base) {
        displayName = "FAST Ballistic (Tan +Peltor)";
        ace_hearing_protection = 0.80;
        ace_hearing_lowerVolume = 0.50;
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp"};
        hiddenSelectionsTextures[] = {QPATHTOF(fast_helmet\fast_helmet_tan_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp"};
            hiddenSelectionsTextures[] = {QPATHTOF(fast_helmet\fast_helmet_tan_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co)};
        };
    };

    class CLASS(fast_tan_gambler): CLASS(fast_tan_base) {
        displayName = "FAST Ballistic (Tan, Gambler)";
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp"};
        hiddenSelectionsTextures[] = {QPATHTOF(fast_helmet\fast_helmet_tan_co), QPATHTOF(patch\trf_g_co), QPATHTOF(patch\tfrg_co)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp"};
            hiddenSelectionsTextures[] = {QPATHTOF(fast_helmet\fast_helmet_tan_co), QPATHTOF(patch\trf_g_co), QPATHTOF(patch\tfrg_co)};
        };
    };

    class CLASS(fast_tan_highroller): CLASS(fast_tan_base) {
        displayName = "FAST Ballistic (Tan, Highroller)";
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp"};
        hiddenSelectionsTextures[] = {QPATHTOF(fast_helmet\fast_helmet_tan_co), QPATHTOF(patch\trf_hr_co), QPATHTOF(patch\tfrg_co)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp"};
            hiddenSelectionsTextures[] = {QPATHTOF(fast_helmet\fast_helmet_tan_co), QPATHTOF(patch\trf_hr_co), QPATHTOF(patch\tfrg_co)};
        };
    };

    //mohawk cover
    class CLASS(mohawk_mtp): CLASS(fast_tan_base) {
        scope = 2;
        author = AUTHOR;
        descriptionShort = "";
        displayName = "Mohawk (MTP)";
        model = QPATHTOF(fast_mohawk);
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
        hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co)};
        class ItemInfo: ItemInfo {
            uniformModel = QPATHTOF(fast_mohawk);
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
            hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co)};
        };
    };

    class CLASS(mohawk_mtp_headset): CLASS(mohawk_mtp) {
        displayName = "Mohawk (MTP) +Peltor";
        ace_hearing_protection = 0.80;
        ace_hearing_lowerVolume = 0.50;
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
        hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
            hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co)};
        };
    };

    class CLASS(mohawk_mtp_peltor_lamp): CLASS(mohawk_mtp) {
        displayName = "Mohawk (MTP) +Peltor, Headlamp";
        ace_hearing_protection = 0.80;
        ace_hearing_lowerVolume = 0.50;
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
        hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co), QPATHTOF(helmet_mtp_co)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
            hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co), QPATHTOF(helmet_mtp_co)};
        };
    };

    //mohawk cover and ir beacon
    class CLASS(mohawk_mtp_strobe): CLASS(mohawk_mtp) {
        scope = 2;
        author = AUTHOR;
        descriptionShort = "";
        displayName = "Mohawk (MTP) +Strobe";
        model = QPATHTOF(fast_mohawk_strobe);
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
        hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co)};
        class ItemInfo: ItemInfo {
            uniformModel = QPATHTOF(fast_mohawk_strobe);
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
            hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co)};
        };
    };

    class CLASS(mohawk_mtp_strobe_peltor): CLASS(mohawk_mtp_strobe) {
        displayName = "Mohawk (MTP) +Strobe, Peltor";
        ace_hearing_protection = 0.80;
        ace_hearing_lowerVolume = 0.50;
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
        hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
            hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co)};
        };
    };

    class CLASS(mohawk_mtp_strobe_full): CLASS(mohawk_mtp_strobe) {
        displayName = "Mohawk (MTP) +Strobe, Peltor, Headlamp";
        ace_hearing_protection = 0.80;
        ace_hearing_lowerVolume = 0.50;
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
        hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co), QPATHTOF(helmet_mtp_co)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
            hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co), QPATHTOF(helmet_mtp_co)};
        };
    };

    //mich2001
    class CLASS(mich_base): H_HelmetB {
        scope = 2;
        author = AUTHOR;
        displayName = "MICH Helmet (Tan)";
        descriptionShort = "Ballistic Protection";
        model = QPATHTOF(mich2001);
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "patch_misc", "peltor", "equip"};
        hiddenSelectionsTextures[] = {QPATHTOF(light_helmet\helmet_base_tan_co), "", QPATHTOF(patch\tfrg_co), ""};
        class ItemInfo: ItemInfo {
            uniformModel = QPATHTOF(mich2001);
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "patch_misc", "peltor", "equip"};
            hiddenSelectionsTextures[] = {QPATHTOF(light_helmet\helmet_base_tan_co), "", QPATHTOF(patch\tfrg_co), ""};
        };
    };
    
    class CLASS(mich_peltor): CLASS(mich_base) {
        displayName = "MICH Helmet (Tan) +Peltor";
        ace_hearing_protection = 0.80;
        ace_hearing_lowerVolume = 0.50;
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "patch_misc", "equip"};
        hiddenSelectionsTextures[] = {QPATHTOF(light_helmet\helmet_base_tan_co), "", QPATHTOF(patch\tfrg_co), ""};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "patch_misc", "equip"};
            hiddenSelectionsTextures[] = {QPATHTOF(light_helmet\helmet_base_tan_co), "", QPATHTOF(patch\tfrg_co), ""};
        };
    };

    class CLASS(mich_equip): CLASS(mich_base) {
        displayName = "MICH Helmet (Tan) +Equip";
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "patch_misc", "peltor"};
        hiddenSelectionsTextures[] = {QPATHTOF(light_helmet\helmet_base_tan_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(patch\patch_co)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "patch_misc", "peltor"};
            hiddenSelectionsTextures[] = {QPATHTOF(light_helmet\helmet_base_tan_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(patch\patch_co)};
        };
    };

    class CLASS(mich_full): CLASS(mich_base) {
        displayName = "MICH Helmet (Tan) +Peltor, Equip";
        ace_hearing_protection = 0.80;
        ace_hearing_lowerVolume = 0.50;
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "patch_misc"};
        hiddenSelectionsTextures[] = {QPATHTOF(light_helmet\helmet_base_tan_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(patch\patch_co)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "patch_misc"};
            hiddenSelectionsTextures[] = {QPATHTOF(light_helmet\helmet_base_tan_co), "", QPATHTOF(patch\tfrg_co), QPATHTOF(patch\patch_co)};
        };
    };

    //Gambler
    class CLASS(mohawk_mtp_g): CLASS(mohawk_mtp) {
        displayName = "RG Mohawk (MTP, Gambler)";
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
        hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), QPATHTOF(patch\trf_g_co), QPATHTOF(patch\tfrg_co)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "headlamp", "vlite"};
            hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), QPATHTOF(patch\trf_g_co), QPATHTOF(patch\tfrg_co)};
        };
    };

    class CLASS(mohawk_mtp_g_nco): CLASS(mohawk_mtp_headset) {
        displayName = "RG Mohawk (MTP, Gambler) NCO";
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "vlite_mat", "headlamp"};
        hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), QPATHTOF(patch\trf_g_co), QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co), QPATHTOF(acc\vlite_gg)};
        hiddenSelectionsMaterials[] = {QPATHTOF(helmet), "", "", QPATHTOF(peltor\peltor), QPATHTOF(acc\glow_g)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "vlite_mat", "headlamp"};
            hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), QPATHTOF(patch\trf_g_co), QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co), QPATHTOF(acc\vlite_gg)};
            hiddenSelectionsMaterials[] = {QPATHTOF(helmet), "", "", QPATHTOF(peltor\peltor), QPATHTOF(acc\glow_g)};
        };
    };

    class CLASS(mohawk_mtp_g_cmd): CLASS(mohawk_mtp_strobe_peltor) {
        displayName = "RG Mohawk (MTP, Gambler) Command";
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "vlite_mat", "headlamp"};
        hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), QPATHTOF(patch\trf_g_co), QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co), QPATHTOF(acc\vlite_rr)};
        hiddenSelectionsMaterials[] = {QPATHTOF(helmet), "", "", QPATHTOF(peltor\peltor), QPATHTOF(acc\glow_r)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "peltor", "vlite_mat", "headlamp"};
            hiddenSelectionsTextures[] = {QPATHTOF(helmet_mtp_co), QPATHTOF(patch\trf_g_co), QPATHTOF(patch\tfrg_co), QPATHTOF(peltor\peltor_tan_co), QPATHTOF(acc\vlite_rr)};
            hiddenSelectionsMaterials[] = {QPATHTOF(helmet), "", "", QPATHTOF(peltor\peltor), QPATHTOF(acc\glow_r)};
        };
    };

    class CLASS(mich_t): CLASS(mich_base) {
        displayName = "RG MICH (Tan, Talon)";
        hiddenSelections[] = {"camo", "patch_left", "patch_right", "patch_misc"};
        hiddenSelectionsTextures[] = {QPATHTOF(light_helmet\helmet_base_tan_co), QPATHTOF(patch\trf_t_co), QPATHTOF(patch\tfrg_co), QPATHTOF(patch\patch_co)};
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo", "patch_left", "patch_right", "patch_misc"};
            hiddenSelectionsTextures[] = {QPATHTOF(light_helmet\helmet_base_tan_co), QPATHTOF(patch\trf_t_co), QPATHTOF(patch\tfrg_co), QPATHTOF(patch\patch_co)};
        };
    };
};