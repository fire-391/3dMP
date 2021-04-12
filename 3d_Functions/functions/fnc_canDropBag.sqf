#include "script_component.hpp"

params ["_front"];

private _backpack = if (_front) then {
    private _holder = GETVAR(ace_player,MRB_chestbag,objNull);
    if (isNull _holder) then {""} else {typeOf firstBackpack _holder}
} else {
    backpack ace_player
};

(
    _backpack != "" &&
    {vehicle ace_player isEqualTo ace_player} &&
    {(_backpack find "milgp_bp_") isEqualTo -1} &&
    {!visibleMap}
)
