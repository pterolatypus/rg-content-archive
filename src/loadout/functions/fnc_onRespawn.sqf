#include "script_macros.hpp"

params ["_unit", "_corpse"];

if !(local _unit) exitwith {};

private _savedLoadout = [];
//variables *should* be copied to the new unit on respawn
if (GVAR(restoreStartingLoadout)) then {
	_savedLoadout = _unit getVariable [QGVAR(startingLoadout), _savedLoadout];
};
if (GVAR(restoreBoxLoadout)) then {
	_savedLoadout = _unit getVariable [QGVAR(boxLoadout), _savedLoadout];
};
if (GVAR(restoreArsenalLoadout)) then {
	_savedLoadout = _unit getVariable [QGVAR(arsenalLoadout), _savedLoadout];
};

if !(_savedLoadout isEqualTo []) then {
	[_unit]+_savedLoadout call FUNC(setUnitLoadout);
}
