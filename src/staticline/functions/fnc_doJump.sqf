#include "script_macros.hpp"
params ["_unit", ["_openDelay", (2 + random 1)]];

if (!local _unit) exitwith {};

_unit action ["eject", vehicle _unit];
unassignVehicle _unit;

private _checkTime = CBA_missionTime - (_unit getVariable [QGVAR(lastSelfCheck), -9999]);
private _failChance = linearConversion [GVAR(selfCheckMinTime), GVAR(selfCheckMaxTime), _checkTime, GVAR(minFailureChance), GVAR(maxFailureChance), true];
if (random 1 < _failChance) then {
	_unit setVariable [QGVAR(parachuteFailure), true];
};

// Once the unit is out of the aircraft, turn it to face a random direction and queue parachute opening
[
	{vehicle (_this select 0) != (_this select 1)},
	{
		params ["_unit"];
		private _vel = velocity _unit; // apparently setDir resets velocity, so we save it and re-apply after
		_unit setDir (random 360);
		_unit setVelocity _vel;

		[
			{
				params ["_unit"];
				_unit action ["openparachute", _unit]
			},
			[_unit],
			_openDelay
		] call CBA_fnc_waitAndExecute;
	},
	[_unit, vehicle _unit]
] call CBA_fnc_waitUntilAndExecute;
