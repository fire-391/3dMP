#include "script_component.hpp"

params ["_hide"];

private _holder = GETVAR(ace_player,MRB_chestbag,objNull);
if (!isNull _holder) then {
    [_holder, _hide] remoteExec ["hideObjectGlobal", 2];
};
