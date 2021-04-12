private _insignia = profileNamespace getVariable ["mrb_insignia", ""];
if (_insignia != "") then {
    [ace_player, _insignia] call BIS_fnc_setUnitInsignia;
};
