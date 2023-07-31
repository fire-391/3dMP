#include "script_component.hpp"

"MRBVCILayer" cutRsc ["RscVehicleCargoIcon", "PLAIN"];
addMissionEventHandler ["Draw3D", {call FNC(draw3D)}];

ace_player addEventHandler ["GetInMan", {true call FNC(hideChestbag)}];
ace_player addEventHandler ["GetOutMan", {false call FNC(hideChestbag)}];
ace_player addEventHandler ["Killed", {call FNC(dropChestbag)}];
ace_player addEventHandler ["Respawn", {
    SETVAR(ace_player,MRB_chestbag,objNull);
    call FNC(handleInsignia);
}];
["loadout", FNC(handleInsignia)] call CBA_fnc_addPlayerEventHandler;
["ace_arsenal_displayClosed", FNC(handleInsignia)] call CBA_fnc_addEventHandler;

private _insigniaMenuAction = [
    "MRB_InsigniaAction",
    "Insignia Menu",
    ["a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\insignia_ca.paa", "#DD00DD"],
    FNC(insigniaMenu),
    {true},
    nil,
    nil,
    nil,
    8
] call EFUNC(interact_menu,createAction);

["MRB_Arsenal_Crate", 0, ["ACE_MainActions"], _insigniaMenuAction, true] call EFUNC(interact_menu,addActionToClass);

private _saveLoadoutAction = [
    "MRB_SaveLoadout",
    "Save Loadout",
    "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa",
    FNC(saveLoadout),
    {true},
    nil,
    nil,
    nil,
    4
] call EFUNC(interact_menu,createAction);

["MRB_PersistenceCrate", 0, ["ACE_MainActions"], _saveLoadoutAction] call EFUNC(interact_menu,addActionToClass);

private _loadLoadoutAction = [
    "MRB_LoadLoadout",
    "Load Loadout",
    "a3\ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa",
    FNC(loadLoadout),
    {true},
    nil,
    nil,
    nil,
    4
] call EFUNC(interact_menu,createAction);

["MRB_PersistenceCrate", 0, ["ACE_MainActions"], _loadLoadoutAction] call EFUNC(interact_menu,addActionToClass);

if (MRB_isZeus) then {
    (getAssignedCuratorLogic ace_player) addEventHandler ["CuratorObjectPlaced", {
        params ["", "_entity"];

        private _objects = lineIntersectsSurfaces [getPosASL curatorCamera, getPosASL _entity, curatorCamera, _entity];
        {
            _x params ["_intersectPosASL", "", "_intersectObject", ""];

            private _type = tolower (typeOf _intersectObject);

            if (((_type find "land_carrier_01") + (_type find "jdg_carrier") + (_type find "cup_lhd")) > -3) exitWith {
                _entity setPosASL (_intersectPosASL vectorAdd [0, 0, 0.2]);
            };
        } forEach _objects;
    }];
};

if (is3DEN) then {
    player setVariable ["mrb_initialCamouflageCoef", player getUnitTrait "camouflageCoef"];
    [{
        private _initialCoef = player getVariable "mrb_initialCamouflageCoef";
        player setUnitTrait ["camouflageCoef", _initialCoef * ([0.5, 1] select ((player nearObjects ["Str_WeedBrown_Tall", 1.5]) isEqualTo []))];
    }, 0.1] call CBA_fnc_addPerFrameHandler;
};

[
    "cTab", "callSignMenu", "Call Sign Menu",
    FNC(showCSDialog), {false},
    [47, [false, true, true]]
] call CBA_fnc_addKeybind;

private _callSign = GETPRVAR(MRB_callSign,"");
if (_callSign != "" && {ace_player isEqualTo leader ace_player}) then {
    [_callSign] call FNC(setCallSign);
};

if (hasInterface) then {
    call FNC(setChannelNames);
};

private _medicalTab = [
    "ACE_quikclot",
    "ACE_packingBandage",
    "ACE_elasticBandage", 
    "ACE_fieldDressing",
    "ACE_tourniquet",
    "ACE_splint",
    "ACE_morphine",
    "ACE_epinephrine",
    "ACE_adenosine",
    "ACE_salineIV",
    "ACE_salineIV_500",
    "ACE_salineIV_250",
    "ACE_plasmaIV",
    "ACE_plasmaIV_500",
    "ACE_plasmaIV_250",
    "ACE_bloodIV",
    "ACE_bloodIV_500",
    "ACE_bloodIV_250",
    "ACE_surgicalKit",
    "ACE_personalAidKit",
    "kat_IV_16",
    "Kat_aatKit",
    "kat_accuvac",
    "kat_AED",
    "kat_X_AED",
    "kat_chestseal",
    "kat_IO_FAST",
    "kat_guedel",
    "kat_larynx",
    "kat_pulseoximeter",
    "kat_TXA",
    "kat_EACA",
    "kat_fentanyl",
    "kat_ketamine",
    "kat_naloxone",
    "kat_pocketBVM",
    "kat_PainkillerItem"
];
[_medicalTab, "Medical","3d_Functions\data\redCrystal.paa"] call ace_arsenal_fnc_addRightPanelButton;
