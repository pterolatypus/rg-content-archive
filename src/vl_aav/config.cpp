#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches
{
	class ADDON
	{
		ADDONINFO(Land Vehicles - AAV);
    	VERSION_CONFIG;
		authors[] = {"Pterolatypus"};
		requiredAddons[] = {
			"RG_Core",
			"CUP_TrackedVehicles_AAV"
		};
		units[] = {
			QCLASSCOMP(unarmed),
			QCLASSCOMP(gmg)
		};
	};
};

#include "CfgVehicles.cpp"
