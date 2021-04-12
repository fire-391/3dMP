#include "script_component.hpp"

params ["_type"];

private _backpack = backpack ace_player;
private _hasBackpack = _backpack != "";
private _hasChestbag = !(isNull GETVAR(ace_player,MRB_chestbag,objNull));

private _cond = (switch (_type) do {
    case 0 : {_hasBackpack && !_hasChestbag};
    case 1 : {!_hasBackpack && _hasChestbag};
    case 2 : {_hasBackpack && _hasChestbag};
});

(
    _cond &&
    {vehicle ace_player isEqualTo ace_player} &&
    {((_backpack find "milgp_bp_") + (_backpack find "ace_gunbag")) isEqualTo -2} &&
    {!visibleMap}
)
