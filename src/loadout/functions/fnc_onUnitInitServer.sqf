#include "script_macros.hpp"

params ["_unit"];

// 3den attributes are only defined on the server
if (!isServer) exitWith {};

switch (_unit getVariable [QGVAR(attr_action), 0]) do {
	case 1: { //save
		private _startingLoadout = _unit call FUNC(getUnitLoadout);
		
		private _saveLoadoutName = _unit getVariable [QGVAR(attr_loadoutName), ""];
		if (_saveLoadoutName == "") then {
			_saveLoadoutName = getText ((configOf _unit) >> "displayName");
		};

		private _saveLoadoutCollection = _unit getVariable [QGVAR(attr_collectionName), ""];
		if (_saveLoadoutCollection == "") then {
			_saveLoadoutCollection = groupId group _unit;
		};

		[_unit, _saveLoadoutCollection, _saveLoadoutName, true] call FUNC(saveLoadoutToCollection);

		if (_unit getVariable [QGVAR(attr_deleteUnit), false] && {!(isPlayer _unit)}) then {
			deleteVehicle _unit;
		} else {
			_unit setVariable [QGVAR(startingLoadout), _startingLoadout, true];
			[_unit]+_startingLoadout call FUNC(setUnitLoadout);
		};
	};
	case 2: { //load
		private _loadoutName = _unit getVariable [QGVAR(attr_loadoutName), ""];
		if (_loadoutName == "") then {
			_saveLoadoutName = getText ((configOf _unit) >> "displayName");
		};

		private _loadoutCollection = _unit getVariable [QGVAR(attr_collectionName), ""];
		if (_loadoutCollection == "") then {
			_loadoutCollection = groupId group _unit;
		};

		// wait until the desired loadout is actually initialised
		[{
			params ["", "_loadoutCollection", "_loadoutName"];
			private _collection = GVAR(collections) getOrDefault [_loadoutCollection, createHashmap];
			_loadoutName in (keys _collection);
		},
		{
			params ["_unit", "_collection", "_loadout"];
			private _startingLoadout = [_collection, _loadout] call FUNC(getLoadoutFromCollection);
			_unit setVariable [QGVAR(startingLoadout), _startingLoadout, true];
			_this call FUNC(setUnitLoadoutFromCollection);
		},
		[_unit, _loadoutCollection, _loadoutName], 5] call CBA_fnc_waitUntilAndExecute;
	};
	default {
		private _startingLoadout = _unit call FUNC(getUnitLoadout);
		_unit setVariable [QGVAR(startingLoadout), _startingLoadout, true];
		[_unit]+_startingLoadout call FUNC(setUnitLoadout);
	};
};
