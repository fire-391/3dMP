/* Get all the passed parameters
params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

//We check if there is a object under the cursor or not,
//If the object under cursor is null (nothing was selected), then prompt the user to select object(s) by calling Achilles_fnc_SelectUnits.
//But if the module had been placed upon an object, then return that object surounded by brackets (add it to an array). 
private _selectedObjects = if (isNull _objectUnderCursor) then
{
	["Objects"] call Achilles_fnc_SelectUnits;
}
else
{
	[_objectUnderCursor];
};

//If the selection was canceled, exit the script to prevent any issues and errors.
if (isNil "_selectedObjects") exitWith {};

//If the selection is empty, also exit, but with a message.
//Side note: using isEqualTo [] is faster than count _selectedObjects == 0. So always try to improve performance when ever possible.
if (_selectedObjects isEqualTo []) exitWith 
{
	//This is only from 0.1.0 update and higher! Use old Ares_fnc_ShowZeusMessage and playSound "FD_Start_F" if below that version! Syntax is the same.
	//Show the message to the Curator.
	["No object was selected!"] call Achilles_fnc_showZeusErrorMessage;
};

//If everything went good, then log the variables.
//systemChat format ["Position: %1 and Selected objects: %2", _position, _selectedObjects];
*/

// Start script
#define GET_HC(ID) if (isNil #ID) then {2} else {owner ID}
#define HAS_PLAYER(GRP) ({isPlayer _x} count units GRP > 0)

// Open selection dialog
private _dialogResult = 
[
	"Debug Menu",
	[
		["Selection:", ["Display HC Owner(s)", "Display Player Owners", "All AI Owners", "All AI Groups", "Ares Owner"]]
	]
] call Ares_fnc_ShowChooseDialog;

// If the dialog was closed.
if (_dialogResult isEqualTo []) exitWith{};

// Get the selected data
_dialogResult params ["_s3passedArgument"];

private _allNonEmptyGroups = allGroups select {count (units _x) > 0};

private _msg = switch (_s3passedArgument) do {
    case 0: {
        private _HCOwner = [GET_HC(HC_1), GET_HC(HC_2), GET_HC(HC_3)];
        [_HCOwner, "No Headless Client is connected."] select (_HCOwner isEqualTo [2, 2, 2]);
    };
    case 1: {
        private _playerGroups = _allNonEmptyGroups select {HAS_PLAYER(_x)};
        _playerGroups apply {groupOwner _x};
    };
    case 2: {
        private _AIGroups = _allNonEmptyGroups select {!HAS_PLAYER(_x)};
        _AIGroups apply {groupOwner _x};
    };
    case 3: {
        _allNonEmptyGroups select {!HAS_PLAYER(_x)};
    };
    case 4: {
        if (isNil "aresmod") then {2} else {owner aresmod};
    };
};

if !(_msg isEqualType "") then {
    _msg = str _msg;
};

["Debug: %1", _msg] call Achilles_fnc_showZeusErrorMessage;
systemChat format ["Debug: %1", _msg];