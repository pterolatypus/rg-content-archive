class CfgVehicles {
    class B_MBT_01_TUSK_F;
    class CLASSCOMP(base): B_MBT_01_TUSK_F {
        author = AUTHOR;
        scope = 1;
        displayName = CSTRING(base_displayName);
        displayNameShort = CSTRING(base_displayNameShort);
        faction = "RG_TaskForce";
        crew = "RG_SupportCrew_MTP";
        vehicleClass = "Armored";
        editorSubcategory = "RG_VEHICLES_MERKAVAMK4";

        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\merkava_mk4_body.rvmat),
            QPATHTOF(data\merkava_mk4_tow.rvmat),
            QPATHTOF(data\merkava_mk4_addons.rvmat),
            QPATHTOF(data\merkava_mk4_camonet.rvmat)
        };

        class TransportMagazines {
            MACRO_ADDMAG(UK3CB_BAF_SmokeShell, 5);
            MACRO_ADDMAG(UK3CB_BAF_SmokeShellRed, 3);
            MACRO_ADDMAG(UK3CB_BAF_SmokeShellBlue, 3);
            MACRO_ADDMAG(UK3CB_BAF_556_200Rnd, 4);
            MACRO_ADDMAG(UK3CB_BAF_762_L42A1_20Rnd_T, 4);
            MACRO_ADDMAG(rhs_mag_M441_HE, 4);
            MACRO_ADDMAG(rhs_mag_30Rnd_556x45_Mk318_Stanag, 12);
        };

        class TransportItems {
            MACRO_ADDITEM(rhsusf_cvc_green_ess, 3);
            MACRO_ADDITEM(ACRE_PRC148, 1);
            MACRO_ADDITEM(ToolKit, 1);
            MACRO_ADDITEM(ACE_EntrenchingTool, 1);
            MACRO_ADDITEM(ACE_fieldDressing, 5);
            MACRO_ADDITEM(ACE_elasticBandage, 5);
            MACRO_ADDITEM(ACE_quikclot, 5);
            MACRO_ADDITEM(ACE_salineIV_500, 2);
            MACRO_ADDITEM(ACE_packingBandage, 5);
            MACRO_ADDITEM(ACE_morphine, 5);
        };
    };

    // Desert/Tan
    class CLASSCOMP(desert): CLASSCOMP(base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        displayName = CSTRING(desert_displayName);
        displayNameShort = CSTRING(desert_displayNameShort);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\desert\merkava_mk4_body_desert_co.paa),
            QPATHTOF(data\desert\merkava_mk4_tow_desert_co.paa),
            QPATHTOF(data\desert\merkava_mk4_addons_desert_co.paa),
            QPATHTOEF(vl_common,data\armour\camonets\camonet_desert_co.paa)
        };

        textureList[] = {
            "Desert_Tan", 1
        };

        class TextureSources {
            class Desert_Tan {
                displayName = "Desert/Tan";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\desert\merkava_mk4_body_desert_co.paa),
                    QPATHTOF(data\desert\merkava_mk4_tow_desert_co.paa),
                    QPATHTOF(data\desert\merkava_mk4_addons_desert_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_desert_co.paa)
                };
            };

            class Desert_Camo {
                displayName = "Desert/Camo";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\desert\merkava_mk4_body_desert_co.paa),
                    QPATHTOF(data\desert\merkava_mk4_tow_desert_co.paa),
                    QPATHTOF(data\desert\merkava_mk4_addons_desert_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_desert_camo_co.paa)
                };
            };
        };
    };

    // Snow
    class CLASSCOMP(snow): CLASSCOMP(base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        displayName = CSTRING(snow_displayName);
        displayNameShort = CSTRING(snow_displayNameShort);
        crew = "RG_SupportCrew_SN";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\snow\merkava_mk4_body_snow_co.paa),
            QPATHTOF(data\snow\merkava_mk4_tow_snow_co.paa),
            QPATHTOF(data\snow\merkava_mk4_addons_snow_co.paa),
            QPATHTOEF(vl_common,data\armour\camonets\camonet_snow_co.paa)
        };

        textureList[] = {
            "Snow_White", 1
        };

        class TextureSources {
            class Snow_White {
                displayName = "Snow/White";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\snow\merkava_mk4_body_snow_co.paa),
                    QPATHTOF(data\snow\merkava_mk4_tow_snow_co.paa),
                    QPATHTOF(data\snow\merkava_mk4_addons_snow_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_snow_co.paa)
                };
            };

            class Snow_Camo {
                displayName = "Snow/Camo";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\snow\merkava_mk4_body_snow_co.paa),
                    QPATHTOF(data\snow\merkava_mk4_tow_snow_co.paa),
                    QPATHTOF(data\snow\merkava_mk4_addons_snow_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_snow_camo_co.paa)
                };
            };

            class Snow_Green {
                displayName = "Snow/Green";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\snow\merkava_mk4_body_snow_co.paa),
                    QPATHTOF(data\snow\merkava_mk4_tow_snow_co.paa),
                    QPATHTOF(data\snow\merkava_mk4_addons_snow_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_olive_co.paa)
                };
            };
        };
    };

    // Woodland
    class CLASSCOMP(woodland): CLASSCOMP(base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        displayName = CSTRING(woodland_displayName);
        displayNameShort = CSTRING(woodland_displayNameShort);
        crew = "RG_SupportCrew_MTP";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\woodland\merkava_mk4_body_woodland_co.paa),
            QPATHTOF(data\woodland\merkava_mk4_tow_woodland_co.paa),
            QPATHTOF(data\woodland\merkava_mk4_addons_woodland_co.paa),
            QPATHTOEF(vl_common,data\armour\camonets\camonet_woodland_co.paa)
        };

        textureList[] = {
            "Woodland_Camo", 1
        };

        class TextureSources {
            class Woodland_Camo {
                displayName = "Woodland/Camo";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\woodland\merkava_mk4_body_woodland_co.paa),
                    QPATHTOF(data\woodland\merkava_mk4_tow_woodland_co.paa),
                    QPATHTOF(data\woodland\merkava_mk4_addons_woodland_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_woodland_co.paa)
                };
            };

            class Woodland_Green {
                displayName = "Woodland/Green";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\woodland\merkava_mk4_body_woodland_co.paa),
                    QPATHTOF(data\woodland\merkava_mk4_tow_woodland_co.paa),
                    QPATHTOF(data\woodland\merkava_mk4_addons_woodland_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_olive_co.paa)
                };
            };
        };
    };
};
