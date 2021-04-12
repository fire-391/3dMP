#include "script_component.hpp"

private _holder = createVehicle ["MRB_BagHolder", getPos ace_player, [], 0, "CAN_COLLIDE"];

ace_player action ["DropBag", _holder, backpack ace_player];

[{!(isNull firstBackpack _this)}, {
    _this attachTo [ace_player, [-0.1, 0.74, -0.3], "pelvis"];
    [_this, 90, 180, 180] call EFUNC(common,setPitchBankYaw);
    ace_player forceWalk true;
    SETPVAR(ace_player,MRB_chestbag,_this);
}, _holder, 2, {deleteVehicle _this}] call CBA_fnc_waitUntilAndExecute;
