#include "script_component.hpp"

private _drawables = ace_player nearObjects ["MRB_BagHolder", 7.5];
{
    private _intersects = lineIntersectsWith [eyePos ace_player, getPosASLVisual _x, ace_player, _x];
    if ({typeOf _x != "MRB_BagHolder"} count _intersects > 0 || {GETVAR(_x,MRB_backpackContainer,"") isEqualTo ""}) then {
        _drawables set [_forEachIndex, objNull];
    };
} forEach _drawables;
REM(_drawables,objNull);

{
    private _size = [0.333, 0.5, 0.666, 0.83333, 1] select EGVAR(nametags,tagSize);
    private _dir = getDir _x - 20;
    drawIcon3D [
        "\a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\backpack_ca.paa",
        [1, 1, 1, linearConversion [0, 7.5, (_x distance ace_player) - 1, 1, 0, true]],
        (getPosATLVisual _x) vectorAdd [sin _dir * -0.3, cos _dir * -0.3, 0.25],
        _size * 1.4, _size * 1.4, 0, GETVAR(_x,MRB_backpackContainer,""),
        EGVAR(interact_menu,shadowSetting), 0.04, "RobotoCondensed", "center"
    ];
} forEach _drawables;
