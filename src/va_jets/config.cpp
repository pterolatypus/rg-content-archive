#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
	class ADDON {
		ADDONINFO(Air Vehicles - Jets);
	    VERSION_CONFIG;
		authors[] = {"Pterolatypus"};
		requiredAddons[] = {
			"RG_Core",
			"FIR_A10C_F",
			"JS_JC_FA18"
		};
		units[] = {
			QCLASS(A10C_F),
			QCLASS(FA18E)
		};
	};
};

#include "CfgVehicles.cpp"
