#include "script_macros.hpp"
params ["_unit", ["_forceGlobal", false]];

private _units = (vehicle _unit) getVariable [QGVAR(hookedUnits), []];
if !(_unit in _units) exitwith {};

_unit setVariable [QGVAR(lastSelfCheck), CBA_missionTime, _forceGlobal];
