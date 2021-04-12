/*
 * Author: Rocko, Ruthberg
 * Pick up tactical uav
 *
 * Arguments:
 * 0: uav <OBJECT>
 * 1: unit <OBJECT>
 *
 * Return Value:
 * Success?
 *
 * Example:
 * [_uav, _unit] call ace_tacticaluav_fnc_pickupTL;
 *
 * Public: No
 */

if ("MRB_UAV_Item" in (backpackItems ACE_player) || !(ACE_player canAddItemToBackpack "MRB_UAV_Item")) exitWith { false };

private ["_uav","_onFinish", "_onFailure","_args","_unit"];
_target = _this select 0;
_caller = _this select 1;

_onFinish = 
{
	_args = _this select 0;
	_uav = _args select 0;
	_unit = _args select 1;
	deleteVehicle _uav;
	_unit addItemToBackpack "MRB_UAV_Item";

	true
};

_onFailure = 
{
	_args = _this select 0;
	_uav = _args select 0;
	_unit = _args select 1;
	[_unit, "AmovPknlMstpSrasWrflDnon", 1] call ace_common_fnc_doAnimation;
};

[_caller, "AinvPknlMstpSnonWnonDr_medic5", 0] call ace_common_fnc_doAnimation;

[10, [_target,_caller], _onFinish, _onFailure, "Disassembling UAV..."] call ace_common_fnc_progressBar;