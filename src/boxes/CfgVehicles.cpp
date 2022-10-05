#include "\x\rg\addons\units\common_defs.hpp"
class CfgVehicles {
  class Box_NATO_AmmoVeh_F;
  class B_CargoNet_01_ammo_F;
  class O_CargoNet_01_ammo_F;
  class I_CargoNet_01_ammo_F;
  class CLASS(Box_Base): Box_NATO_AmmoVeh_F {
      scope = 0;
      scopeCurator = 0;
      author = AUTHOR;
      editorCategory = QCLASS(CAT_Taskforce);
      editorSubcategory = QCLASS(Boxes);
      supplyRadius = 2;
      mapSize = 1.53;
      icon = "iconCrateAmmo";//iconCrateWpns iconCrateVeh
      transportMaxBackpacks = 10;
      transportMaxMagazines = 100;
      transportMaxWeapons = 5;
      transportMaxItems = 50;
      maximumLoad = 3000;//Kg,capacity of cargo inventory for backpacks and various other items
      transportAmmo = 1000;//30000,How much it can rearm vehicles
      transportRepair = 0;//How much it can repair vehicles
      transportFuel = 0;//How much it can refuel vehicles
      armor = 200;//doesn't really matter because boxes damage needs to be disabled because they can go up in flames on their own if not
      weight = 0;//isn't used by sling loading
      class TransportMagazines {};
      class TransportWeapons {};
      class TransportItems {};
  };
  class CLASS(Box_BaseNet_G): B_CargoNet_01_ammo_F {
      scope = 0;
      scopeCurator = 0;
      author = AUTHOR;
      editorCategory = QCLASS(CAT_Taskforce);
      editorSubcategory = QCLASS(Boxes);
      supplyRadius=2;
      mapSize = 1.53;
      icon = "iconCrateAmmo";
      transportMaxBackpacks = 10;
      transportMaxMagazines=100;
      transportMaxWeapons=5;
      transportMaxItems=50;
      maximumLoad = 20000;
      transportAmmo = 1000;
      transportRepair = 0;
      transportFuel = 0;
      armor = 200;
      class TransportMagazines {};
      class TransportWeapons {};
      class TransportItems {};
      weight = 0;
  };
  class CLASS(Box_BaseNet_FSG): B_CargoNet_01_ammo_F {
      scope = 0;
      scopeCurator = 0;
      author = AUTHOR;
      editorCategory = QCLASS(CAT_Taskforce);
      editorSubcategory = QCLASS(Boxes);
      supplyRadius = 2;
      mapSize = 1.53;
      icon = "iconCrateAmmo";
      transportMaxBackpacks = 25;
      transportMaxMagazines = 100;
      transportMaxWeapons = 5;
      transportMaxItems = 50;
      maximumLoad = 50000;
      transportAmmo = 30000;
      transportRepair = 0;
      transportFuel = 0;
      armor = 200;
      class TransportMagazines {};
      class TransportWeapons {};
      class TransportItems {};
      weight = 0;
  };
  class CLASS(Box_BaseNet_V): O_CargoNet_01_ammo_F {
      scope = 0;
      scopeCurator = 0;
      author = AUTHOR;
      editorCategory = QCLASS(CAT_Taskforce);
      editorSubcategory = QCLASS(Boxes);
      supplyRadius=2;
      mapSize = 1.53;
      icon = "iconCrateAmmo";
      transportMaxBackpacks = 10;
      transportMaxMagazines=100;
      transportMaxWeapons=5;
      transportMaxItems=50;
      maximumLoad = 20000;
      transportAmmo = 1000;
      transportRepair = 0;
      transportFuel = 0;
      armor = 200;
      class TransportMagazines {};
      class TransportWeapons {};
      class TransportItems {};
      weight = 0;
  };
  class CLASS(Box_BaseNet_M): I_CargoNet_01_ammo_F {
      scope = 0;
      scopeCurator = 0;
      author = AUTHOR;
      editorCategory = QCLASS(CAT_Taskforce);
      editorSubcategory = QCLASS(Boxes);
      supplyRadius=2;
      mapSize = 1.53;
      icon = "iconCrateAmmo";
      transportMaxBackpacks = 10;
      transportMaxMagazines=100;
      transportMaxWeapons=5;
      transportMaxItems=50;
      maximumLoad = 3000;
      transportAmmo = 1000;
      transportRepair = 0;
      transportFuel = 0;
      armor = 200;
      class TransportMagazines {};
      class TransportWeapons {};
      class TransportItems {};
      class TransportBackpacks {};
      weight = 0;
  };
  class Box_NATO_Wps_F;
  class CLASS(box_weapons_base): Box_NATO_Wps_F {
      scope = 0;
      scopeCurator = 0;
      author = AUTHOR;
      editorCategory = QCLASS(CAT_Taskforce);
      editorSubcategory = QCLASS(Boxes);
      hiddenSelectionsTextures[] = {QPATHTOF(textures\AmmoBox_signs_CA.paa),"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
      ace_cargo_size = 2;
      class TransportMagazines {};
      class TransportWeapons {};
      class TransportItems {};
      class TransportBackpacks {};
  };
  class Box_NATO_WpsSpecial_F;
  class CLASS(box_specialweapons_base): Box_NATO_WpsSpecial_F {
      scope = 0;
      scopeCurator = 0;
      author = AUTHOR;
      editorCategory = QCLASS(CAT_Taskforce);
      editorSubcategory = QCLASS(Boxes);
      hiddenSelectionsTextures[] = {QPATHTOF(textures\AmmoBox_signs_CA.paa),"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
      ace_cargo_size = 2;
      class TransportMagazines {};
      class TransportWeapons {};
      class TransportItems {};
      class TransportBackpacks {};
  };
  class B_supplyCrate_f;
  class CLASS(Box_SupplyCrate): B_supplyCrate_f {
      scope=2;
      scopeCurator=2;
      author = AUTHOR;
      editorCategory = QCLASS(CAT_Taskforce);
      editorSubcategory = QCLASS(Boxes);
      displayName="RG Supply Crate";
      maximumLoad=0;
      ace_cargo_size=8;
      ace_cargo_hasCargo=1;
      ace_cargo_space=6;
      class TransportMagazines {};
      class TransportWeapons {};
      class TransportItems {};
      class TransportBackpacks {};
  };
  class CLASS(box_supply_pallet): B_CargoNet_01_ammo_F {
      scope=2;
      scopeCurator=2;
      author = AUTHOR;
      editorCategory = QCLASS(CAT_Taskforce);
      editorSubcategory = QCLASS(Boxes);
      displayName="RG Supply Pallet";
      ace_cargo_size=20;
      ace_cargo_hasCargo=1;
      ace_cargo_space=16;
      maximumLoad=0;
      class TransportMagazines {};
      class TransportWeapons {};
      class TransportItems {};
      class TransportBackpacks {};
  };
  class CLASS(Box_Berets): CLASS(Box_Base) {
      scope=2;
      scopeCurator=2;
      displayName="RG Berets";
      hiddenSelectionsTextures[] = {QPATHTOF(textures\berets.paa),"A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
      transportMaxMagazines=0;
      transportMaxWeapons=0;
      transportMaxItems=99;
      class TransportItems {
          MACRO_ADDITEM(RG_Beret_highroller,4);
          MACRO_ADDITEM(RG_Beret_gambler,40);
          MACRO_ADDITEM(RG_Beret_medic,3);
          MACRO_ADDITEM(RG_Beret_talon,12);
          MACRO_ADDITEM(RG_Beret_vegas,12);
          MACRO_ADDITEM(RG_Beret_recruit,15);
          MACRO_ADDITEM(RG_Beret_highroller_ltc,1);
          MACRO_ADDITEM(RG_Beret_highroller_maj,1);
          MACRO_ADDITEM(RG_Beret_highroller_cpt,1);
          MACRO_ADDITEM(RG_Beret_highroller_csm,1);
          MACRO_ADDITEM(RG_Beret_highroller_colt,1);
          MACRO_ADDITEM(RG_Beret_gambler_Sgt,5);
          MACRO_ADDITEM(RG_Beret_gambler_CSM,1);
          MACRO_ADDITEM(RG_Beret_gambler_2Lt,1);
          MACRO_ADDITEM(RG_Beret_gambler_1Lt,1);
          MACRO_ADDITEM(RG_Beret_gambler_Cpt,1);
          MACRO_ADDITEM(RG_Beret_talon_ssg,5);
          MACRO_ADDITEM(RG_Beret_vegas_ssg,5);
          MACRO_ADDITEM(RG_Beret_ares2,10);
          MACRO_ADDITEM(RG_Beret_ares,10);
          MACRO_ADDITEM(RG_Beret_shame,10);
      };
  };
  class CLASS(Box_gear_un): CLASS(Box_Base) {
    scope = 2;
    scopeCurator=2;
    displayName="RG Gear UN";
    hiddenSelectionsTextures[] = {QPATHTOF(textures\gear_un.paa),"A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
    transportMaxMagazines=1000;
    transportMaxWeapons=2500;
    transportMaxItems=2500;
    class TransportItems
    {
        //MACRO_ADDITEM(UK3CB_BAF_H_Beret_UN_PRR_Over, 32);
        MACRO_ADDITEM(SP_Mk7Helmet_Un1, 12);
        MACRO_ADDITEM(SP_Mk7Helmet_Un2, 12);
        MACRO_ADDITEM(SP_CVCHelmet_UN, 8);
        MACRO_ADDITEM(SP_SPH4Helmet_UN1, 6);
        MACRO_ADDITEM(SP_SPH4Helmet_UN2, 6);
    };
  };
  class CLASS(Box_divinggear): CLASS(Box_Base) {
      scope=2;
      scopeCurator=2;
      displayName="RG Diving Gear";
      hiddenSelectionsTextures[] = {QPATHTOF(textures\diving_gear.paa),"A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
      transportMaxMagazines=100;
      transportMaxWeapons=50;
      transportMaxItems=50;
      class TransportWeapons {
          MACRO_ADDWEAPON(arifle_SDAR_F,35);
          MACRO_ADDWEAPON(hgun_P07_snds_F,35);
      };
      class TransportMagazines {
          MACRO_ADDMAG(16Rnd_9x21_Mag,70);
          MACRO_ADDMAG(20Rnd_556x45_UW_mag,70);
      };
      class TransportItems {
          MACRO_ADDITEM(U_B_Wetsuit,35);
          MACRO_ADDITEM(V_RebreatherB,35);
          MACRO_ADDITEM(G_B_Diving,35);
      };
  };
  class CLASS(Box_gamblerft): CLASS(Box_BaseNet_G) {
      scope=2;
      scopeCurator=2;
      displayName="RG Gambler Big Resupply";
      hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\ammobox_co.paa",QPATHTOF(textures\net_gambler.paa)};
      transportMaxMagazines=150;
      transportMaxWeapons=5;
      transportMaxItems=50;
      class TransportMagazines {
          MACRO_ADDMAG(MAG_STD, 80);
          MACRO_ADDMAG(MAG_TRC,16);
          MACRO_ADDMAG(MAG_AUR,24);
          MACRO_ADDMAG(MAG_AUR_TRC,8);
          MACRO_ADDMAG(MAG_DMR,16);
          MACRO_ADDMAG(MAG_DMR_TRC,8);
          MACRO_ADDMAG(MAG_SIDEARM_JHP, 10);
          MACRO_ADDMAG(G_FRAG,20);
          MACRO_ADDMAG(G_STUN,24);
          MACRO_ADDMAG(G_SMOKE_W,24);
          MACRO_ADDMAG(G_SMOKE_B,8);
          MACRO_ADDMAG(G_SMOKE_R,8);
          MACRO_ADDMAG(G_SMOKE_Y,8);
          MACRO_ADDMAG(UGL_HE,24);
          MACRO_ADDMAG(UGL_HEDP,8);
          MACRO_ADDMAG(UGL_SMOKE_W,24);
          MACRO_ADDMAG(UGL_SMOKE_R,12);
          MACRO_ADDMAG(AT_HEAT,8);
          MACRO_ADDMAG(AT_HEDP,4);
          MACRO_ADDMAG(DemoCharge_Remote_Mag,8);
      };
      class TransportItems {
          MACRO_ADDITEM(ACE_elasticBandage,40);
          MACRO_ADDITEM(ACE_packingBandage,40);
          MACRO_ADDITEM(ACE_quikclot,40);
          MACRO_ADDITEM(ACE_fieldDressing,40);
          MACRO_ADDITEM(ACE_tourniquet,20);
          MACRO_ADDITEM(ACE_morphine,20);
          MACRO_ADDITEM(ACE_CableTie,40);
      };
  };
  class Box_NATO_Ammo_F;
  class CLASS(Box_gamblerft_sm): Box_NATO_Ammo_F {
      scope=2;
      scopeCurator=2;
      author = AUTHOR;
      editorCategory = QCLASS(CAT_Taskforce);
      editorSubcategory = QCLASS(Boxes);
      displayName="RG Gambler Squad Resupply";
      transportMaxMagazines=150;
      transportMaxWeapons=5;
      transportMaxItems=50;
      ace_cargo_size=1;
      class TransportMagazines {
          MACRO_ADDMAG(MAG_STD, 20);
          MACRO_ADDMAG(MAG_TRC,4);
          MACRO_ADDMAG(MAG_AUR,6);
          MACRO_ADDMAG(MAG_AUR_TRC,2);
          MACRO_ADDMAG(MAG_DMR,4);
          MACRO_ADDMAG(MAG_DMR_TRC,2);
          MACRO_ADDMAG(MAG_SIDEARM_JHP, 2);
          MACRO_ADDMAG(G_FRAG,5);
          MACRO_ADDMAG(G_STUN,6);
          MACRO_ADDMAG(G_SMOKE_W,6);
          MACRO_ADDMAG(G_SMOKE_B,2);
          MACRO_ADDMAG(G_SMOKE_R,2);
          MACRO_ADDMAG(G_SMOKE_Y,2);
          MACRO_ADDMAG(UGL_HE,6);
          MACRO_ADDMAG(UGL_HEDP,2);
          MACRO_ADDMAG(UGL_SMOKE_W,6);
          MACRO_ADDMAG(UGL_SMOKE_R,3);
          MACRO_ADDMAG(AT_HEAT,1);
          MACRO_ADDMAG(DemoCharge_Remote_Mag,2);
      };
      class TransportItems {
          MACRO_ADDITEM(ACE_elasticBandage,10);
          MACRO_ADDITEM(ACE_packingBandage,10);
          MACRO_ADDITEM(ACE_quikclot,10);
          MACRO_ADDITEM(ACE_fieldDressing,10);
          MACRO_ADDITEM(ACE_tourniquet,5);
          MACRO_ADDITEM(ACE_morphine,5);
          MACRO_ADDITEM(ACE_CableTie,10);
      };
  };
  class CLASS(Box_gamblerfsg): CLASS(Box_BaseNet_FSG) {
      scope=2;
      scopeCurator=2;
      displayName="RG Gambler FSG Crate";
      hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\ammobox_co.paa",QPATHTOF(textures\net_fsg.paa)};
      transportMaxMagazines=300;
      transportMaxWeapons=50;
      transportMaxItems=50;
      class TransportWeapons {
        MACRO_ADDWEAPON(CUP_lmg_Mk48_wdl,2);
        MACRO_ADDWEAPON(UK3CB_BAF_L7A2,2);
        MACRO_ADDWEAPON(UK3CB_BAF_M6,1);
        MACRO_ADDWEAPON(UK3CB_BAF_Tripod,2);
        MACRO_ADDWEAPON(rhs_weap_fgm148,2);
        MACRO_ADDWEAPON(rhs_weap_m240b,2);
      };
      class TransportMagazines {
        MACRO_ADDMAG(MAG_STD,15);
        MACRO_ADDMAG(MAG_TRC,15);
        MACRO_ADDMAG(ACE_1Rnd_82mm_Mo_Illum,40);
        MACRO_ADDMAG(ACE_1Rnd_82mm_Mo_Smoke,60);
        MACRO_ADDMAG(ACE_1Rnd_82mm_Mo_HE,60);
        MACRO_ADDMAG(Laserbatteries,2);
        MACRO_ADDMAG(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,25);
        MACRO_ADDMAG(UK3CB_BAF_1Rnd_60mm_Mo_Shells,16);
        MACRO_ADDMAG(UK3CB_BAF_1Rnd_60mm_Mo_Flare_White,10);
        MACRO_ADDMAG(UK3CB_BAF_1Rnd_60mm_Mo_WPSmoke_White,15);
        MACRO_ADDMAG(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White,10);
        MACRO_ADDMAG(rhs_fgm148_magazine_at,6);
        MACRO_ADDMAG(rhsusf_100rnd_762x51_m62_tracer,30);
        MACRO_ADDMAG(rhsusf_50rnd_762x51_m62_tracer,24);
      };
      class TransportItems {
          MACRO_ADDITEM(Laserdesignator,5);
          MACRO_ADDITEM(Toolkit,3);
          MACRO_ADDITEM(ACE_RangeTable_82mm,10);
          MACRO_ADDITEM(ACE_artilleryTable,10);
          MACRO_ADDITEM(ACE_EntrenchingTool,2);
          MACRO_ADDITEM(UK3CB_BAF_Kite,1);
          MACRO_ADDITEM(UK3CB_BAF_MaxiKite,1);
      };
      class TransportBackpacks {
          MACRO_ADDBACKPACK(rhs_Tow_Gun_Bag,1);
          MACRO_ADDBACKPACK(rhs_TOW_Tripod_Bag,1);
          MACRO_ADDBACKPACK(I_Mortar_01_support_F,2);
          MACRO_ADDBACKPACK(I_Mortar_01_weapon_F,2);
          MACRO_ADDBACKPACK(RG_PlatoonMedic_MTP_BackPack,3);
          MACRO_ADDBACKPACK(RG_PlatoonMedic_SN_BackPack,3);
          MACRO_ADDBACKPACK(B_carryall_cbr,3);
          MACRO_ADDBACKPACK(SP_Carryall_white, 3);
      };
  };
  class CLASS(Box_gambler_pco): CLASS(Box_Base) {
      scope=2;
      scopeCurator=2;
      displayName="RG Gambler PltCmd Resupply";
      hiddenSelectionsTextures[] = {QPATHTOF(textures\gambler_pco.paa),"A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
      transportMaxMagazines=150;
      transportMaxWeapons=5;
      transportMaxItems=100;
      class TransportMagazines {
          MACRO_ADDMAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,12);
          MACRO_ADDMAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,12);
          MACRO_ADDMAG(rhsusf_mag_17Rnd_9x19_JHP,8);
          MACRO_ADDMAG(HandGrenade,4);
          MACRO_ADDMAG(UK3CB_BAF_SmokeShell,4);
          MACRO_ADDMAG(UK3CB_BAF_SmokeShellBlue,4);
          MACRO_ADDMAG(UK3CB_BAF_SmokeShellGreen,4);
          MACRO_ADDMAG(UK3CB_BAF_SmokeShellOrange,4);
          MACRO_ADDMAG(UK3CB_BAF_SmokeShellPurple,4);
          MACRO_ADDMAG(Chemlight_blue,4);
          MACRO_ADDMAG(Chemlight_Green,4);
          MACRO_ADDMAG(ACE_HandFlare_Green,1);
      };
      class TransportItems {
          MACRO_ADDITEM(ACE_elasticBandage,30);
          MACRO_ADDITEM(ACE_packingBandage,30);
          MACRO_ADDITEM(ACE_quikclot,30);
          MACRO_ADDITEM(ACE_tourniquet,18);
          MACRO_ADDITEM(ACE_morphine,15);
      };
  };
  class CLASS(Box_medical): CLASS(Box_BaseNet_M) {
      scope=2;
      scopeCurator=2;
      displayName="RG Gambler Medical Resupply";
      hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\ammobox_co.paa",QPATHTOF(textures\net_medic.paa)};
      transportMaxMagazines=150;
      transportMaxWeapons=5;
      transportMaxItems=100;
      class TransportMagazines {
          MACRO_ADDMAG(MAG_STD,20);
          MACRO_ADDMAG(G_SMOKE_Y,12);
          MACRO_ADDMAG(ACE_HandFlare_Yellow,4);
          MACRO_ADDMAG(Chemlight_Yellow,12);
      };
      class TransportItems {
          MACRO_ADDITEM(ACE_fieldDressing, 40);
          MACRO_ADDITEM(ACE_elasticBandage, 40);
          MACRO_ADDITEM(ACE_packingBandage, 40);
          MACRO_ADDITEM(ACE_quikclot, 40);
          MACRO_ADDITEM(ACE_tourniquet, 8);
          MACRO_ADDITEM(ACE_salineIV_500, 8);
          MACRO_ADDITEM(ACE_plasmaIV_500, 4);
          MACRO_ADDITEM(ACE_bloodIV_500, 4);
          MACRO_ADDITEM(ACE_bloodIV_250, 4);
          MACRO_ADDITEM(ACE_morphine, 10);
          MACRO_ADDITEM(ACE_epinephrine, 10);
          MACRO_ADDITEM(ACE_atropine, 12);
          MACRO_ADDITEM(ACE_surgicalKit, 4);
          MACRO_ADDITEM(ACE_personalAidKit, 9);
          MACRO_ADDITEM(ACE_bodyBag, 20);
          MACRO_ADDITEM(ACE_Splint, 20);
      };
  };
  class CLASS(Box_parachutes): CLASS(Box_Base) {
      scope=2;
      scopeCurator=2;
      displayName="RG Parachutes";
      hiddenSelectionsTextures[] = {QPATHTOF(textures\parachutes.paa),"A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
      transportMaxMagazines=0;
      transportMaxWeapons=0;
      transportMaxItems=0;
      transportMaxBackpacks=100;
      class TransportBackpacks {
          MACRO_ADDBACKPACK(B_Parachute,50);
          MACRO_ADDBACKPACK(ACE_NonSteerableParachute,50);
      };
      class TransportItems {
          MACRO_ADDITEM(ACE_Altimeter,50);
      };
  };
  class CLASS(Box_radios_and_gadgets): CLASS(Box_Base) {
      scope=2;
      scopeCurator=2;
      displayName="RG Radios & Gadgets";
      hiddenSelectionsTextures[] = {QPATHTOF(textures\radios_and_gadgets.paa),"A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
      transportMaxMagazines=10;
      transportMaxWeapons=5;
      transportMaxItems=250;
      class TransportItems {
          MACRO_ADDITEM(ACRE_PRC148,20);
          MACRO_ADDITEM(ACRE_PRC343,24);
          MACRO_ADDITEM(ACRE_PRC152,6);
          MACRO_ADDITEM(ACRE_PRC117F,6);
          MACRO_ADDITEM(ACRE_PRC77,6);
          MACRO_ADDITEM(Laserbatteries,4);
          MACRO_ADDITEM(MineDetector,2);
          MACRO_ADDITEM(Laserdesignator,2);
          MACRO_ADDITEM(Rangefinder,2);
          MACRO_ADDITEM(ACE_Vector,2);
          MACRO_ADDITEM(ACE_Kestrel4500,2);
          MACRO_ADDITEM(ACE_MapTools,2);
          MACRO_ADDITEM(Binocular,4);
          MACRO_ADDITEM(rhsusf_anpvs_15, 12);
          MACRO_ADDITEM(B_UavTerminal,2);
      };
  };
  class CLASS(Box_talon): CLASS(Box_Base) {
      scope=2;
      scopeCurator=2;
      displayName="RG Talon Resupply";
      hiddenSelectionsTextures[] = {QPATHTOF(textures\talon.paa),"A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
      transportMaxMagazines=150;
      transportMaxWeapons=5;
      transportMaxItems=100;
      class TransportMagazines {
          MACRO_ADDMAG(UK3CB_BAF_SmokeShellYellow,12);
          MACRO_ADDMAG(ACE_HandFlare_Yellow,4);
          MACRO_ADDMAG(Chemlight_Yellow,12);
      };
      class TransportItems {
          MACRO_ADDITEM(ACE_elasticBandage,30);
          MACRO_ADDITEM(ACE_packingBandage,30);
          MACRO_ADDITEM(ACE_quikclot,30);
          MACRO_ADDITEM(ACE_tourniquet,18);
          MACRO_ADDITEM(ACE_morphine,15);
      };
      class TransportBackpacks {
          MACRO_ADDBACKPACK(RG_SupportBugout_DS_BackPack,5);
      };
  };
  class CLASS(box_ropes): CLASS(box_weapons_base) {
      scope=2;
      displayName="RG Ropes";
      hiddenSelectionsTextures[] = {QPATHTOF(textures\crate_ropes_ca.paa),"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
      class TransportItems {
          MACRO_ADDITEM(ACE_rope36,8);
          MACRO_ADDITEM(ACE_rope27,8);
          MACRO_ADDITEM(ACE_rope18,8);
      };
  };
  class CLASS(Box_vegas): CLASS(Box_BaseNet_V) {
      scope=2;
      scopeCurator=2;
      displayName="RG Vegas Big Resupply";
      hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\ammobox_co.paa",QPATHTOF(textures\net_vegas.paa)};
      transportMaxMagazines=100;
      transportMaxWeapons=5;
      transportMaxItems=50;
      class TransportWeapons {
          MACRO_ADDWEAPON(rhs_weap_m72a7,4);
          MACRO_ADDWEAPON(rhs_weap_M136,2);
          MACRO_ADDWEAPON(RG_M240B_F,1);
          MACRO_ADDWEAPON(Rhs_weap_maaws,2);
          MACRO_ADDWEAPON(U_B_FullGhillie_SARD, 2);
      };
      class TransportMagazines {
          MACRO_ADDMAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,35);
          MACRO_ADDMAG(rhs_200rnd_556x45_M_SAW,10);
          MACRO_ADDMAG(rhsusf_100Rnd_762x51_m993,15);
          MACRO_ADDMAG(rhsusf_100Rnd_762x51_m62_tracer,5);
          MACRO_ADDMAG(rhsusf_20Rnd_762x51_m118_special_Mag,5);
          MACRO_ADDMAG(ACE_M84,24);
          MACRO_ADDMAG(UK3CB_BAF_SmokeShellBlue,5);
          MACRO_ADDMAG(UK3CB_BAF_SmokeShellRed,5);
          MACRO_ADDMAG(UK3CB_BAF_SmokeShell,15);
          MACRO_ADDMAG(HandGrenade,10);
          MACRO_ADDMAG(DemoCharge_Remote_Mag,8);
          MACRO_ADDMAG(ClaymoreDirectionalMine_Remote_Mag,4);
          MACRO_ADDMAG(SatchelCharge_Remote_Mag,2);
          MACRO_ADDMAG(1Rnd_HE_Grenade_shell,20);
          MACRO_ADDMAG(B_IR_Grenade,25);
          MACRO_ADDMAG(ACE_HuntIR_M203,10);
          MACRO_ADDMAG(rhs_mag_an_m14_th3,10);
          MACRO_ADDMAG(rhs_mag_maaws_HEDP,4);
          MACRO_ADDMAG(rhs_mag_maaws_HEAT,4);
          MACRO_ADDMAG(UK3CB_BAF_762_L42A1_20Rnd,10);
          MACRO_ADDMAG(UK3CB_BAF_338_5Rnd,10);
          MACRO_ADDMAG(rhsusf_mag_17Rnd_9x19_JHP,25);
      };
      class TransportItems {
          MACRO_ADDITEM(ACE_HuntIR_monitor,1);
          MACRO_ADDITEM(ToolKit,4);
          MACRO_ADDITEM(ACE_elasticBandage,40);
          MACRO_ADDITEM(ACE_packingBandage,48);
          MACRO_ADDITEM(ACE_quikclot,48);
          MACRO_ADDITEM(ACE_tourniquet,32);
          MACRO_ADDITEM(ACE_morphine,10);
          MACRO_ADDITEM(ACE_personalAidKit,5);
          MACRO_ADDITEM(ACE_surgicalKit,2);
          MACRO_ADDITEM(ACE_salineIV_500,8);
          MACRO_ADDITEM(ACE_salineIV,2);
          MACRO_ADDITEM(ACE_bodyBag,8);
          MACRO_ADDITEM(ACE_CableTie,30);
          MACRO_ADDITEM(ACE_wirecutter,1);
          MACRO_ADDITEM(ACE_M26_Clacker,1);
          MACRO_ADDITEM(rhs_optic_maaws,2);
          MACRO_ADDITEM(B_UAVTerminal,1);
      };
      class TransportBackpacks {
          MACRO_ADDBACKPACK(ACE_TacticalLadder_Pack,1);
          MACRO_ADDBACKPACK(B_rhsusf_B_BACKPACK,1);
          MACRO_ADDBACKPACK(B_Carryall_mcamo, 2);
      };
  };
  class CLASS(Crate_Night): CLASS(box_specialweapons_base) {
      scope = 2;
      scopeCurator = 2;
      displayName = "RG Night Operations";
      hiddenSelectionsTextures[] = {QPATHTOF(textures\crate_night.paa),"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
      supplyRadius=2;
      mapSize = 1.53;
      icon = "iconCrateWpns";
      transportMaxBackpacks = 10;
      transportMaxMagazines=100;
      transportMaxWeapons=5;
      transportMaxItems=50;
      maximumLoad = 1500;
      transportAmmo = 1000;
      transportRepair = 0;
      transportFuel = 0;
      armor = 200;
      class TransportWeapons
      {};
      class TransportMagazines {
          MACRO_ADDMAG(UGL_FlareGreen_F,20);
          MACRO_ADDMAG(ACE_HandFlare_Green,10);
          MACRO_ADDMAG(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange,16);
          MACRO_ADDMAG(UK3CB_BAF_762_L42A1_20Rnd_T,8);
          MACRO_ADDMAG(ACE_Chemlight_HiOrange,10);
          MACRO_ADDMAG(ACE_Chemlight_HiRed,10);
          MACRO_ADDMAG(ACE_Chemlight_IR,50);
          //MACRO_ADDMAG(UGL_FlareCIR_F,20);
          MACRO_ADDMAG(UGL_FlareRed_F,20);
          MACRO_ADDMAG(UGL_FlareWhite_F,20);
          //MACRO_ADDMAG(UGL_FlareYellow_F,20);
          MACRO_ADDMAG(B_IR_Grenade,50);
          MACRO_ADDMAG(ACE_HandFlare_Red,10);
          MACRO_ADDMAG(ACE_HandFlare_White,10);
          MACRO_ADDMAG(ACE_HandFlare_Yellow,10);
          MACRO_ADDMAG(ACE_FlareTripMine_Mag,12);
      };
      class TransportItems {
          MACRO_ADDITEM(ACE_Chemlight_Shield,10);
          MACRO_ADDITEM(UK3CB_BAF_MaxiKite,4);
      };
  };
  class CLASS(Crate_Vegas): CLASS(box_specialweapons_base) {
      scope = 2;
      scopeCurator = 2;
      displayName="RG Vegas Small Crate";
      hiddenSelectionsTextures[] = {QPATHTOF(textures\crate_vegas.paa),"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
      supplyRadius=2;
      mapSize = 1.53;
      icon = "iconCrateWpns";
      transportMaxBackpacks = 10;
      transportMaxMagazines=100;
      transportMaxWeapons=5;
      transportMaxItems=50;
      maximumLoad = 1500;
      transportAmmo = 1000;
      transportRepair = 0;
      transportFuel = 0;
      armor = 200;
      class TransportMagazines {
          MACRO_ADDMAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,15);
          MACRO_ADDMAG(rhsusf_100Rnd_556x45_soft_pouch,2);
          MACRO_ADDMAG(7Rnd_408_Mag,5);
          MACRO_ADDMAG(rhsusf_20Rnd_762x51_m118_special_Mag,5);
          MACRO_ADDMAG(ACE_M84,6);
          MACRO_ADDMAG(UK3CB_BAF_SmokeShellBlue,2);
          MACRO_ADDMAG(UK3CB_BAF_SmokeShellRed,2);
          MACRO_ADDMAG(UK3CB_BAF_SmokeShell,2);
          MACRO_ADDMAG(HandGrenade,2);
          MACRO_ADDMAG(DemoCharge_Remote_Mag,8);
          MACRO_ADDMAG(B_IR_Grenade,10);
      };
      class TransportItems {
          MACRO_ADDITEM(ACE_elasticBandage,25);
          MACRO_ADDITEM(ACE_packingBandage,25);
          MACRO_ADDITEM(ACE_quikclot,25);
          MACRO_ADDITEM(ACE_tourniquet,20);
          MACRO_ADDITEM(ACE_morphine,5);
      };
  };
  class CLASS(Box_assets): CLASS(Box_Base) {
      scope = 2;
      scopeCurator = 2;
      displayName="RG Mission Assets (empty box)";
      hiddenSelectionsTextures[] = {QPATHTOF(textures\mission_assets.paa),"A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
      transportMaxMagazines=100;
      transportMaxWeapons=100;
      transportMaxItems=250;
  };
};
