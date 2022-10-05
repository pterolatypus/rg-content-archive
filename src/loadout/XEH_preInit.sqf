#include "script_macros.hpp"

#include "XEH_prep.sqf"

#include "initSettings.sqf"

/**
  Sets up variables etc. for loadout system
 */

GVAR(collections) = createHashMap;

GVAR(mainAction) = [
	QGVAR(mainAction),
	"Take Loadout",
	"",
	{}, //statement
	{(count (_this select 0 getVariable [QGVAR(collections), []])) > 0},
	FUNC(getChildActions),
	nil, //args
	nil, //position
	nil, //distance
	nil, //special conditions
	{
    	params ["_target", "_player", "_params", "_actionData"];
		private _collections = _target getVariable [QGVAR(collections), []];
		if ("*" in _collections) then {
			_collections = keys GVAR(collections);
		};
		if (count _collections == 1) then {
			_actionData set [1, format ["Take Loadout - %1", _collections select 0]];
		}
	}
] call ace_interact_menu_fnc_createAction;
