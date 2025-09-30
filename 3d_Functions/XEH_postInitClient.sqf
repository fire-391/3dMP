#include "script_component.hpp"

private _insigniaMenuAction = [
    "MRB_InsigniaAction",
    "Insignia Menu",
    ["a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\insignia_ca.paa", "#DD00DD"],
    FNC(insigniaMenu),
    {true},
    nil,
    nil,
    nil,
    8
] call EFUNC(interact_menu,createAction);

["MRB_Arsenal_Crate", 0, ["ACE_MainActions"], _insigniaMenuAction, true] call EFUNC(interact_menu,addActionToClass);

if (is3DEN) then {
    player setVariable ["mrb_initialCamouflageCoef", player getUnitTrait "camouflageCoef"];
    [{
        private _initialCoef = player getVariable "mrb_initialCamouflageCoef";
        player setUnitTrait ["camouflageCoef", _initialCoef * ([0.5, 1] select ((player nearObjects ["Str_WeedBrown_Tall", 1.5]) isEqualTo []))];
    }, 0.1] call CBA_fnc_addPerFrameHandler;
};

if (hasInterface) then {
    call FNC(setChannelNames);
};
