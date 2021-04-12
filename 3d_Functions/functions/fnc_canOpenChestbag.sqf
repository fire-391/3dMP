#include "script_component.hpp"

params ["_target"];

(
    !(isNull GETVAR(_target,MRB_chestbag,objNull)) &&
    {vehicle _target isEqualTo _target} &&
    {!visibleMap}
)
