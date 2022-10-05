#include "script_macros.hpp"
params ["_unit", "_vehicle"];

!(_unit in (_vehicle getVariable [QGVAR(hookedUnits), []]))
&& {(backpack _unit) isKindOf "B_Parachute"}
&& {assignedVehicleRole _unit select 0 in ["cargo", "Turret"]}
