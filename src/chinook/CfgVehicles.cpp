class CfgVehicles {
  class CUP_B_MH47E_USA;
  class CLASSCOMP(mh47e): CUP_B_MH47E_USA {
    scope = 2;
    scopecurator = 2;
    displayName = "MH-47E";
    faction = QCLASS(TaskForce);
    editorSubcategory = QCLASS(VEHICLES_CH47);
    crew = QCLASS(SupportHeli_MTP);
		hiddenSelections[] = {"MH47EFlag"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\common\flag_rg.paa)};
    ace_fastroping_enabled = 1;
    ace_fastroping_ropeOrigins[] = {
      {-0.55,-6.9,-0.3},
      {0.8,-6.9,-0.3}
    };
    ace_fastroping_onPrepare = QFUNC(onPrepareRopes);
    ace_fastroping_onCut = QFUNC(onCutRopes);
    class TransportBackpacks {
      MACRO_ADDBACKPACK(B_Parachute, 4);
    };
    class TransportItems {
      MACRO_ADDITEM(FirstAidKit, 28);
      MACRO_ADDITEM(Medikit, 1);
      MACRO_ADDITEM(Toolkit, 1);
    };
  };

  class RHS_CH_47F;
  class CLASSCOMP(ch47f): RHS_CH_47F {
    scope = 2;
    scopecurator = 2;
    displayName = "CH-47F";
    faction = QCLASS(TaskForce);
    editorSubcategory = QCLASS(VEHICLES_CH47);
    hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[] = {
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa",
			QPATHTOF(data\common\ch47f_branding_ca.paa),
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"
		};
  };
  class RHS_CH_47F_light;
  class CLASSCOMP(ch47f_d): CLASSCOMP(ch47f) {
    scope = 2;
    scopecurator = 2;
    displayName = "CH-47F (Desert)";
    faction = QCLASS(TaskForce);
    editorSubcategory = QCLASS(VEHICLES_CH47);
    hiddenSelections[] = {
      "camo1",
      "camo2",
			"camo3",
      "camo4"
		};
		hiddenSelectionsTextures[] = {
      "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_light_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_light_co.paa",
			QPATHTOF(data\common\ch47f_branding_ca.paa),
			"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_light_mlod_co.paa"
		};
  };
};
