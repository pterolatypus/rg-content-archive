#include "script_macros.hpp"
params ["_unit", "_vehicle"];

(_vehicle getVariable [QGVAR(jumpmaster), objNull] == _unit)
&& {getPos _vehicle select 2 > GVAR(minJumpHeight)}
&& {!(_vehicle getVariable [QGVAR(hookedUnits), []] isEqualTo [])}