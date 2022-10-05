#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches
{
	class ADDON
	{
		ADDONINFO(Land Vehicles - Medical);
    	VERSION_CONFIG;
		authors[] = {"Pterolatypus"};
		requiredAddons[] = {
			"RG_Core",
			"CUP_TrackedVehicles_AAV"
		};
		units[] = {
			QCLASS(M1123_MED_DS),
			QCLASS(M1123_MED_WD),
			QCLASS(M113_MED_DS),
			QCLASS(M113_MED_WD),
			QCLASS(Landrover_MED_DS),
			QCLASS(Landrover_MED_WD),
			QCLASS(UH60L_med),
			QCLASS(m1230a1_med_d),
			QCLASS(m1230a1_med_wd)
		};
	};
};

#include "CfgVehicles.cpp"
