/*
 * Author: Rocko, Ruthberg
 * Deploy tactical ladder
 *
 * Arguments:
 * Nothing
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * call ace_tacticalladder_fnc_deployTL;
 *
 * Public: No
 */

if !("MRB_UAV_Item" in (backpackItems ACE_player)) exitWith {};

private ["_pos", "_offset", "_uav","_onFinish", "_onFailure","_args","_unit"];
_caller = _this select 0;

_onFinish = 
{	
	_args = _this select 0;
	_unit = _args select 0; 
	_unit removeItemFromBackpack "MRB_UAV_Item";
	_pos = _unit modelToWorld [0,0,0];
	_offset = if ((_unit call CBA_fnc_getUnitAnim select 0) == "prone") then { 1 } else {0.8};
	_pos set [0, (_pos select 0) + (sin (direction _unit) * _offset)];
	_pos set [1, (_pos select 1) + (cos (direction _unit) * _offset)];
	_pos set [2, [_unit] call CBA_fnc_realHeight];

	_uav = "B_UAV_01_F" createVehicle _pos;
	createVehicleCrew _uav;
	_uav setPos _pos;
	_uav setDir (direction _unit);

	_unit reveal _uav;
};

_onFailure = 
{
	_args = _this select 0;
	_unit = _args select 0; 
	[_unit, "AmovPknlMstpSrasWrflDnon", 1] call ace_common_fnc_doAnimation;
};

[_caller, "AinvPknlMstpSnonWnonDr_medic5", 0] call ace_common_fnc_doAnimation;

[10, [_caller], _onFinish, _onFailure, "Assembling UAV..."] call ace_common_fnc_progressBar;