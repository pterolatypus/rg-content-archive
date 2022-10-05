#include "script_macros.hpp"
params ["_unit", "_vehicle"];

(getPos _vehicle select 2 > GVAR(minJumpHeight))
&& {_unit in (_vehicle getVariable [QGVAR(hookedUnits), []])}
