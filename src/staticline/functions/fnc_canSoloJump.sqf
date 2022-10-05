#include "script_macros.hpp"
params ["_unit", "_vehicle"];

isNull (_vehicle getVariable [QGVAR(jumpMaster), objNull])
&& {[_unit, _vehicle] call FUNC(canJump)}
