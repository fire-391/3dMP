if (!hasInterface) exitWith {};
if (!isClass (configFile >> "CfgPatches" >> "ace_interact_menu")) exitWith {};
{
    [_x, "init", {
        params ["_vehicle"];

        private _debugCondition = {
            private _veh = vehicle _player;
            (_veh != _player) && (_player == driver _veh || _player == gunner _veh) && { [_player, objNull, ["isNotInside"]] call ace_common_fnc_canInteractWith }
        };
        private _debugStatement = {};
        private _debugText = "Debug";
        private _debugIcon = "";
        private _debugAction = [
            "Debug",
            _debugText,
            _debugIcon,
            _debugStatement,
            _debugCondition,
            {},
            [],
            {[0,0,0]},
            2,
            [false, true, false, false, false]
        ] call ace_interact_menu_fnc_createAction;

        [_vehicle, 1, ["ACE_SelfActions"], _debugAction] call ace_interact_menu_fnc_addActionToObject;

        private _flirCondition = {
            private _veh = vehicle _player;
            (_veh != _player) && (_player == driver _veh || _player == gunner _veh) && { [_player, objNull, ["isNotInside"]] call ace_common_fnc_canInteractWith }
        };
        private _flirStatement = {
            _target setVariable ["vtx_uh60_flir_stowed", false];
        };
        private _flirText = "Flir Fix";
        private _flirIcon = "";
        private _flirAction = [
            "FlirFix",
            _flirText,
            _flirIcon,
            _flirStatement,
            _flirCondition,
            {},
            [],
            {[0,0,0]},
            10,
            [false, true, false, false, false]
        ] call ace_interact_menu_fnc_createAction;

        [_vehicle, 1, ["ACE_SelfActions", "Debug"], _flirAction] call ace_interact_menu_fnc_addActionToObject;

    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
} forEach ["MRB_MH60M", "MRB_MH60M_DAP", "MRB_MH60M_MLASS"];