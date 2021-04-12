private _loadout = getUnitLoadout ace_player;

profileNamespace setVariable ["mrb_playerLoadout", _loadout];

["Your loadout was successfully saved!", false, 5, 3] call ace_common_fnc_displayText;
