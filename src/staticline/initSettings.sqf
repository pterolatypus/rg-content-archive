[
	QGVAR(minJumpHeight),
	"SLIDER",
	[LSTRING(setting_minJumpHeight_name), LSTRING(setting_minJumpHeight_tooltip)],
	LSTRING(settings_category),
	[0, 200, 90, 0],
	true,
	{},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(removeOnDisconnect),
	"CHECKBOX",
	[LSTRING(setting_removeOnDisconnect_name), LSTRING(setting_removeOnDisconnect_tooltip)],
	[LSTRING(settings_category)],
	[true],
	true,
	{},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(minFailureChance),
	"SLIDER",
	[LSTRING(setting_minFailureChance_name), LSTRING(setting_minFailureChance_tooltip)],
	[LSTRING(settings_category), LSTRING(settings_subcat_failure)],
	[0, 1, 0, 2],
	true,
	{},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(selfCheckMinTime),
	"SLIDER",
	[LSTRING(setting_selfCheckMinTime_name), LSTRING(setting_selfCheckMinTime_tooltip)],
	[LSTRING(settings_category), LSTRING(settings_subcat_failure)],
	[0, 900, 300, 0],
	true,
	{},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(maxFailureChance),
	"SLIDER",
	[LSTRING(setting_maxFailureChance_name), LSTRING(setting_maxFailureChance_tooltip)],
	[LSTRING(settings_category), LSTRING(settings_subcat_failure)],
	[0, 1, 0.1, 2],
	true,
	{},
	false
] call CBA_fnc_addSetting;

[
	QGVAR(selfCheckMaxTime),
	"SLIDER",
	[LSTRING(setting_selfCheckMaxTime_name), LSTRING(setting_selfCheckMaxTime_tooltip)],
	[LSTRING(settings_category), LSTRING(settings_subcat_failure)],
	[0, 1800, 600, 0],
	true,
	{},
	false
] call CBA_fnc_addSetting;
