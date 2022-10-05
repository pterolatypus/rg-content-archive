#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
	class ADDON {
		ADDONINFO(Loadout Framework);
    	VERSION_CONFIG;
		authors[] = {"Pterolatypus"};
		requiredAddons[] = {
			"RG_Core",
            "cba_events",
            "ace_interact_menu"
		};
		units[] = {};
	};
};

#include "CfgEventHandlers.cpp"
#include "Cfg3DEN.cpp"