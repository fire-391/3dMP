private _loadout = profileNamespace getVariable ["mrb_playerLoadout", []];

if (_loadout isEqualTo []) exitWith {
	["You don't have a saved loadout!", false, 5, 3] call ace_common_fnc_displayText;
};

ace_player setUnitLoadout _loadout;

private _loaded = missionNamespace getVariable ["mrb_loadoutLoaded", false];
if (_loaded) then {
	profileNamespace setVariable ["mrb_playerLoadout", []];
};

missionNamespace setVariable ["mrb_loadoutLoaded", true];
