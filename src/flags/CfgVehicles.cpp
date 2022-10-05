class CBA_Extended_EventHandlers_base;
class CfgVehicles {
    class FlagCarrier;
    class CLASS(Flag_F): FlagCarrier {
    	author = "Reality Gaming";
    	scope = 2;
    	scopeCurator = 2;
    	editorCategory = "RG_CAT_Taskforce";
        editorSubcategory = "RG_SCAT_FLAGS";
    	displayName = "Flag Reality Gaming";
  		flagTexture = QPATHTOF(textures\flag_rg.paa);
		class EventHandlers {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };
    };
    class CLASS(Flag_G_F): CLASS(Flag_F) {
    	displayName = "Flag RG Gambler";
  		flagTexture = QPATHTOF(textures\flag_gambler.paa);
    };
    class CLASS(Flag_T_F): CLASS(Flag_F) {
    	displayName = "Flag RG Talon";
  		flagTexture = QPATHTOF(textures\flag_talon.paa);
    };
    class CLASS(Flag_V_F): CLASS(Flag_F) {
    	displayName = "Flag RG Vegas";
  		flagTexture = QPATHTOF(textures\flag_vegas.paa);
    };
    class CLASS(Flag_H_F): CLASS(Flag_F) {
    	displayName = "Flag RG Highroller";
  		flagTexture = QPATHTOF(textures\flag_hr.paa);
    };
    class CLASS(Flag_C_F): CLASS(Flag_F) {
    	displayName = "Flag RG Gambler Command";
  		flagTexture = QPATHTOF(textures\flag_command.paa);
    };
};
