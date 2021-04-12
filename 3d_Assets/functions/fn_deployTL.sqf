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

if !("ACE_TacticalLadder_Item" in (backpackItems ACE_player)) exitWith {};

private ["_pos", "_offset", "_ladder","_onFinish", "_onFailure","_args","_unit"];
_caller = _this select 0;

_onFinish = 
{	
	_args = _this select 0;
	_unit = _args select 0;
	
	_unit removeItemFromBackpack "ACE_TacticalLadder_Item";
	_pos = _unit modelToWorld [0,0,0];
	_offset = if ((_unit call CBA_fnc_getUnitAnim select 0) == "prone") then { 1 } else {0.8};
	_pos set [0, (_pos select 0) + (sin (direction _unit) * _offset)];
	_pos set [1, (_pos select 1) + (cos (direction _unit) * _offset)];
	_pos set [2, [_unit] call CBA_fnc_realHeight];

	_ladder = "ACE_TacticalLadder" createVehicle _pos;
	_ladder setPos _pos;
	_ladder setDir (direction _unit);

	_unit reveal _ladder;
};

_onFailure = 
{
	_args = _this select 0;
	_unit = _args select 0; 
	[_unit, "AmovPknlMstpSrasWrflDnon", 1] call ace_common_fnc_doAnimation;
};

[_caller, "AinvPknlMstpSnonWnonDr_medic5", 0] call ace_common_fnc_doAnimation;

[10, [_caller], _onFinish, _onFailure, "Assembling Ladder..."] call ace_common_fnc_progressBar;