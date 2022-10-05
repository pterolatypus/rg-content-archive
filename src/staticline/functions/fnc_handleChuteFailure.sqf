#include "script_macros.hpp"
params ["_unit", "_newVehicle"];

if !(_unit getVariable [QGVAR(parachuteFailure), false] && {_newVehicle isKindOf "ParachuteBase"}) exitwith {};

_unit setVariable [QGVAR(parachuteFailure), false];
[
	ace_parachute_fnc_cutParachute,
	_this,
	(2 + random 1)
] call CBA_fnc_waitAndExecute;
