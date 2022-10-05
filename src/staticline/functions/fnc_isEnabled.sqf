#include "script_macros.hpp"
params ["_veh"];

private _enabled = _veh getVariable QGVAR(enabled);
if (isNil "_enabled") then {
	_enabled = (GVAR(enabledClasses) findIf {_veh isKindOf _x} >= 0);
	_veh setVariable [QGVAR(enabled), _enabled, true];
};
_enabled