// Get all the passed parameters
params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

// We check if there is a object under the cursor or not,
// If the object under cursor is null (nothing was selected), then prompt the user to select object(s) by calling Achilles_fnc_SelectUnits.
// But if the module had been placed upon an object, then return that object surounded by brackets (add it to an array). 
private _selectedObjects = if (isNull _objectUnderCursor) then
{
	["Objects"] call Achilles_fnc_SelectUnits;
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

// Start script
// Check if selected object(s) have engine and message zeus operator if no object has engine
private _cnt = 0;
{
	_count = _x countType _selectedObjects; 
	_cnt = _cnt + _count;
} forEach ["Air", "Car", "Ship"];

if (_cnt < 1) exitWith 
{
   ["No vehicle(s) selected"] call Achilles_fnc_showZeusErrorMessage;
};

// Remove any none engine objects from selection
_selectedEngines = [];
{
	if (_x isKindOf "Air") then {_selectedEngines pushBack _x};
	if (_x isKindOf "Car") then {_selectedEngines pushBack _x};
	if (_x isKindOf "Ship") then {_selectedEngines pushBack _x};
} forEach _selectedObjects;

// Open selection dialog
private _dialogResult =
[
	"Engine",
	[
		// The last number is optional! If you want the first selection you can remove the number.
		["Mode", ["On","Off"], 1]
	]
] call Ares_fnc_showChooseDialog;

// If the dialog was closed.
if (_dialogResult isEqualTo []) exitWith{};

// Get the selected data
_dialogResult params ["_Mode"];

//Change selected data to text for systemChat
_ModeText = ["On", "Off"] select _Mode;

// Output the data to the chat.
systemChat format ["Engine mode: %1", _ModeText];

// Convert dialog selection number to useable parameter
_state = [true, false] select _Mode;

// Change engine state for selected object(s)
{
	_x engineOn _state;
} forEach _selectedEngines;

// Message zeus operator with changed objects
["Selected objects: %1, Engine turned %2", _selectedEngines,_ModeText] call Achilles_fnc_showZeusErrorMessage;

//End script