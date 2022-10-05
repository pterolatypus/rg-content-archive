#include "script_macros.hpp"
/**
  Sets a unit's equipment and traits from saved data

  Arguments:
  0: Unit to update loadout <OBJECT>
  1: Loadout to set in `setUnitLoadout` format <ARRAY>
  2: Additional traits to apply <HASHMAP>

  Return: Nothing

  Usage:
  [this, getUnitLoadout "B_Soldier_F", createHashMapFromArray [["medicLevel", 2]]] call rg_loadout_fnc_setUnitLoadout;

 */
params ["_unit", "_loadout", "_traits"];

if !(isNil "acre_api_fnc_filterUnitLoadout") then {
  _loadout = [_loadout] call acre_api_fnc_filterUnitLoadout;
};

_unit setUnitLoadout _loadout;

if !(isNil "_traits") then {
    private _medicLevel = _traits getOrDefault ["medicLevel", 0];
    _unit setVariable ["ace_medical_medicClass", _medicLevel, true];
    _unit setUnitTrait ["Medic", _medicLevel>0];

    private _engineerLevel = _traits getOrDefault ["engineerLevel", 0];
    _unit setVariable ["ace_isEngineer", _engineerLevel, true];
    _unit setUnitTrait ["Engineer", _engineerLevel>0];

    private _explosiveLevel = _traits getOrDefault ["explosiveLevel", 0];
    _unit setVariable ["ace_isEOD", _explosiveLevel, true];
};
