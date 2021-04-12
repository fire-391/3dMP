/*
 * Author: Ghost, ACE3
 * Prepares necessary variables.
 *
 * Arguments:
 * 0: Objects <ARRAY>
 * 1: Action Names <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 *
 * Public: Yes
 */

// Exit on Headless Client
if (!hasInterface && !isDedicated) exitWith {hint "NO INTERFACE"};

params [["_logic", objNull, [objNull]], "_units", "_activated"];

if !(_activated) exitWith {hint "CANCELED"};
if (isNull _logic) exitWith {};

// Extract variables from logic
private _object = [_logic getVariable ["object", ""], true, true] call ace_common_fnc_parseList;
private _zone = [_logic getVariable ["zone", ""], true, true] call ace_common_fnc_parseList;
private _menu = [_logic getVariable ["menu", ""]];

// Objects synced to the module
{
	if ((typeOf _x) == "Land_HelipadEmpty_F")
	then {_zone = _x}
	else {_object = _x};
    nil
} count (synchronizedObjects _logic);

_object params ["_object"];
_zone params ["_zone"];
_menu params ["_menu"];

//add action to object
switch (_menu) do {
    case 0: {_object addAction ["Open Air Spawn Menu", MRB_fnc_spawnMenu, [_menu,_zone], 6, false, true, "", "true", 4, false,""];};
    case 1: {_object addAction ["Open Ground Spawn Menu", MRB_fnc_spawnMenu, [_menu,_zone], 6, false, true, "", "true", 4, false,""];};
    case 2: {_object addAction ["Open Helicopter Spawn Menu", MRB_fnc_spawnMenu, [_menu,_zone], 6, false, true, "", "true", 4, false,""];};
    case 3: {_object addAction ["Open Support Spawn Menu", MRB_fnc_spawnMenu, [_menu,_zone], 6, false, true, "", "true", 4, false,""];};
};
