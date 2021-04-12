#include "script_component.hpp"

private _dir = getDir ace_player;
private _posASL = (getPosASL ace_player) vectorAdd [sin _dir, cos _dir, 0];
private _holder = createVehicle ["MRB_BagHolder", _posASL, [], 0, "CAN_COLLIDE"];
_holder setPosASL _posASL;
_holder setDir (_dir + 180);

ace_player action ["DropBag", _holder, backpack ace_player];

[{!(isNull firstBackpack _this)}, {
    [_this, name ace_player] remoteExecCall [QFNC(prepBackpackHolder), 0, true];
}, _holder, 2, {deleteVehicle _this}] call CBA_fnc_waitUntilAndExecute;
