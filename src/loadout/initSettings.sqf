[
	QGVAR(restoreStartingLoadout),
	"CHECKBOX",
	["Restore Starting Loadout", "Whether to save a unit's starting loadout and restore on respawn. Overridden by other saved loadouts."],
	"RG Loadout",
	true
] call CBA_fnc_addSetting;

[
	QGVAR(restoreBoxLoadout),
	"CHECKBOX",
	["Restore Box Loadout", "Whether to restore the last loadout a unit selected from a box. Overridden by arsenal loadout if enabled."],
	"RG Loadout",
	true
] call CBA_fnc_addSetting;

[
	QGVAR(restoreArsenalLoadout),
	"CHECKBOX",
	["Restore Arsenal Loadout", "Whether to save a unit's loadout when closing the arsenal and restore on respawn."],
	"RG Loadout",
	true
] call CBA_fnc_addSetting;

[
	QGVAR(medicWarning),
	"CHECKBOX",
	["Medic Warning", "Whether to warn the admin if a group has multiple medics."],
	"RG Loadout",
	true
] call CBA_fnc_addSetting;