#include "script_macros.hpp"
/**
  Generates actions for each loadout from a named collection

  Arguments:
  0: Target of interaction <OBJECT>
  1: Player performing interaction <OBJECT>
  2: Name of collection <ARRAY>

  Return: List of child actions

  Usage:
  N/A

 */
params ["_object", "_player", "_collection"];

private _loadouts = GVAR(collections) getOrDefault [_collection, []];
_loadouts apply {
	private _action = [
		_x,
		_x,
		"",
		{
			params ["", "_player", "_args"];
			([_player]+_args) call FUNC(setUnitLoadoutFromCollection);
		},
		{true}, //condition
		nil, //insert children code
		[_collection, _x]
	] call ace_interact_menu_fnc_createAction;
	
	[_action, [], _object]
};