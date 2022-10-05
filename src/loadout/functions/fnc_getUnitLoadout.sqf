#include "script_macros.hpp"
/**
  Gets a unit's loadout and other traits

  Arguments:
  0: Unit to read loadout from <OBJECT>

  Return: Unit loadout and traits <ARRAY>

  Usage:
  [this] call rg_loadout_fnc_getUnitLoadout;

 */
params ["_unit"];

private _loadout = getUnitLoadout _unit;
if !(isNil "acre_api_fnc_filterUnitLoadout") then {
  _loadout = [_loadout] call acre_api_fnc_filterUnitLoadout;
};

private _traits = createHashMap;

private _medicLevel = _unit getVariable ["ace_medical_medicClass", parseNumber (_unit getUnitTrait "Medic")];
_traits set ["medicLevel", _medicLevel];

private _engineerLevel = _unit getVariable ["ace_isEngineer", parseNumber (_unit getUnitTrait "Engineer")];
_traits set ["engineerLevel", _engineerLevel];

private _explosiveLevel = _unit getVariable ["ace_isEOD", parseNumber (_unit getUnitTrait "explosiveSpecialist")];
_traits set ["explosiveLevel", _explosiveLevel];

[_loadout, _traits];
