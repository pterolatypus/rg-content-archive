#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
	class ADDON {
		ADDONINFO(Air Vehicles - Darter);
    	VERSION_CONFIG;
		authors[] = {"Pterolatypus"};
		requiredAddons[] = {
			"RG_Core",
			"itc_land_veh_darter"
		};
		units[] = {
			QCLASSCOMP(vegas)
		};
	};
};

#include "CfgVehicles.cpp"
#include "CfgWeapons.cpp"