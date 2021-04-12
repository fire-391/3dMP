#include "script_component.hpp"

(_this select 3) params ["_type", "_helipad"];

private _title = switch (_type) do {
    case 0: {"CJSOAC FIXED WING SPAWN MENU"};
    case 1: {"GROUND VEHICLE SPAWN MENU"};
    case 2: {"CJSOAC ROTARY SPAWN MENU"};
    case 3: {"SUPPORT VEHICLE SPAWN MENU"};
};

private _list = _type call FNC(spawnList);

private _dataLinkOptions = _list apply {_x param [2, [false, false, false]]}; //applies data link variable settings from fnc_spawnList

[_title, _list, FNC(vehicleSpawn), [_helipad, _dataLinkOptions], "SELECT"] call FNC(listDialog);
