#include "script_macros.hpp"

[QGVAR(hookon), FUNC(hookOnUnit)] call CBA_fnc_addEventHandler;
[QGVAR(unhook), FUNC(unhookUnit)] call CBA_fnc_addEventHandler;
[QGVAR(updateJumplist), FUNC(updateJumplist)] call CBA_fnc_addEventHandler;

[QGVAR(greenlight), {
	params ["_unit", ["_time", CBA_missionTime]];
	[
		{
			if (_this call FUNC(canJump)) then {
				[_this select 0] call FUNC(doJump)
			}
		},
		[_unit, vehicle _unit],
		(_time - CBA_missionTime)
	] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;


["unit", FUNC(updateJumpList)] call CBA_fnc_addPlayerEventHandler;
["vehicle", FUNC(handleChuteFailure)] call CBA_fnc_addPlayerEventHandler;
["loadout", {(_this select 0) setVariable [QGVAR(lastSelfCheck), 0];}] call CBA_fnc_addPlayerEventHandler;



["Plane", "GetOut",
{
	params ["_vehicle", "", "_unit"];
	if (local _vehicle) then {
		[_unit, _vehicle] call FUNC(unhookUnit);
		if (_vehicle getVariable [QGVAR(jumpmaster), objNull] == _unit) then {
			[_vehicle] call FUNC(setJumpmaster);
		};
	};
}] call CBA_fnc_addClassEventHandler;

["Helicopter", "GetOut",
{
	params ["_vehicle", "", "_unit"];
	if (local _vehicle) then {
		[_unit, _vehicle] call FUNC(unhookUnit);
		if (_vehicle getVariable [QGVAR(jumpmaster), objNull] == _unit) then {
			[_vehicle] call FUNC(setJumpmaster);
		};
	};
}] call CBA_fnc_addClassEventHandler;

// When a player disconnects, remove them from the jump list
if (isServer) then {
	addMissionEventHandler ["HandleDisconnect", {
		if (!GVAR(removeOnDisconnect)) exitwith {};
		params ["_unit"];
		private _vehicle = vehicle _unit;
		[QGVAR(unhook), [_unit, _vehicle], _vehicle] call CBA_fnc_targetEvent;
	}]
};