/*
 * Author: Rocko, Ruthberg
 * Pick up tactical ladder
 *
 * Arguments:
 * 0: ladder <OBJECT>
 * 1: unit <OBJECT>
 *
 * Return Value:
 * Success?
 *
 * Example:
 * [_ladder, _unit] call ace_tacticalladder_fnc_pickupTL;
 *
 * Public: No
 */

if (!(ACE_player canAddItemToBackpack "ACE_TacticalLadder_Item")) exitWith { false };

private ["_ladder","_onFinish", "_onFailure","_args","_unit"];
_target = _this select 0;
_caller = _this select 1;

_onFinish = 
{
	_args = _this select 0;
	_ladder = _args select 0;
	_unit = _args select 1;
	deleteVehicle _ladder;
	_unit addItemToBackpack "ACE_TacticalLadder_Item";

	true
};

_onFailure = 
{
	_args = _this select 0;
	_ladder = _args select 0;
	_unit = _args select 1;
	[_unit, "AmovPknlMstpSrasWrflDnon", 1] call ace_common_fnc_doAnimation;
};

[_caller, "AinvPknlMstpSnonWnonDr_medic5", 0] call ace_common_fnc_doAnimation;

[10, [_target,_caller], _onFinish, _onFailure, "Disassembling Ladder..."] call ace_common_fnc_progressBar;