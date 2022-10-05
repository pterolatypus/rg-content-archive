#include "script_macros.hpp"
/**
  Saves a unit's loadout and other traits to a collection that can be added to loadout crates

  Arguments:
  0: Unit to read loadout from <OBJECT>
  1: Name of collection to add loadout to <STRING>
  2: Name to assign to loadout <STRING>
  3: Whether to update globally <BOOLEAN> (default: false)

  Return: Nothing

  Usage:
  [this,"Gambler","LAT"] call rg_loadout_fnc_saveLoadoutToCollection;

 */
params ["_unit", "_collection", "_name", ["_global", false]];

private _collections = missionNamespace getVariable [QGVAR(collections), createHashMap];

private _thisCollection = _collections getOrDefault [_collection, createHashMap];

private _loadoutData = [_unit] call FUNC(getUnitLoadout);

_thisCollection set [_name, _loadoutData];
_collections set [_collection, _thisCollection];

if (_global) then {missionNamespace setVariable [QGVAR(collections), _collections, true]};
