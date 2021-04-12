#include "script_component.hpp"

if !(ace_player isEqualTo leader ace_player) exitWith {true};

createDialog "MRB_CS_Dialog";
ctrlSetText [14, groupId group ace_player];

if !(GETPRVAR(MRB_callSign,"") isEqualTo "") then {
    GETCTRL(17) cbSetChecked true;
};
true
