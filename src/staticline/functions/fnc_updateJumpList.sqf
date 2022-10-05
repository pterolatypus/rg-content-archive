#include "script_macros.hpp"
#define JUMPLIST 1386 //hardcoded for now
#define LISTBOX 1500
#define NUM_TEXT 1001

disableSerialization;

//only relevant for player-controlled unit (incl remote control)
private _unit = ACE_player;
private _vehicle = vehicle _unit;

//if I'm not jumpmaster, hide the UI
if (_vehicle getVariable [QGVAR(jumpmaster), objNull] != _unit) exitwith {
	QGVAR(jumplist) cutText ["", "PLAIN"];
};

QGVAR(jumplist) cutRsc [QGVAR(jumplist), "PLAIN"];
private _listbox = uiNamespace getVariable [QGVAR(jumpListBox), controlNull];
lbClear _listbox;

private _count = {
	_listbox lbAdd (name _x);
	true
} count (_vehicle getVariable [QGVAR(hookedunits), []]);

(uiNamespace getVariable [QGVAR(jumpCount), controlNull]) ctrlSetText (str _count);