#include "script_component.hpp"

/* Achilles Modules
["Environment", "Radio Jammer", FNC(AresModuleRadioJammer)] call ares_fnc_registerCustomModule;
["Environment", "Equip FRIES", FNC(AresModuleFRIES)] call ares_fnc_registerCustomModule;
["Environment", "Create Spawn Menu", FNC(AresModuleCreateSpMenu)] call ares_fnc_registerCustomModule;
["Environment", "Shift Temperature", FNC(AresModuleShiftTemperature)] call ares_fnc_registerCustomModule;
["Zeus", "Debug Menu", FNC(AresModuleDebug)] call ares_fnc_registerCustomModule;
["AI Behaviour", "Dismount Vehicle", FNC(AresModuleDismount)] call ares_fnc_registerCustomModule;
["AI Behaviour", "Drop Weapons", FNC(AresModuleDropWeapons)] call ares_fnc_registerCustomModule;
["AI Behaviour", "Engine On/Off", FNC(AresModuleEngine)] call ares_fnc_registerCustomModule;
*/
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

/*
//ACRE2 2.6.0+ channel name assignment script
{
    private _radioName = _x;

    {
        [_radioName, "default2", (_forEachIndex + 1), "label", _x] call acre_api_fnc_setPresetChannelField;
        [_radioName, "default3", (_forEachIndex + 1), "label", _x] call acre_api_fnc_setPresetChannelField;
        [_radioName, "default4", (_forEachIndex + 1), "label", _x] call acre_api_fnc_setPresetChannelField;
    } forEach [
    "CHAN01",//Channel 01
    "Bn-HQ",//Channel 02
    "A/Co-HQ",//Channel 03
    "B/Co-HQ",//Channel 04
    "CHAN05",//Channel 05
    "CHAN06",//Channel 06
    "CHAN07",//Channel 07
    "BnNet",//Channel 08
    "CHAN09",//Channel 09
    "A/CoNet",//Channel 10
    "MSOT8311",//Channel 11
    "8311-HQ",//Channel 12
    "8311-01",//Channel 13
    "8311-02",//Channel 14
    "8311-03",//Channel 15
    "MSOT8312",//Channel 16
    "8312-HQ",//Channel 17
    "8312-01",//Channel 18
    "8312-02",//Channel 19
    "8312-03",//Channel 20
    "MSOT8313",//Channel 21
    "8313-HQ",//Channel 22
    "8313-01",//Channel 23
    "8313-02",//Channel 24
    "8313-03",//Channel 25
    "CHAN26",//Channel 26
    "CHAN27",//Channel 27
    "CHAN28",//Channel 28
    "CHAN29",//Channel 29
    "B/CoNet",//Channel 30
    "MSOT8321",//Channel 31
    "8321-HQ",//Channel 32
    "8321-01",//Channel 33
    "8321-02",//Channel 34
    "8321-03",//Channel 35
    "CHAN36",//Channel 36
    "CHAN37",//Channel 37
    "CHAN38",//Channel 38
    "CHAN39",//Channel 39
    "CHAN40",//Channel 40
    "CHAN41",//Channel 41
    "CHAN42",//Channel 42
    "CHAN43",//Channel 43
    "CHAN44",//Channel 44
    "CHAN45",//Channel 45
    "CHAN46",//Channel 46
    "CHAN47",//Channel 47
    "CHAN48",//Channel 48
    "CHAN49",//Channel 49
    "CONVOY1",//Channel 50
    "CONVOY2",//Channel 51
    "CONVOY3",//Channel 52
    "CHAN53",//Channel 53
    "CHAN54",//Channel 54
    "CHAN55",//Channel 55
    "CHAN56",//Channel 56
    "CHAN57",//Channel 57
    "CHAN58",//Channel 58
    "CHAN59",//Channel 59
    "SARC",//Channel 60
    "CHAN61",//Channel 61
    "CHAN62",//Channel 62
    "CHAN63",//Channel 63
    "CHAN64",//Channel 64
    "CHAN65",//Channel 65
    "CHAN66",//Channel 66
    "CHAN67",//Channel 67
    "CHAN68",//Channel 68
    "NICE",//Channel 69
    "ARES01",//Channel 70
    "S2RP",//Channel 71
    "ARES02",//Channel 72
    "CHAN73",//Channel 73
    "CHAN74",//Channel 74
    "CHAN75",//Channel 75
    "CHAN76",//Channel 76
    "CHAN77",//Channel 77
    "CHAN78",//Channel 78
    "CHAN79",//Channel 79
    "FIRES",//Channel 80
    "TAD01",//Channel 81
    "TAD02",//Channel 82
    "TAD03",//Channel 83
    "CHAN84",//Channel 84
    "AIR01",//Channel 85
    "AIR02",//Channel 86
    "AIR03",//Channel 87
    "CHAN88",//Channel 88
    "CHAN89",//Channel 89
    "A2A01",//Channel 90
    "A2A02",//Channel 91
    "A2A03",//Channel 92
    "CHAN93",//Channel 93
    "CHAN94",//Channel 94
    "CHAN95",//Channel 95
    "CHAN96",//Channel 96
    "CHAN97",//Channel 97
    "REINSERT",//Channel 98
    "GUARD-UHF"//Channel 99
    ];
} forEach ["ACRE_PRC148", "ACRE_PRC152", "ACRE_PRC117F"];
*/

/*
//ACRE2 channel name assignments V2 for ACRE2 2.6.0+
waitUntil { ([] call acre_api_fnc_isInitialized ) };

["ACRE_PRC148", "default", "MRB"] call acre_api_fnc_copyPreset;
["ACRE_PRC152", "default", "MRB"] call acre_api_fnc_copyPreset;
["ACRE_PRC117F", "default", "MRB"] call acre_api_fnc_copyPreset;

["ACRE_PRC148", "MRB", 1, "description", "CHAN01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 2, "description", "Bn-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 3, "description", "A/Co-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 4, "description", "B/Co-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 5, "description", "CHAN05"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 6, "description", "CHAN06"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 7, "description", "CHAN07"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 8, "description", "Bn-Net"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 9, "description", "CHAN09"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 10, "description", "A/Co-net"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 11, "description", "MSOT8311"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 12, "description", "8311-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 13, "description", "8311-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 14, "description", "8311-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 15, "description", "8311-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 16, "description", "MSOT8312"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 17, "description", "8312-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 18, "description", "8312-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 19, "description", "8312-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 20, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 21, "description", "MSOT8313"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 22, "description", "8313-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 23, "description", "8313-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 24, "description", "8313-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 25, "description", "8313-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 26, "description", "CHAN26"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 27, "description", "CHAN27"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 28, "description", "CHAN28"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 29, "description", "CHAN29"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 30, "description", "B/Co-Net"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 31, "description", "MSOT8321"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 32, "description", "8321-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 33, "description", "8321-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 34, "description", "8321-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 35, "description", "8321-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 36, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 37, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 38, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 39, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 40, "description", "CHAN40"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 41, "description", "CHAN41"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 42, "description", "CHAN42"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 43, "description", "CHAN43"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 44, "description", "CHAN44"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 45, "description", "CHAN45"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 46, "description", "CHAN46"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 47, "description", "CHAN47"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 48, "description", "CHAN48"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 49, "description", "CHAN49"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 50, "description", "CONVOY01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 51, "description", "CONVOY02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 52, "description", "CONVOY03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 53, "description", "CHAN53"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 54, "description", "CHAN54"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 55, "description", "CHAN55"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 56, "description", "CHAN56"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 57, "description", "CHAN57"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 58, "description", "CHAN58"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 59, "description", "CHAN59"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 60, "description", "SARC"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 61, "description", "CHAN61"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 62, "description", "CHAN62"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 63, "description", "CHAN63"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 64, "description", "CHAN64"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 65, "description", "CHAN65"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 66, "description", "CHAN66"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 67, "description", "CHAN67"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 68, "description", "CHAN68"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 69, "description", "NICE"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 70, "description", "ARES01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 71, "description", "S2RP"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 72, "description", "ARES02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 73, "description", "CHAN73"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 74, "description", "CHAN74"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 75, "description", "CHAN75"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 76, "description", "CHAN76"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 77, "description", "CHAN77"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 78, "description", "CHAN78"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 79, "description", "CHAN79"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 80, "description", "FIRES"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 81, "description", "TAD01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 82, "description", "TAD02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 83, "description", "TAD03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 84, "description", "CHAN84"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 85, "description", "AIR01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 86, "description", "AIR02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 87, "description", "AIR03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 88, "description", "CHAN88"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 89, "description", "CHAN89"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 90, "description", "A2A01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 91, "description", "A2A02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 92, "description", "A2A03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 93, "description", "CHAN93"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 94, "description", "CHAN94"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 95, "description", "CHAN95"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 96, "description", "CHAN96"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 97, "description", "CHAN97"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 98, "description", "REINSERT"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "MRB", 99, "description", "GUARD"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC152", "MRB", 1, "description", "CHAN01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 2, "description", "Bn-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 3, "description", "A/Co-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 4, "description", "B/Co-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 5, "description", "CHAN05"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 6, "description", "CHAN06"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 7, "description", "CHAN07"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 8, "description", "Bn-Net"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 9, "description", "CHAN09"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 10, "description", "A/Co-net"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 11, "description", "MSOT8311"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 12, "description", "8311-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 13, "description", "8311-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 14, "description", "8311-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 15, "description", "8311-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 16, "description", "MSOT8312"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 17, "description", "8312-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 18, "description", "8312-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 19, "description", "8312-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 20, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 21, "description", "MSOT8313"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 22, "description", "8313-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 23, "description", "8313-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 24, "description", "8313-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 25, "description", "8313-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 26, "description", "CHAN26"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 27, "description", "CHAN27"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 28, "description", "CHAN28"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 29, "description", "CHAN29"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 30, "description", "B/Co-Net"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 31, "description", "MSOT8321"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 32, "description", "8321-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 33, "description", "8321-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 34, "description", "8321-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 35, "description", "8321-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 36, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 37, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 38, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 39, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 40, "description", "CHAN40"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 41, "description", "CHAN41"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 42, "description", "CHAN42"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 43, "description", "CHAN43"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 44, "description", "CHAN44"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 45, "description", "CHAN45"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 46, "description", "CHAN46"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 47, "description", "CHAN47"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 48, "description", "CHAN48"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 49, "description", "CHAN49"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 50, "description", "CONVOY01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 51, "description", "CONVOY02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 52, "description", "CONVOY03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 53, "description", "CHAN53"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 54, "description", "CHAN54"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 55, "description", "CHAN55"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 56, "description", "CHAN56"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 57, "description", "CHAN57"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 58, "description", "CHAN58"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 59, "description", "CHAN59"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 60, "description", "SARC"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 61, "description", "CHAN61"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 62, "description", "CHAN62"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 63, "description", "CHAN63"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 64, "description", "CHAN64"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 65, "description", "CHAN65"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 66, "description", "CHAN66"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 67, "description", "CHAN67"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 68, "description", "CHAN68"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 69, "description", "NICE"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 70, "description", "ARES01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 71, "description", "S2RP"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 72, "description", "ARES02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 73, "description", "CHAN73"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 74, "description", "CHAN74"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 75, "description", "CHAN75"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 76, "description", "CHAN76"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 77, "description", "CHAN77"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 78, "description", "CHAN78"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 79, "description", "CHAN79"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 80, "description", "FIRES"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 81, "description", "TAD01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 82, "description", "TAD02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 83, "description", "TAD03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 84, "description", "CHAN84"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 85, "description", "AIR01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 86, "description", "AIR02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 87, "description", "AIR03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 88, "description", "CHAN88"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 89, "description", "CHAN89"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 90, "description", "A2A01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 91, "description", "A2A02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 92, "description", "A2A03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 93, "description", "CHAN93"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 94, "description", "CHAN94"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 95, "description", "CHAN95"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 96, "description", "CHAN96"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 97, "description", "CHAN97"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 98, "description", "REINSERT"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC152", "MRB", 99, "description", "GUARD"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "MRB", 1, "description", "CHAN01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 2, "description", "Bn-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 3, "description", "A/Co-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 4, "description", "B/Co-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 5, "description", "CHAN05"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 6, "description", "CHAN06"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 7, "description", "CHAN07"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 8, "description", "Bn-Net"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 9, "description", "CHAN09"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 10, "description", "A/Co-net"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 11, "description", "MSOT8311"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 12, "description", "8311-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 13, "description", "8311-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 14, "description", "8311-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 15, "description", "8311-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 16, "description", "MSOT8312"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 17, "description", "8312-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 18, "description", "8312-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 19, "description", "8312-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 20, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 21, "description", "MSOT8313"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 22, "description", "8313-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 23, "description", "8313-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 24, "description", "8313-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 25, "description", "8313-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 26, "description", "CHAN26"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 27, "description", "CHAN27"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 28, "description", "CHAN28"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 29, "description", "CHAN29"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 30, "description", "B/Co-Net"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 31, "description", "MSOT8321"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 32, "description", "8321-HQ"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 33, "description", "8321-01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 34, "description", "8321-02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 35, "description", "8321-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 36, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 37, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 38, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 39, "description", "8312-03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 40, "description", "CHAN40"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 41, "description", "CHAN41"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 42, "description", "CHAN42"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 43, "description", "CHAN43"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 44, "description", "CHAN44"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 45, "description", "CHAN45"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 46, "description", "CHAN46"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 47, "description", "CHAN47"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 48, "description", "CHAN48"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 49, "description", "CHAN49"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 50, "description", "CONVOY01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 51, "description", "CONVOY02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 52, "description", "CONVOY03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 53, "description", "CHAN53"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 54, "description", "CHAN54"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 55, "description", "CHAN55"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 56, "description", "CHAN56"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 57, "description", "CHAN57"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 58, "description", "CHAN58"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 59, "description", "CHAN59"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 60, "description", "SARC"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 61, "description", "CHAN61"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 62, "description", "CHAN62"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 63, "description", "CHAN63"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 64, "description", "CHAN64"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 65, "description", "CHAN65"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 66, "description", "CHAN66"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 67, "description", "CHAN67"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 68, "description", "CHAN68"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 69, "description", "NICE"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 70, "description", "ARES01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 71, "description", "S2RP"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 72, "description", "ARES02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 73, "description", "CHAN73"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 74, "description", "CHAN74"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 75, "description", "CHAN75"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 76, "description", "CHAN76"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 77, "description", "CHAN77"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 78, "description", "CHAN78"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 79, "description", "CHAN79"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 80, "description", "FIRES"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 81, "description", "TAD01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 82, "description", "TAD02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 83, "description", "TAD03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 84, "description", "CHAN84"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 85, "description", "AIR01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 86, "description", "AIR02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 87, "description", "AIR03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 88, "description", "CHAN88"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 89, "description", "CHAN89"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 90, "description", "A2A01"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 91, "description", "A2A02"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 92, "description", "A2A03"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 93, "description", "CHAN93"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 94, "description", "CHAN94"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 95, "description", "CHAN95"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 96, "description", "CHAN96"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 97, "description", "CHAN97"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 98, "description", "REINSERT"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "MRB", 99, "description", "GUARD"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC148", "MRB"] call acre_api_fnc_setPreset;
["ACRE_PRC152", "MRB"] call acre_api_fnc_setPreset;
["ACRE_PRC117F", "MRB"] call acre_api_fnc_setPreset;


//ACRE2 channel name assignments
private _channelname = [
    "CHAN01",//Channel 01
    "Bn-HQ",//Channel 02
    "A/Co-HQ",//Channel 03
    "B/Co-HQ",//Channel 04
    "CHAN05",//Channel 05
    "CHAN06",//Channel 06
    "CHAN07",//Channel 07
    "BnNet",//Channel 08
    "CHAN09",//Channel 09
    "A/CoNet",//Channel 10
    "MSOT8311",//Channel 11
    "8311-HQ",//Channel 12
    "8311-01",//Channel 13
    "8311-02",//Channel 14
    "8311-03",//Channel 15
    "MSOT8312",//Channel 16
    "8312-HQ",//Channel 17
    "8312-01",//Channel 18
    "8312-02",//Channel 19
    "8312-03",//Channel 20
    "MSOT8313",//Channel 21
    "8313-HQ",//Channel 22
    "8313-01",//Channel 23
    "8313-02",//Channel 24
    "8313-03",//Channel 25
    "CHAN26",//Channel 26
    "CHAN27",//Channel 27
    "CHAN28",//Channel 28
    "CHAN29",//Channel 29
    "B/CoNet",//Channel 30
    "MSOT8321",//Channel 31
    "8321-HQ",//Channel 32
    "8321-01",//Channel 33
    "8321-02",//Channel 34
    "8321-03",//Channel 35
    "CHAN36",//Channel 36
    "CHAN37",//Channel 37
    "CHAN38",//Channel 38
    "CHAN39",//Channel 39
    "CHAN40",//Channel 40
    "CHAN41",//Channel 41
    "CHAN42",//Channel 42
    "CHAN43",//Channel 43
    "CHAN44",//Channel 44
    "CHAN45",//Channel 45
    "CHAN46",//Channel 46
    "CHAN47",//Channel 47
    "CHAN48",//Channel 48
    "CHAN49",//Channel 49
    "CONVOY1",//Channel 50
    "CONVOY2",//Channel 51
    "CONVOY3",//Channel 52
    "CHAN53",//Channel 53
    "CHAN54",//Channel 54
    "CHAN55",//Channel 55
    "CHAN56",//Channel 56
    "CHAN57",//Channel 57
    "CHAN58",//Channel 58
    "CHAN59",//Channel 59
    "SARC",//Channel 60
    "CHAN61",//Channel 61
    "CHAN62",//Channel 62
    "CHAN63",//Channel 63
    "CHAN64",//Channel 64
    "CHAN65",//Channel 65
    "CHAN66",//Channel 66
    "CHAN67",//Channel 67
    "CHAN68",//Channel 68
    "NICE",//Channel 69
    "ARES01",//Channel 70
    "S2RP",//Channel 71
    "ARES02",//Channel 72
    "CHAN73",//Channel 73
    "CHAN74",//Channel 74
    "CHAN75",//Channel 75
    "CHAN76",//Channel 76
    "CHAN77",//Channel 77
    "CHAN78",//Channel 78
    "CHAN79",//Channel 79
    "FIRES",//Channel 80
    "TAD01",//Channel 81
    "TAD02",//Channel 82
    "TAD03",//Channel 83
    "CHAN84",//Channel 84
    "AIR01",//Channel 85
    "AIR02",//Channel 86
    "AIR03",//Channel 87
    "CHAN88",//Channel 88
    "CHAN89",//Channel 89
    "A2A01",//Channel 90
    "A2A02",//Channel 91
    "A2A03",//Channel 92
    "CHAN93",//Channel 93
    "CHAN94",//Channel 94
    "CHAN95",//Channel 95
    "CHAN96",//Channel 96
    "CHAN97",//Channel 97
    "REINSERT",//Channel 98
    "GUARD-UHF"//Channel 99
];

["ACRE_PRC148", "default", QGVAR(COOP)] call acre_api_fnc_copyPreset;
["ACRE_PRC152", "default", QGVAR(COOP)] call acre_api_fnc_copyPreset;
["ACRE_PRC117F", "default", QGVAR(COOP)] call acre_api_fnc_copyPreset;

{
    private _name = If (isLocalized _x) then {localize _x}else{format ["%1",_x]};
    ["ACRE_PRC152", QGVAR(COOP), (_forEachIndex + 1), "description",_name] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC148", QGVAR(COOP), (_forEachIndex + 1), "label",_name] call acre_api_fnc_setPresetChannelField;
    ["ACRE_PRC117F", QGVAR(COOP), (_forEachIndex + 1), "name",_name] call acre_api_fnc_setPresetChannelField;
} forEach _channelname;

["ACRE_PRC152", QGVAR(COOP)] call acre_api_fnc_setPreset;
["ACRE_PRC148", QGVAR(COOP)] call acre_api_fnc_setPreset;
["ACRE_PRC117F", QGVAR(COOP)] call acre_api_fnc_setPreset;
*/
