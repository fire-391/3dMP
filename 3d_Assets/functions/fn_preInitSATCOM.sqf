if (!hasInterface) exitWith {};
if (!isClass (configFile >> "CfgPatches" >> "ace_interact_menu")) exitWith {};
	{
[_x, "init", {
    params ["_vehicle"];

    private _parentCondition = {
        private _veh = vehicle _player;
        (_veh != _player) && (_player == driver _veh || _player == gunner _veh) && { [_player, objNull, ["isNotInside"]] call ace_common_fnc_canInteractWith }
    };
    private _parentStatement = {};
    private _parentText = "SATCOM";
    private _parentIcon = "\idi\acre\addons\ace_interact\data\icons\antenna.paa";
    private _parentAction = [
        "MRB_SATCOM",
        _parentText,
        _parentIcon,
        _parentStatement,
        _parentCondition,
        {},
        [],
        {[0,0,0]},
        2,
        [false, true, false, false, false]
    ] call ace_interact_menu_fnc_createAction;

    [_vehicle, 1, ["ACE_SelfActions"], _parentAction] call ace_interact_menu_fnc_addActionToObject;

    private _connectCondition = {
        private _veh = vehicle _player;
        private _isConnectedRaw = _veh getVariable ["acre_gsa_connectedRadio", ""];
        private _radioList = [] call acre_sys_data_fnc_getPlayerRadioList;
        private _hasCompat = false;
        {
            private _baseRadio = toLower ([_x] call acre_api_fnc_getBaseRadio);
            if (_baseRadio in ["acre_prc152", "acre_prc117f"]) then {
                _hasCompat = true;
            };
        } forEach _radioList;
        private _isConnected = _isConnectedRaw != "";

        (_player == driver _veh || _player == gunner _veh) && !_isConnected && _hasCompat && { [_player, objNull, ["isNotInside"]] call ace_common_fnc_canInteractWith }
    };
    private _connectStatement = {true};
    private _connectInsertChildren = {
        private _veh = vehicle _player;
        [_player, _veh] call acre_sys_gsa_fnc_connectChildrenActions
    };
    private _connectAction = [
        "ACRE_connect",
        "Connect",
        "\idi\acre\addons\ace_interact\data\icons\antenna.paa",
        _connectStatement,
        _connectCondition,
        _connectInsertChildren,
        [],
        {[0,0,0]},
        10,
        [false, true, false, false, false]
    ] call ace_interact_menu_fnc_createAction;

    [_vehicle, 1, ["ACE_SelfActions", "MRB_SATCOM"], _connectAction] call ace_interact_menu_fnc_addActionToObject;

    private _disconnectCondition = {
        private _veh = vehicle _player;
        private _isConnectedRaw = _veh getVariable ["acre_gsa_connectedRadio", ""];
        private _isConnected = _isConnectedRaw != "";

        (_player == driver _veh || _player == gunner _veh) && _isConnected && { [_player, objNull, ["isNotInside"]] call ace_common_fnc_canInteractWith }
    };
    private _disconnectStatement = {
        private _veh = vehicle _player;
        [_player, _veh] call acre_sys_gsa_fnc_disconnect
    };
    private _disconnectAction = [
        "ACRE_disconnect",
        "Disconnect",
        "\idi\acre\addons\ace_interact\data\icons\antenna.paa",
        _disconnectStatement,
        _disconnectCondition,
        {},
        [],
        {[0,0,0]},
        10,
        [false, true, false, false, false]
    ] call ace_interact_menu_fnc_createAction;

    [_vehicle, 1, ["ACE_SelfActions", "MRB_SATCOM"], _disconnectAction] call ace_interact_menu_fnc_addActionToObject;

    private _checkCondition = {
        private _veh = vehicle _player;
        (_player == driver _veh || _player == gunner _veh) && { [_player, objNull, ["isNotInside"]] call ace_common_fnc_canInteractWith }
    };
    private _checkStatement = {
        private _veh = vehicle _player;
        private _msg = ["No signal to/from Satellite", "Good Satellite Link"] select ([_veh] call acre_sys_signal_fnc_checkClearSkyLOS);
        [_msg] call CBA_fnc_notify;
    };
    private _checkAction = [
        "ACRE_checkConnection",
        "Check Connection",
        "",
        _checkStatement,
        _checkCondition,
        {},
        [],
        {[0,0,0]},
        3,
        [false, true, false, false, false]
    ] call ace_interact_menu_fnc_createAction;

    [_vehicle, 1, ["ACE_SelfActions", "MRB_SATCOM"], _checkAction] call ace_interact_menu_fnc_addActionToObject;

}, nil, nil, true] call CBA_fnc_addClassEventHandler;
} forEach ["MELB_base", "MRB_MH60M", "MRB_MH60M_DAP", "MRB_MH60M_MLASS", "MRB_MH47G", "MRB_MQ1C"];