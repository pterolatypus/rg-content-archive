#include "script_macros.hpp"
/**
  Sets a unit's equipment and traits from a saved loadout

  Arguments:
  0: Unit to update loadout <OBJECT>
  1: Name of collection to get loadout from <STRING>
  2: Name of loadout to assign <STRING>

  Return: Nothing

  Usage:
  [this,"Gambler","LAT"] call rg_loadout_fnc_setUnitLoadoutFromCollection;

 */
params ["_unit", "_collection", "_loadoutName"];

private _loadoutData = [_collection, _loadoutName] call FUNC(getLoadoutFromCollection);
_loadoutData params ["_loadout", "_traits"];

if ((_traits getOrDefault ["medicLevel", 0]) > 0) then {
    private _otherMedics = ((units _unit) select {
        (_x getVariable ["ace_medical_medicClass", 0] > 0) || {_x getUnitTrait "Medic"}
    }) - [_unit];
    if (count _otherMedics > 0) then {
        [QGVAR(medicWarning), [_unit, _otherMedics]] call cba_fnc_globalEvent;
    };
};

_unit setVariable [QGVAR(boxLoadout), [_loadout, _traits], true];
[_unit, _loadout, _traits] call FUNC(setUnitLoadout);
