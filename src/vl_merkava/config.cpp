#include "component.hpp"
#include "\x\rg\addons\core\script_macros.hpp"

class CfgPatches {
	class ADDON {
		ADDONINFO(Land Vehicles - Merkava);
    	VERSION_CONFIG;
		authors[] = {"Whigital", "Pterolatypus"};
		units[] = {
			QCLASSCOMP(base),
			QCLASSCOMP(desert),
			QCLASSCOMP(snow),
			QCLASSCOMP(woodland)
		};
		requiredAddons[] = {"A3_Data_F_Tank_Loadorder","RG_vl_common","ace_common","ace_trenches","ace_medical","rhsusf_c_weapons","UK3CB_BAF_Weapons"};
		weapons[] = {};
	};
};

#include "CfgEditorSubcategories.cpp"
#include "CfgVehicles.cpp"
