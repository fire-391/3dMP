#include "script_component.hpp"

private _projectile = param [6, objNull];

if (isNull _projectile) exitWith {};

private _markerTrace = "MRB_ShellTracker_" + str mrb_shellTrackerID;
INC(mrb_shellTrackerID);

private _marker = createMarker [_markerTrace, getPos _projectile];
_marker setMarkerShape "ICON";
_marker setMarkerType "mil_dot";
_marker setMarkerColor "ColorRed";
_marker setMarkerSize [0.7, 0.7];

[{
	(_this select 0) params [["_projectile", objNull], "_marker"];

	if (isNull _projectile || {!alive _projectile}) exitWith {
		_marker setMarkerText "IP";
		[{deleteMarker _this}, _marker, 120] call CBA_fnc_waitAndExecute;
		[_this select 1] call CBA_fnc_removePerFrameHandler;
	};

	private _pos = getPosATL _projectile;
	_marker setMarkerPos _pos;
	if (_pos select 2 < 100) then {
		_marker setMarkerColor "ColorGrey";
	};
}, 0.5, [_projectile, _marker]] call CBA_fnc_addPerFrameHandler;
