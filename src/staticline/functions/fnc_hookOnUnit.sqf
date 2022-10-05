#include "script_macros.hpp"
params ["_unit", "_vehicle"];

private _list = _vehicle getVariable [QGVAR(hookedUnits), []];

if (_unit in _list) exitwith {};

_list pushBackUnique _unit;
_vehicle setVariable [QGVAR(hookedUnits), _list, true];

private _jumpMaster = _vehicle getVariable [QGVAR(jumpMaster), objNull];
if !(isNull _jumpMaster) then {
	[QGVAR(updateJumplist), [], _jumpMaster] call CBA_fnc_targetEvent;
}
