#include "script_component.hpp"

// Get all the passed parameters
params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

// We check if there is a object under the cursor or not,
// If the object under cursor is null (nothing was selected), then prompt the user to select object(s) by calling Achilles_fnc_SelectUnits.
// But if the module had been placed upon an object, then return that object surounded by brackets (add it to an array). 
private _selectedObjects = if (isNull _objectUnderCursor) then
{

}
else
{
	[_objectUnderCursor];
};

// If the selection was canceled, exit the script to prevent any issues and errors.
if (isNil "_selectedObjects") exitWith {};

// If the selection is empty, also exit, but with a message.
// Side note: using isEqualTo [] is faster than count _selectedObjects == 0. So always try to improve performance when ever possible.
if (_selectedObjects isEqualTo []) exitWith 
{
	// This is only from 0.1.0 update and higher! Use old Ares_fnc_ShowZeusMessage and playSound "FD_Start_F" if below that version! Syntax is the same.
	// Show the message to the Curator.
	["No object was selected!"] call Achilles_fnc_showZeusErrorMessage;
};

// If everything went good, then log the variables.
systemChat format ["Position: %1 and Selected objects: %2", _position, _selectedObjects];

//Start script

// Open selection dialog
private _dialogResult =
[
	"Radio Jammer",
	[
		// The last number is optional! If you want the first selection you can remove the number.
		["Distance", ["500","1000","1500","2000","2500","3000","3500"], 1]
	]
] call Ares_fnc_showChooseDialog;

// If the dialog was closed.
if (_dialogResult isEqualTo []) exitWith{};

// Get the selected data
_dialogResult params ["_distance"];

if (!hasInterface) exitWith {};

_distanceArr = [500,1000,1500,2000,2500,3000,3500];
_dist = _distanceArr select _distance;
_vehicle = _objectUnderCursor;

[
	{
		if (isNull _vehicle || {!alive _vehicle}) then 
		{
			SETVAR(player,acre_send_power,1);
			SETVAR(player,acre_receive_power,1);
			[_this select 1] call CBA_fnc_removePerFrameHandler;
		};

		_signalStrength = linearConversion [0, _dist, _vehicle distance player, 0, 1, true]; //converts distance number (ie 500) into decimal number.
		SETVAR(player,acre_send_power,_signalStrength);
		SETVAR(player,acre_receive_power,_signalStrength);
		[AcreCustomSignalFunc] call acre_api_fnc_setCustomSignalFunc;
	}, 								//function to run each frame.
	1, 								//delay in seconds, 0 is each frame.
	[_vehicle, _dist] 				//variables past to function.
] call CBA_fnc_addPerFrameHandler;

//End of script