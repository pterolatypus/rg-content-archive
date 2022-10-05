#include "script_macros.hpp"
params ["_logic", "_units", "_isActive"];

private _tgt = missionNamespace getVariable ["bis_fnc_curatorObjectPlaced_mouseOver", objNull];

if (_tgt isKindOf "CAManBase") then {
	private _startingLoadout = _unit call FUNC(getUnitLoadout);
	_unit setVariable [QGVAR(startingLoadout), _startingLoadout, true];
};

deleteVehicle _logic;