#include "script_macros.hpp"
/**
  Populates interaction menu with actions for each available collection or loadout

  Arguments:
  0: Target of interaction <OBJECT>
  1: Player performing interaction <OBJECT>
  2: Additional params <ARRAY>

  Return: List of child actions

  Usage:
  N/A

 */
params ["_object", "_player", "_args"];

private _collections = _object getVariable [QGVAR(collections), []];

if ("*" in _collections) then {
	_collections = keys GVAR(collections);
};

if (count _collections == 1) exitwith {
	[_object, _player, _collections select 0] call FUNC(getCollectionChildActions);
};

_collections apply {
	private _action = [
		_x,
		_x,
		"",
		{}, //statement
		{true}, //condition
		FUNC(getCollectionChildActions),
		_x
	] call ace_interact_menu_fnc_createAction;
	[_action, [], _object]
};
