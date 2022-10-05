#include "script_macros.hpp"
params ["_vehicle", ["_unit", objNull]];

private _old = _vehicle getVariable [QGVAR(jumpmaster), objNull];
if (_unit == _old) exitwith {}; 

_vehicle setVariable [QGVAR(jumpmaster), _unit, true];
[QGVAR(updateJumplist), [], _unit] call CBA_fnc_targetEvent;
[QGVAR(updateJumplist), [], _old] call CBA_fnc_targetEvent;