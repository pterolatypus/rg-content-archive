#include "script_macros.hpp"

if (hasInterface) then {
	["ace_arsenal_displayClosed", {
		ACE_player setVariable [QGVAR(arsenalLoadout), ACE_player call FUNC(getUnitLoadout), true];
	}] call CBA_fnc_addEventHandler;
};

[QGVAR(medicWarning), {
	params ["_unit", "_medics"];
	private _msg = format ["Warning: unit %1 took a medic loadout but its group already has medic(s): %2", name _unit, _medics apply {name _x}];
	if (isServer) then {
		diag_log _msg;
	};
	//host or logged admin
	if (GVAR(medicWarning) && {serverCommandAvailable "#lock"}) then {
		diag_log _msg;
		systemChat _msg;
	};
}] call cba_fnc_addEventHandler;