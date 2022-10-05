params [
    "_unit",
    "_corpse"
];

if (isNull _unit) exitWith {};

if ((secondaryWeaponMagazine _unit) isEqualTo []) then {
    switch (toLower secondaryWeapon _unit) do {
        case "rg_lat_b": {
            _unit addSecondaryWeaponItem "rhs_mag_maaws_HEAT";
        };
    };
};
