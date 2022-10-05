#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
	class ADDON {
		ADDONINFO(LHD);
    	VERSION_CONFIG;
		authors[] = {"Pterolatypus"};
		requiredAddons[] = {
			"RG_Core",
			"CUP_WaterVehicles_LHD"
		};
		units[] = {
			QCLASSCOMP(empty),
			QCLASSCOMP(aav),
			QCLASSCOMP(full)
		};
	};
};

#include "CfgVehicles.cpp"
