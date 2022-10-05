class CfgWeapons {
  class HeadgearItem;
  class H_HelmetB;
  class H_HelmetB_light;
  class H_HelmetSpecB;
  class H_Booniehat_mcamo;
  class H_CrewHelmetHeli_B;
  class H_Beret_02;
  class rhsusf_cvc_ess;
  class rhsusf_cvc_helmet;
  class H_PilotHelmetFighter_B;
  class H_PilotHelmetHeli_B;
  class rhsusf_cvc_green_ess;
  class rhsusf_cvc_green_helmet;
  class CLASS(HelmetHeli): H_PilotHelmetHeli_B {
    displayName="[RG] Heli Helmet";
    RG_Slingable_helmet=1;
  };
  class CLASS(HelmetJet): H_PilotHelmetFighter_B {
    displayName="[RG] Jet Helmet";
    RG_Slingable_helmet=1;
  };
  class CLASS(HelmetCrew_ds): rhsusf_cvc_helmet {
    displayName="[RG] Vehicle Crew Helmet";
    RG_Slingable_helmet=1;
  };
  class CLASS(HelmetCom_ds): rhsusf_cvc_ess {
    displayName="[RG] Vehicle Commander Helmet";
    RG_Slingable_helmet=1;
  };
  class CLASS(HelmetCrew_wd): rhsusf_cvc_green_helmet {
    displayName="[RG] Vehicle Crew Helmet";
    RG_Slingable_helmet=1;
  };
  class CLASS(HelmetCom_wd): rhsusf_cvc_green_ess {
    displayName="[RG] Vehicle Commander Helmet";
    RG_Slingable_helmet=1;
  };
  class CLASS(HelmetB_SN): H_HelmetB {
    author = AUTHOR;
    displayName="[RG] Helmet Winter ECH";
    hiddenSelections[]= {
      "camo"
    };
    hiddenSelectionsTextures[]= {
      QPATHTOF(data\textures\equip1_sn_co.paa)
    };
    RG_Slingable_helmet=1;
  };
  class CLASS(HelmetB_Light_SN): H_HelmetB_light {
    author = AUTHOR;
    displayName="[RG] Helmet Winter ECH Light";
    hiddenSelections[]= {
      "camo"
    };
    hiddenSelectionsTextures[]= {
      QPATHTOF(data\textures\equip1_sn_co.paa)
    };
    RG_Slingable_helmet=1;
  };
  class CLASS(HelmetB_SF_SN): H_HelmetSpecB {
    author = AUTHOR;
    displayName="[RG] Helmet Winter ECH Gear";
    hiddenSelections[]= {
      "camo"
    };
    hiddenSelectionsTextures[]= {
      QPATHTOF(data\textures\equip1_sn_co.paa)
    };
    RG_Slingable_helmet=1;
  };
  class CLASS(Booniehat_SN): H_Booniehat_mcamo {
    author = AUTHOR;
    displayName="[RG] Booniehat Winter";
    hiddenSelections[] = {
      "camo"
    };
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\booniehat_sn_co.paa)
    };
  };
  class CLASS(CrewHelmet_Base): H_CrewHelmetHeli_B {
    scope = 1;
    author = AUTHOR;
    RG_Slingable_helmet=1;
  };
  class CLASS(Talon_Helmet_Skull): CLASS(CrewHelmet_Base) {
    scope=2;
    displayName="[RG] Helmet Crew";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\RG_Talon_Helmet_Skull_co.paa)
    };
  };
  class CLASS(Talon_Helmet_Demon): CLASS(CrewHelmet_Base) {
    scope=2;
    displayName="[RG] Helmet Crew Demon";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\helmet_demn_co.paa)
    };
  };
  class CLASS(Talon_Helmet_Knight): CLASS(CrewHelmet_Base) {
    scope=2;
    displayName="[RG] Helmet Crew Knight";
    hiddenSelectionsTextures[]= {
      QPATHTOF(data\textures\helmet_kngt_co.paa)
    };
  };
  class CLASS(Talon_Helmet_Shark): CLASS(CrewHelmet_Base) {
    scope=2;
    displayName="[RG] Helmet Crew Shark";
    hiddenSelectionsTextures[]= {
      QPATHTOF(data\textures\helmet_shrk_co.paa)
    };
  };
  class CLASS(Talon_Helmet_Black): CLASS(CrewHelmet_Base) {
    scope=2;
    displayName="[RG] Helmet Crew Skull";
    hiddenSelectionsTextures[]= {
      QPATHTOF(data\textures\helmet_heli_co.paa)
    };
  };
  class CLASS(Beret_Base): H_Beret_02 {
    scope=0;
    weaponPoolAvailable=1;
    displayName="[RG] Beret Base";
    author = AUTHOR;
    picture="\A3\characters_f_epb\BLUFOR\Data\UI\icon_h_beret02_ca.paa";
    hiddenSelections[] = {
      "camo"
    };
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\highroller.paa)
    };
    RG_Secondary_headgear=1;
  };
  class CLASS(Beret_highroller): CLASS(Beret_Base) {
    scope=2;
    displayName="[RG] Beret Highroller";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\highroller.paa)
    };
  };
  class CLASS(Beret_highroller_ltc): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Highroller LtCol";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\highroller-ltcol.paa)
    };
  };
  class CLASS(Beret_highroller_maj): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Highroller Maj";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\highroller-maj.paa)
    };
  };
  class CLASS(Beret_highroller_cpt): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Highroller Cpt";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\highroller-cpt.paa)
    };
  };
  class CLASS(Beret_highroller_csm): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Highroller CSM";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\highroller-csm.paa)
    };
  };
  class CLASS(Beret_highroller_col): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Highroller Col";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\highroller-col.paa)
    };
  };
  class CLASS(Beret_gambler): CLASS(Beret_Base) {
    scope=2;
    displayName="[RG] Beret Gambler";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\gambler.paa)
    };
  };
  class CLASS(Beret_gambler_Sgt): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Gambler Sgt";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\gambler-sgt.paa)
    };
  };
  class CLASS(Beret_gambler_CSM): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Gambler CSM";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\gambler-csm.paa)
    };
  };
  class CLASS(Beret_gambler_2Lt): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Gambler 2Lt";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\gambler-2lt.paa)
    };
  };
  class CLASS(Beret_gambler_1Lt): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Gambler 1Lt";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\gambler-1lt.paa)
    };
  };
  class CLASS(Beret_gambler_Cpt): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Gambler Cpt";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\gambler-cpt.paa)
    };
  };
  class CLASS(Beret_talon): CLASS(Beret_Base) {
    scope=2;
    displayName="[RG] Beret Talon";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\talon.paa)
    };
  };
  class CLASS(Beret_talon_ssg): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Talon Ssg";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\talon-ssg.paa)
    };
  };
  class CLASS(Beret_vegas): CLASS(Beret_Base) {
    scope=2;
    displayName="[RG] Beret Vegas";
    hiddenSelectionsTextures[]= {
      QPATHTOF(data\textures\vegas.paa)
    };
  };
  class CLASS(Beret_vegas_ssg): CLASS(Beret_Base) {
    scope=1;
    displayName="[RG] Beret Vegas Ssg";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\vegas-ssg.paa)
    };
  };
  class CLASS(Beret_recruit): CLASS(Beret_Base) {
    scope=2;
    displayName="[RG] Beret";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\recruit.paa)
    };
  };
  class CLASS(Beret_medic): CLASS(Beret_Base) {
    scope=2;
    displayName="[RG] Beret Medic";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\medic.paa)
    };
  };
  class CLASS(Beret_shame): CLASS(Beret_Base) {
    scope=2;
    displayName="[RG] Beret of Shame";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\shame.paa)
    };
  };
  class CLASS(Beret_ares): CLASS(Beret_Base) {
    scope=2;
    displayName="[RG] Beret ARES";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\ares.paa)
    };
  };
  class CLASS(Beret_ares2): CLASS(Beret_Base) {
    scope=2;
    displayName="[RG] Beret ARES 2";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\ares2.paa)
    };
  };
  class CLASS(Beret_rangemaster): CLASS(Beret_Base) {
    scope=2;
    displayName="[RG] Beret Rangemaster";
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\rangemaster.paa)
    };
  };
};
