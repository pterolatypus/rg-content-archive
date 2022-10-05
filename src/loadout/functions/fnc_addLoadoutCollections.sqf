#include "script_macros.hpp"
/**
  Adds a list of named loadout collections that can be equipped from an object. Also adds the interaction to take loadouts if not already present.

  Arguments:
  0: Object to add loadouts to <OBJECT>
  1: Collection(s) to add <STRING> or <ARRAY>

  Return: Nothing

  Usage:
  [this, ["Gambler", "Talon"]] call rg_loadout_fnc_addLoadoutCollections;

 */
params ["_object", ["_collections", []]];

if (isNull _object) exitwith {};

if !(_collections isEqualType []) then {
	_collections = [_collections];
};
_collections = _collections select {_x isEqualType ""};

private _oldCollections = _object getVariable [QGVAR(collections), []];
_object setVariable [QGVAR(collections), _oldCollections+_collections];

[_object, 0, ["ACE_MainActions"], GVAR(mainAction)] call ace_interact_menu_fnc_addActionToObject;
