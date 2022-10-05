#include "script_macros.hpp"
params ["_unit", "_vehicle"];

private _interval = getNumber (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> QGVAR(jumpInterval));
if (_interval <= 0) then {
	_interval = 0.75;
};

private _time = CBA_missionTime;
{
	[QGVAR(greenlight), [_x, _time], _x] call CBA_fnc_targetEvent;
	_time = _time + _interval;
} forEach (_vehicle getVariable [QGVAR(hookedUnits), []]);