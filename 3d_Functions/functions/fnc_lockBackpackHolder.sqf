#include "script_component.hpp"

params ["_holder"];

_holder removeAllEventHandlers "ContainerClosed";
_holder enableSimulation false;
_holder addEventHandler ["ContainerOpened", {
    [{!isNull (findDisplay 602)}, {
        (findDisplay 602) closeDisplay 0;
        ace_player action ["Gear", objNull];
    }] call CBA_fnc_waitUntilAndExecute;
}];
