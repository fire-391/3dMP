#include "script_component.hpp"

private _holder = GETVAR(ace_player,MRB_chestbag,objNull);

ace_player action ["AddBag", _holder, typeOf firstBackpack _holder];

[{isNull firstBackpack _this}, {
    deleteVehicle _this;
    SETPVAR(ace_player,MRB_chestbag,objNull);
    ace_player forceWalk false;
}, _holder, 2] call CBA_fnc_waitUntilAndExecute;
