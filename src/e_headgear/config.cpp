#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
	class ADDON {
		ADDONINFO(Equipment - Headgear);
    	VERSION_CONFIG;
		authors[] = {"Pterolatypus"};
		requiredAddons[] = {
			"RG_Core"
		};
		units[] = {};
	};
};

#include "CfgWeapons.cpp"
