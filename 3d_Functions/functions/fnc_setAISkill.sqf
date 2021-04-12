#include "script_component.hpp"

params ["_unit"];

if (!local _unit || {isPlayer _unit}) exitWith {};

private _factionCoef = mrb_factionCoefNamespace getVariable [faction _unit, AI_LEVEL_HIGH];

if (_factionCoef == AI_LEVEL_NONE) exitWith {};

{
    private _rand = (random 0.2) - 0.1;
    _unit setSkill [_x, ((mrb_AISkillNamespace getVariable _x) + _rand) * _factionCoef];
} forEach allVariables mrb_AISkillNamespace;
