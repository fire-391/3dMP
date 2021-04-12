createDialog "MRB_DialogInsignia";

private _list = (findDisplay 654655) displayCtrl 130;

_list lbAdd "0, None, Nada";
_list lbSetData [0, ""];

private _insignia = profileNamespace getVariable ["mrb_insignia", ""];
private _selection = 0;
{
    _list lbAdd (mrb_insigniaCache getVariable _x);
    _list lbSetData [_forEachIndex + 1, _x];

    if (_x == _insignia) then {
        _selection = _forEachIndex + 1;
    };
} forEach allVariables mrb_insigniaCache;
lbSort _list;

_list lbSetCurSel _selection;

private _fnc_damnYouBohemia = {
    params ["_list", "_index"];

    private _insignia = _list lbData _index;
    ctrlSetText [140, getText (configFile >> "CfgUnitInsignia" >> _insignia >> "texture")];
    profileNamespace setVariable ["mrb_insignia", _insignia];
    [ace_player, _insignia] call BIS_fnc_setUnitInsignia;
};

[_list, _selection] call _fnc_damnYouBohemia;
_list ctrlAddEventHandler ["LBSelChanged", _fnc_damnYouBohemia];
