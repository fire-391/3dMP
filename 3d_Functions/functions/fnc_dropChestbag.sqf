#include "script_component.hpp"
#define MAGIC_NUM 0.68

params ["_unit"];

[_unit, "PutDown"] call EFUNC(common,doGesture);

[{
    params ["_unit"];
    private _holder = GETVAR(_unit,MRB_chestbag,objNull);
    detach _holder;

    private _dir = getDir _unit;
    private _posASL = (getPosASL _unit) vectorAdd [sin _dir * MAGIC_NUM, cos _dir * MAGIC_NUM, MAGIC_NUM];
    _holder setPosASL _posASL;
    _holder setDir _dir + 180;

    SETVAR(_unit,MRB_chestbag,objNull);
    _unit forceWalk false;

    [_holder, name _unit] remoteExecCall [QFNC(prepBackpackHolder), 0, true];
}, [_unit], MAGIC_NUM] call CBA_fnc_waitAndExecute;
