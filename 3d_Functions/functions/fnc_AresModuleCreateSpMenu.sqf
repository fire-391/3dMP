disableSerialization;
// Get all the passed parameters
params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

// We check if there is a object under the cursor or not
private _selectedObjects = _objectUnderCursor;

// If the selection was canceled, exit the script to prevent any issues and errors.
if (isNil "_selectedObjects") exitWith 
{
	// This is only from 0.1.0 update and higher! Use old Ares_fnc_ShowZeusMessage and playSound "FD_Start_F" if below that version! Syntax is the same.
	// Show the message to the Curator.
	["No object was selected!"] call Achilles_fnc_showZeusErrorMessage;
};

// Get the UI control
_allSzsUnsorted = allMissionObjects "Ares_Module_Create_Spawn_Zone";
if (count _allSzsUnsorted == 0) exitWith {["No Spawn Zone Created Yet"] call Ares_fnc_ShowZeusMessage; playSound "FD_Start_F"};
_allSzs = [_allSzsUnsorted, [], { _x getVariable ["SortOrder", 0]; }, "ASCEND"] call BIS_fnc_sortBy;
_SzOptions = [];
{
	_SzOptions pushBack (name _x);
} forEach _allSzs;

// Show the user the dialog
_dialogResult = 
[
	"Spawn Vehicle Menu",
	[
		["Type", ["Air", "Ground", "Helicopter", "Support"]],
		["Spawn Zone", _SzOptions]
	]
] call Ares_fnc_ShowChooseDialog;

if (_dialogResult isEqualTo []) exitWith {};

//Get dialog results
_dialogResult params ["_type","_SzC"];

_Sz = _allSzs select _SzC;

switch (_type) do {
    case 0: {[_selectedObjects,["Open Air Spawn Menu", MRB_fnc_spawnMenu, [_type,_Sz], 6, false, true, "", "true", 4, false,""]] remoteExec ["addAction", 0, true];};
    case 1: {[_selectedObjects,["Open Ground Spawn Menu", MRB_fnc_spawnMenu, [_type,_Sz], 6, false, true, "", "true", 4, false,""]] remoteExec ["addAction", 0, true];};
    case 2: {[_selectedObjects,["Open Helicopter Spawn Menu", MRB_fnc_spawnMenu, [_type,_Sz], 6, false, true, "", "true", 4, false,""]] remoteExec ["addAction", 0, true];};
    case 3: {[_selectedObjects,["Open Support Spawn Menu", MRB_fnc_spawnMenu, [_type,_Sz], 6, false, true, "", "true", 4, false,""]] remoteExec ["addAction", 0, true];};
};
