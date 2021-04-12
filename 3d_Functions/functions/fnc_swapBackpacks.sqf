#include "script_component.hpp"

private _backpack = backpackContainer ace_player;
private _type = typeOf _backpack;
private _items = itemCargo _backpack;
private _weapons = weaponCargo _backpack;
private _mags = magazinesAmmoCargo _backpack;

private _holder = GETVAR(ace_player,MRB_chestbag,objNull);
ace_player action ["AddBag", _holder, typeOf firstBackpack _holder];

[{isNull firstBackpack (_this select 4)}, {
    params ["_type", "_items", "_weapons", "_mags"];

    private _holder = createVehicle ["MRB_BagHolder", getPos ace_player, [], 0, "CAN_COLLIDE"];
    _holder attachTo [ace_player, [-0.05, 0.8, -0.3], "pelvis"];
    [_holder, 90, 180, 180] call EFUNC(common,setPitchBankYaw);
    SETPVAR(ace_player,MRB_chestbag,_holder);

    _holder addBackpackCargoGlobal [_type, 1];
    private _backpack = firstBackpack _holder;

    {
        _backpack addItemCargoGlobal [_x, 1];
    } forEach _items;

    {
        _backpack addWeaponCargoGlobal [_x, 1];
    } forEach _weapons;

    {
        _backpack addMagazineAmmoCargo [_x select 0, 1, _x select 1];
    } forEach _mags;
}, [_type, _items, _weapons, _mags, _holder], 2] call CBA_fnc_waitUntilAndExecute;
