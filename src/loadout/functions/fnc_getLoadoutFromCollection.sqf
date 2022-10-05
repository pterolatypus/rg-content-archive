#include "script_macros.hpp"
params ["_collectionName", "_loadoutName"];

private _collections = GVAR(collections);
if (isNil "_collections") exitwith {diag_log "WARNING: rg_loadout_Collections not defined - this is a bug"};
private _thisCollection = _collections get _collectionName;
if (isNil "_thisCollection") exitwith {diag_log format ["Tried to query unknown loadout collection: %1", _collectionName]};

private _loadoutData = _thisCollection get _loadoutName;
if isNil ("_loadoutData") exitwith {diag_log format ["Tried to fetch unknown loadout: %1 from collection %2", _loadoutName, _collectionName]};

_loadoutData //return
