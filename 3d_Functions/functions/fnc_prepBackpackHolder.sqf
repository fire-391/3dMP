#include "script_component.hpp"
#define ADDON ace_interact_menu

params ["_holder", "_name"];

if (!hasInterface || {isNull _holder}) exitWith {};

SETVAR(_holder,MRB_backpackContainer,format [ARR_2("%1's Backpack",_name)]);
[_holder] call FNC(lockBackpackHolder);

private _takeAction = [
    "MRB_takeBagAction", format ["Take %1's Backpack", _name],
    "\3d_Functions\UI\backpack_take.paa",
    {
        params ["_holder"];
        _holder enableSimulation true;
        ace_player action ["AddBag", _holder, typeOf firstBackpack _holder];
        [{isNull firstBackpack _this}, {deleteVehicle _this}, _holder, 2] call CBA_fnc_waitUntilAndExecute;
    },
    {backpack ace_player isEqualTo ""}, nil, [_holder], nil, 5
] call FUNC(createAction);

[_holder, 0, ["ACE_MainActions"], _takeAction] call FUNC(addActionToObject);

private _openAction = [
    "MRB_openBagAction", format ["Open %1's Backpack", _name],
    "\3d_Functions\UI\backpack_open.paa",
    {
        params ["_holder"];
        _holder enableSimulation true;
        _holder removeAllEventHandlers "ContainerOpened";
        ace_player action ["Gear", firstBackpack _holder];
        _holder addEventHandler ["ContainerClosed", FNC(lockBackpackHolder)];
    },
    {true}, nil, [_holder], nil, 5
] call FUNC(createAction);

[_holder, 0, ["ACE_MainActions"], _openAction] call FUNC(addActionToObject);
