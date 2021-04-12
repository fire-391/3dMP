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
private _objects = [_logic getVariable ["Objects", ""], true, true] call ace_common_fnc_parseList;

// Objects synced to the module
{
    _objects pushBack _x;
    nil
} count (synchronizedObjects _logic);

if (_objects isEqualTo []) exitWith {
    Hint "Teleporter Objects field must NOT be empty!";
};

// Prepare with actions
{
	_newMarker = _x;
	{
		private _name = format ["Teleport to %1", (str _x)];
		_newMarker addAction
		[
			_name,
			{
				private _teleportTarget = _this select 3;
				titleText ["You are being teleported", "BLACK", 1];  sleep 1; titleFadeOut 2;
				player setPosATL (getPosATL _teleportTarget);
			}, _x
		];
	} forEach ((_objects) select {_x != _newMarker});
} forEach _objects;
