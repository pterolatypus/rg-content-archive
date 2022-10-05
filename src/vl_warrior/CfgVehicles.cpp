class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;

class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class NewTurret;
        class Sounds;
        class HitPoints;
    };

    class Tank_F: Tank {
        class Turrets {
            class MainTurret: NewTurret {
                class ViewGunner;
                class Turrets {
                    class CommanderOptics;
                };
            };
        };

        class AnimationSources;
        class ViewPilot;
        class ViewOptics;
        class ViewCargo;
        class HeadLimits;

        class HitPoints: HitPoints {
            class HitHull;
            class HitFuel;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };

        class Sounds: Sounds {
            class Engine;
            class Movement;
        };
    };

    class APC_Tracked_03_base_F: Tank_F{};
    class I_APC_tracked_03_base_F: APC_Tracked_03_base_F {};
    class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F {};

    // Base FV510 (RGTF_fv510_warrior_base)
    class CLASSCOMP(base): I_APC_tracked_03_cannon_F {
        author = AUTHOR;
        scope = 0;
        displayName = CSTRING(base_displayName);
        displayNameShort = CSTRING(base_displayNameShort);
        side = 1;
        faction = "RG_TaskForce";
        crew = "RG_SupportCrew_MTP";
        vehicleClass = "Armored";

        hiddenSelections[] = {
            "Camo1",
            "Camo2",
            "CamoNet",
            "CamoSlat"
        };

        hiddenSelectionsMaterials[] = {
            QPATHTOF(data\fv510_warrior_ext1.rvmat),
            QPATHTOF(data\fv510_warrior_ext2.rvmat),
            QPATHTOF(data\fv510_warrior_camonet.rvmat),
            QPATHTOF(data\fv510_warrior_cage.rvmat)
        };

        editorSubcategory = "RG_VEHICLES_FV510";

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        weapons[] = {
                            "Laserdesignator_mounted",
                            "smokelauncher"
                        };

                        magazines[] = {
                            "Laserbatteries",
                            "SmokeLauncherMag"
                        };
                    };
                };

                stabilizedInAxes = "StabilizedInAxesNone";
                maxHorizontalRotSpeed = 0.9;
                maxVerticalRotSpeed = 0.12;
                startEngine = "false";
                inGunnerMayFire = 1;
                outGunnerMayFire = 1;
                gunnerOutOpticsShowCursor = 0;

                weapons[] = {
                    QCLASS(30mm_L21A1),
                    QCLASS(762_L94A1),
                    QCLASS(safe)
                };

                magazines[] = {
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_HE_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(6Rnd_30mm_APFSDS_Red),
                    QCLASS(250Rnd_762x51_Red),
                    QCLASS(250Rnd_762x51_Red),
                    QCLASS(250Rnd_762x51_Red),
                    QCLASS(250Rnd_762x51_Red),
                    QCLASS(250Rnd_762x51_Red),
                    QCLASS(250Rnd_762x51_Red),
                    QCLASS(250Rnd_762x51_Red),
                    QCLASS(250Rnd_762x51_Red),
                    QCLASS(250Rnd_762x51_Red),
                    QCLASS(250Rnd_762x51_Red),
                    QCLASS(250Rnd_762x51_Red)
                };
            };
        };

        class AnimationSources: AnimationSources {
            class showBags2 {
                displayName = "$STR_A3_animationsources_showcoverhull0";
                author = "$STR_A3_Bohemia_Interactive";
                source = "user";
                forceAnimatePhase = 0;

                forceAnimate[] = {
                    "showCamonetHull", 0
                };

                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };

            class showTools {
                displayName = "$STR_A3_animationsources_showtoolshull0";
                author = "$STR_A3_Bohemia_Interactive";
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
                mass = -50;
            };
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
            MACRO_ADDITEM(ACE_fieldDressing, 5);
            MACRO_ADDITEM(ACE_elasticBandage, 5);
            MACRO_ADDITEM(ACE_quikclot, 5);
            MACRO_ADDITEM(ACE_salineIV_500, 2);
            MACRO_ADDITEM(ACE_packingBandage, 5);
            MACRO_ADDITEM(ACE_morphine, 5);
        };

        class TransportWeapons {
            MACRO_ADDWEAPON(UK3CB_BAF_Javelin_Slung_Tube, 1);
            MACRO_ADDWEAPON(UK3CB_BAF_Javelin_CLU, 1);
        };
    };

    // Olive/Green FV510 (RGTF_fv510_warrior_olive)
    class CLASSCOMP(olive): CLASSCOMP(base) {
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(olive_displayName);
        displayNameShort = CSTRING(olive_displayNameShort);
        crew = "RG_SupportCrew_JN";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\olive\fv510_warrior_ext1_olive_co.paa),
            QPATHTOF(data\olive\fv510_warrior_ext2_olive_co.paa),
            QPATHTOEF(vl_common,data\armour\camonets\camonet_olive_co.paa),
            QPATHTOEF(vl_common,data\armour\cages\cage_olive_co.paa)
        };

        textureList[] = {
            "Olive", 1
        };

        class TextureSources {
            class Olive {
                displayName = "Olive/Green";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\olive\fv510_warrior_ext1_olive_co.paa),
                    QPATHTOF(data\olive\fv510_warrior_ext2_olive_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_olive_co.paa),
                    QPATHTOEF(vl_common,data\armour\cages\cage_olive_co.paa)
                };
            };
        };

        class Olive_Camo {
            displayName = "Olive/Camo";
            author = AUTHOR;

            textures[] = {
                QPATHTOF(data\olive\fv510_warrior_ext1_olive_co.paa),
                QPATHTOF(data\olive\fv510_warrior_ext2_olive_co.paa),
                QPATHTOEF(vl_common,data\armour\camonets\camonet_woodland_co.paa),
                QPATHTOEF(vl_common,data\armour\cages\cage_olive_co.paa)
            };
        };
    };

    // Woodland FV510 (RGTF_fv510_warrior_woodland)
    class CLASSCOMP(woodland): CLASSCOMP(base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        displayName = CSTRING(woodland_displayName);
        displayNameShort = CSTRING(woodland_displayNameShort);
        crew = "RG_SupportCrew_JN";

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\woodland\fv510_warrior_ext1_woodland_co.paa),
            QPATHTOF(data\woodland\fv510_warrior_ext2_woodland_co.paa),
            QPATHTOEF(vl_common,data\armour\camonets\camonet_woodland_co.paa),
            QPATHTOEF(vl_common,data\armour\cages\cage_olive_co.paa)
        };

        textureList[] = {
            "Woodland_Camo", 1
        };

        class TextureSources {
            class Woodland_Olive {
                displayName = "Woodland/Olive";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\woodland\fv510_warrior_ext1_woodland_co.paa),
                    QPATHTOF(data\woodland\fv510_warrior_ext2_woodland_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_olive_co.paa),
                    QPATHTOEF(vl_common,data\armour\cages\cage_olive_co.paa)
                };
            };

            class Woodland_Camo {
                displayName = "Woodland/Camo";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\woodland\fv510_warrior_ext1_woodland_co.paa),
                    QPATHTOF(data\woodland\fv510_warrior_ext2_woodland_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_woodland_co.paa),
                    QPATHTOEF(vl_common,data\armour\cages\cage_olive_co.paa)
                };
            };
        };
    };

    // Desert FV510 (RGTF_fv510_warrior_desert)
    class CLASSCOMP(desert): CLASSCOMP(base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        displayName = CSTRING(desert_displayName);
        displayNameShort = CSTRING(desert_displayNameShort);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\desert\fv510_warrior_ext1_desert_co.paa),
            QPATHTOF(data\desert\fv510_warrior_ext2_desert_co.paa),
            QPATHTOEF(vl_common,data\armour\camonets\camonet_desert_co.paa),
            QPATHTOEF(vl_common,data\armour\cages\cage_desert_co.paa)
        };

        textureList[] = {
            "Desert_Tan", 1
        };

        class TextureSources {
            class Desert_Camo {
                displayName = "Desert/Camo";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\desert\fv510_warrior_ext1_desert_co.paa),
                    QPATHTOF(data\desert\fv510_warrior_ext2_desert_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_desert_camo_co.paa),
                    QPATHTOEF(vl_common,data\armour\cages\cage_desert_co.paa)
                };
            };

            class Desert_Tan {
                displayName = "Desert/Tan";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\desert\fv510_warrior_ext1_desert_co.paa),
                    QPATHTOF(data\desert\fv510_warrior_ext2_desert_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_desert_co.paa),
                    QPATHTOEF(vl_common,data\armour\cages\cage_desert_co.paa)
                };
            };
        };
    };

    // Snow FV510 (RGTF_fv510_warrior_snow)
    class CLASSCOMP(snow): CLASSCOMP(base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        displayName = CSTRING(snow_displayName);
        displayNameShort = CSTRING(snow_displayNameShort);

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\snow\fv510_warrior_ext1_snow_co.paa),
            QPATHTOF(data\snow\fv510_warrior_ext2_snow_co.paa),
            QPATHTOEF(vl_common,data\armour\camonets\camonet_snow_co.paa),
            QPATHTOEF(vl_common,data\armour\cages\cage_snow_co.paa)
        };

        textureList[] = {
            "Snow", 1
        };

        class TextureSources {
            class Snow {
                displayName = "Snow/White";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\snow\fv510_warrior_ext1_snow_co.paa),
                    QPATHTOF(data\snow\fv510_warrior_ext2_snow_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_snow_co.paa),
                    QPATHTOEF(vl_common,data\armour\cages\cage_snow_co.paa)
                };
            };

            class Snow_Camo {
                displayName = "Snow/Camo";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\snow\fv510_warrior_ext1_snow_co.paa),
                    QPATHTOF(data\snow\fv510_warrior_ext2_snow_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_snow_camo_co.paa),
                    QPATHTOEF(vl_common,data\armour\cages\cage_snow_co.paa)
                };
            };
        };
    };

    // UN FV510 (RGTF_fv510_warrior_un)
    class CLASSCOMP(un): CLASSCOMP(base) {
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
        displayName = CSTRING(un_displayName);
        displayNameShort = CSTRING(un_displayNameShort);

        class DefaultEventHandlers;
        class EventHandlers: DefaultEventHandlers {
            fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
            init = "";
            killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";

            class ADDON {
                init = QUOTE(if (local (_this select 0)) then {(_this select 0) forceFlagTexture QUOTE(QPATHTOF(data\un\fv510_warrior_flag_un_co.paa));};);
            };
        };

        hiddenSelectionsTextures[] = {
            QPATHTOF(data\un\fv510_warrior_ext1_un_co.paa),
            QPATHTOF(data\un\fv510_warrior_ext2_un_co.paa),
            QPATHTOEF(vl_common,data\armour\camonets\camonet_snow_co.paa),
            QPATHTOEF(vl_common,data\armour\cages\cage_snow_co.paa)
        };

        textureList[] = {
            "UN", 1
        };

        class AnimationSources: AnimationSources {
            class showCamonetHull {
                source = "";
            };

            class showCamonetTurret {
                source = "";
            };
        };

        class TextureSources {
            class UN {
                displayName = "UN/White";
                author = AUTHOR;

                textures[] = {
                    QPATHTOF(data\un\fv510_warrior_ext1_un_co.paa),
                    QPATHTOF(data\un\fv510_warrior_ext2_un_co.paa),
                    QPATHTOEF(vl_common,data\armour\camonets\camonet_snow_co.paa),
                    QPATHTOEF(vl_common,data\armour\cages\cage_snow_co.paa)
                };
            };
        };
    };
};
