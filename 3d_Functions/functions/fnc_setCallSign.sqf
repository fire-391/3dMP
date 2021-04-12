#include "script_component.hpp"

params [["_callSign", ""]];

private _autoSetCallSign = false;
if (_callSign isEqualTo "") then {
    _callSign = ctrlText 14;
    _autoSetCallSign = cbChecked GETCTRL(17);
};

private _groups = allGroups select {(side _x) isEqualTo (side ace_player) && {!(_x isEqualTo group ace_player)}};
private _callSigns = _groups apply {toLower groupId _x};

private _i = _callSigns find (toLower _callSign);
if (_i != -1 && {(count units (_groups select _i)) > 0}) exitWith {
    hint format ["CALL SIGN ""%1"" IS ALREADY IN USE!", _callSign];
};

hint format ["NEW CALL SIGN ""%1"" SET", _callSign];

ace_player setGroupIdGlobal [_callSign];
if (_autoSetCallSign) then {
    SETPRVAR(MRB_callSign,_callSign);
};
closeDialog 1;
