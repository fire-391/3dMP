diag_log "SATCOM postInit started";

// Add event handlers for connect/disconnect (runs on server)
["acre_sys_gsa_connectGsa", {
    params ["_veh", "_radioId", "_unit"];
    diag_log format ["SATCOM connect event: veh=%1, radioId=%2, unit=%3", _veh, _radioId, _unit];
    _veh setVariable ["acre_gsa_connectedRadio", _radioId, true];
}] call CBA_fnc_addEventHandler;

["acre_sys_gsa_disconnectGsa", {
    params ["_veh", "_unit"];
    diag_log format ["SATCOM disconnect event: veh=%1, unit=%2", _veh, _unit];
    _veh setVariable ["acre_gsa_connectedRadio", "", true];
}] call CBA_fnc_addEventHandler;

diag_log "SATCOM postInit completed";