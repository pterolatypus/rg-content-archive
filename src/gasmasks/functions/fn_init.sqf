if (isClass(configFile >> "CfgGlasses" >> "Mask_M40")) exitWith {
	[player] spawn RG_gasmasks_fnc_breathing;
	RG_gasmasks_EVH = player addEventhandler ["Respawn",{[player] spawn RG_gasmasks_fnc_breathing;}];
};