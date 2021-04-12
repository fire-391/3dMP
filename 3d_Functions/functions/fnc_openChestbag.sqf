#include "script_component.hpp"

params ["_target"];

ace_player action ["Gear", firstBackpack GETVAR(_target,MRB_chestbag,objNull)];
