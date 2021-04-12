#include "\achilles\modules_f_ares\module_header.inc.sqf"

if (isNil "MRB_SpawnZoneCount") then
{
	MRB_SpawnZoneCount = 0;
};

_deleteModuleOnExit = false;

_dialogResult = 
[
	"Create Spawn Zone",
	[
		["Zone Name", "", "", true]
	]
] call Ares_fnc_showChooseDialog;

if (_dialogResult isEqualTo []) exitWith {_deleteModuleOnExit = true};

_dialogResult params ["_target_name"];
_logic setName _target_name;
_logic setVariable ["SortOrder", MRB_SpawnZoneCount];

[objNull, format ["Created Spawn Zone '%1'", _target_name]] call bis_fnc_showCuratorFeedbackMessage;

MRB_SpawnZoneCount = MRB_SpawnZoneCount + 1;
publicVariable "MRB_SpawnZoneCount";

// create a LZ object for AI
_h_pad = "Land_HelipadEmpty_F" createVehicle position _logic;
_h_pad attachTo [_logic,[0,0,0]];
[_logic, _h_pad] spawn {waitUntil {sleep 10; isNull (_this select 0)}; deleteVehicle (_this select 1);};

#include "\achilles\modules_f_ares\module_footer.inc.sqf"