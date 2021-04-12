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
// Check if selected object(s) have any man and message zeus operator if none are
_selectedMans = [];
{
	if (_x isKindOf "CAMANBase") then {_selectedMans pushBack _x};
} forEach _selectedObjects;
if (_selectedMans isEqualTo []) exitWith {["No units selected"] call Achilles_fnc_showZeusErrorMessage;};

//Check if selected object(s) have any weapons and message zeus operator if none have any
_selectedWeps =[];
{
	if !((weapons _x) isEqualTo []) then {_selectedWeps pushBack _x};
} forEach _selectedMans;
if (_selectedWeps isEqualTo []) exitWith {["No selected units have weapons"] call Achilles_fnc_showZeusErrorMessage;};

// Drop all weapons for all selected viable object(s)
{
	_pos = getPosATL _x;
	_object = _x;
	{
		_object removeWeapon _x;
		_ground = createVehicle ["GroundWeaponHolder", _pos, [], 1, "Can_collide"];
		_ground addWeaponCargoGlobal [_x, 1];
	} forEach (weapons _x);
} forEach _selectedWeps;

//Message zeus operator with changed objects
["Selected objects: %1, Removed all weapons", _selectedWeps] call Achilles_fnc_showZeusErrorMessage;

//End script