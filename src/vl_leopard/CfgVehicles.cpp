class CfgVehicles {
    class MBT_03_base_F;
    class CLASSCOMP(base): MBT_03_base_F {
        author = AUTHOR;
        displayName = CSTRING(base_displayName);
        displayNameShort = CSTRING(base_displayNameShort);
        side = 1;
        faction = "RG_TaskForce";
        crew = "RG_SupportCrew_MTP";
        vehicleClass = "Armored";
        editorSubcategory = "RG_VEHICLES_LEOPARD2";

        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\leopard_2sg_ext1.rvmat),
            QPATHTOF(data\leopard_2sg_ext2.rvmat),
            QPATHTOF(data\leopard_2sg_rcws.rvmat),
            QPATHTOF(data\leopard_2sg_camonet.rvmat)
        };

        class TransportMagazines {
            MACRO_ADDMAG(UK3CB_BAF_SmokeShell, 4);
            MACRO_ADDMAG(UK3CB_BAF_SmokeShellRed, 2);
            MACRO_ADDMAG(UK3CB_BAF_SmokeShellBlue, 2);
            MACRO_ADDMAG(rhs_mag_30Rnd_556x45_Mk318_Stanag, 12);
        };

        class TransportItems {
            MACRO_ADDITEM(rhsusf_cvc_green_ess, 3);
            MACRO_ADDITEM(ACRE_PRC148, 1);
            MACRO_ADDITEM(ToolKit, 1);
            MACRO_ADDITEM(ACE_EntrenchingTool, 1);
            MACRO_ADDITEM(ACE_fieldDressing, 4);
            MACRO_ADDITEM(ACE_elasticBandage, 4);
            MACRO_ADDITEM(ACE_quikclot, 4);
            MACRO_ADDITEM(ACE_salineIV_500, 2);
            MACRO_ADDITEM(ACE_packingBandage, 4);
            MACRO_ADDITEM(ACE_morphine, 6);
        };
    };

    // Desert/Tan
    class CLASSCOMP(desert): CLASSCOMP(base) {
        scope = 2;
        displayName = CSTRING(desert_displayName);
        displayNameShort = CSTRING(desert_displayNameShort);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\desert\leopard_2sg_ext1_desert_co.paa),
            QPATHTOF(data\desert\leopard_2sg_ext2_desert_co.paa),
            QPATHTOF(data\desert\leopard_2sg_rcws_desert_co.paa),
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
                    QPATHTOF(data\desert\leopard_2sg_ext1_desert_co.paa),
                    QPATHTOF(data\desert\leopard_2sg_ext2_desert_co.paa),
                    QPATHTOF(data\desert\leopard_2sg_rcws_desert_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_desert_co.paa)
                };
            };

            class Desert_Camo {
                displayName = "Desert/Camo";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\desert\leopard_2sg_ext1_desert_co.paa),
                    QPATHTOF(data\desert\leopard_2sg_ext2_desert_co.paa),
                    QPATHTOF(data\desert\leopard_2sg_rcws_desert_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_desert_camo_co.paa)
                };
            };
        };
    };

    // Snow
    class CLASSCOMP(snow): CLASSCOMP(base) {
        scope = 2;
        displayName = CSTRING(snow_displayName);
        displayNameShort = CSTRING(snow_displayNameShort);
        crew = "RG_SupportCrew_SN";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\snow\leopard_2sg_ext1_snow_co.paa),
            QPATHTOF(data\snow\leopard_2sg_ext2_snow_co.paa),
            QPATHTOF(data\snow\leopard_2sg_rcws_snow_co.paa),
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
                    QPATHTOF(data\snow\leopard_2sg_ext1_snow_co.paa),
                    QPATHTOF(data\snow\leopard_2sg_ext2_snow_co.paa),
                    QPATHTOF(data\snow\leopard_2sg_rcws_snow_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_snow_co.paa)
                };
            };

            class Snow_Camo {
                displayName = "Snow/Camo";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\snow\leopard_2sg_ext1_snow_co.paa),
                    QPATHTOF(data\snow\leopard_2sg_ext2_snow_co.paa),
                    QPATHTOF(data\snow\leopard_2sg_rcws_snow_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_snow_camo_co.paa)
                };
            };

            class Snow_Green {
                displayName = "Snow/Green";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\snow\leopard_2sg_ext1_snow_co.paa),
                    QPATHTOF(data\snow\leopard_2sg_ext2_snow_co.paa),
                    QPATHTOF(data\snow\leopard_2sg_rcws_snow_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_olive_co.paa)
                };
            };
        };
    };

    // Woodland
    class CLASSCOMP(woodland): CLASSCOMP(base) {
        scope = 2;
        displayName = CSTRING(woodland_displayName);
        displayNameShort = CSTRING(woodland_displayNameShort);
        crew = "RG_SupportCrew_MTP";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\woodland\leopard_2sg_ext1_woodland_co.paa),
            QPATHTOF(data\woodland\leopard_2sg_ext2_woodland_co.paa),
            QPATHTOF(data\woodland\leopard_2sg_rcws_woodland_co.paa),
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
                    QPATHTOF(data\woodland\leopard_2sg_ext1_woodland_co.paa),
                    QPATHTOF(data\woodland\leopard_2sg_ext2_woodland_co.paa),
                    QPATHTOF(data\woodland\leopard_2sg_rcws_woodland_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_woodland_co.paa)
                };
            };

            class Woodland_Green {
                displayName = "Woodland/Green";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\woodland\leopard_2sg_ext1_woodland_co.paa),
                    QPATHTOF(data\woodland\leopard_2sg_ext2_woodland_co.paa),
                    QPATHTOF(data\woodland\leopard_2sg_rcws_woodland_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_olive_co.paa)
                };
            };
        };
    };
};
