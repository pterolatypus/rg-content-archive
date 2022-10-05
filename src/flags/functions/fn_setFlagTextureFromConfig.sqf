params ["_entity"];

_config = typeOf _entity;
_class = configFile >> "CfgVehicles" >> _config;
_texturePath = getText (_class >> "flagTexture");

_entity setFlagTexture _texturePath;
