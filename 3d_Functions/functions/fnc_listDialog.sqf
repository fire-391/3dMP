#include "script_component.hpp"

params ["_title", "_list", "_functionOkay", ["_args", []], ["_okayButtonText", "OKAY"]];

createDialog "MRB_List_Dialog";

ctrlSetText [11, _title];

lbClear 13;
{
    lbAdd [13, _x select 0];
    lbSetData [13, _forEachIndex, _x select 1];
} forEach _list;

disableSerialization;
private _okayButton = GETCTRL(14);
_okayButton ctrlSetText _okayButtonText;

SETVAR(_okayButton,actionVars,[ARR_2(_args,_functionOkay)]);
_okayButton ctrlAddEventHandler ["buttonClick", {
    private _curSel = lbCurSel 13;
    ((param [0]) getVariable "actionVars") params ["_args", "_functionOkay"];

    #define FNCARGS [_args, lbData [13, _curSel], lbText [13, _curSel], _curSel]
    if (RETDEF(FNCARGS call _functionOkay,true) isEqualTo true) then {
        closeDialog 1;
    };
}];
