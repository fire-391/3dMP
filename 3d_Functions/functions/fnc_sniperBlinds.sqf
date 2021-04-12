#include "script_component.hpp"

[ace_player, "ainvpknlmstpslaywnondnon_medic", 0] call EFUNC(common,doAnimation);

[
    5.1,
    nil,
    {
        [ace_player, "AmovPpneMstpSrasWrflDnon", 0] call EFUNC(common,doAnimation);
        [ace_player, "MRB_SniperBlinds"] call EFUNC(common,useItem);

        private _blinds = [
            ["Str_Grass_Dry", [0.3, 0.3, 0]],
            ["Str_WeedBrown_Tall", [0, 0, 0.3]],
            ["Str_WeedGreen_Tall", [0, 0.3, 0.3]],
            ["Plant_Germander_Group", [0.4, 0.4, 0.3]],
            ["Plant_Green_Shrub", [0, -0.5, 0.2]]
        ] apply {
            private _blind = createVehicle [_x select 0, [0, 0, 0], [], 0, "NONE"];
            _blind setPos (ace_player modelToWorld (_x select 1));
            _blind setDir random 360;
            _blind
        };

        private _action = [
            "MRB_PickUpAction",
            "Pick Up Sniper Blinds",
            "",
            {
                [ace_player, "AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon", 0] call EFUNC(common,doAnimation);

                [{
                    {deleteVehicle _x} forEach _this;
                    [ace_player, "MRB_SniperBlinds", true] call CBA_fnc_addItem;
                }, _this select 2, 1.5] call CBA_fnc_waitAndExecute;
            },
            {true},
            nil,
            _blinds,
            nil,
            3
        ] call EFUNC(interact_menu,createAction);
        [_blinds select 1, 0, ["ACE_MainActions"], _action] call EFUNC(interact_menu,addActionToObject);
    },
    {},
    "Deploying Sniper Blinds"
] call EFUNC(common,progressBar);