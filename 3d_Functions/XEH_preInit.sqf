#include "script_component.hpp"

#define FN(ID) FNC(ID) = compile preprocessFileLineNumbers QUOTE(DOUBLES(3d_Functions\functions\fnc,ID).sqf);

/*Ares Modules
FN(AresModuleRadioJammer)
FN(AresModuleCreateSpMenu)
FN(AresModuleCreateSpZone)
FN(AresModuleDebug)
FN(AresModuleDismount)
FN(AresModuleDropWeapons)
FN(AresModuleEngine)
FN(AresModuleFRIES)
FN(AresModuleShiftTemperature)
*/
//Functions
FN(deleteEmptyGroups)
FN(draw3D)
FN(handleInsignia)
FN(hideChestbag)
FN(listDialog)
FN(loadLoadout)
FN(saveLoadout)
FN(setCallSign)
FN(setChannelNames)
FN(showCSDialog)
FN(sniperBlinds)
FN(spawnMenu)
FN(vehicleSpawn)
FN(spawnList)
FN(trackShell)
//3DEN Editor Module
FN(EdenModuleTeleporters)
FN(EdenModuleSpawnMenu)

[
    "MRB_grassDistance", "LIST", "Grass Distance", ["3d MRB Settings", "Gameplay"],
    [[50, 25, 12.5, 6.25, 3.125], ["None", "Low", "Normal", "High", "Ultra"], 2],
    0,
    {
        params ["_value"];
        setTerrainGrid _value;
    }
] call CBA_settings_fnc_init;

mrb_insigniaCache = call CBA_fnc_createNamespace;
{
    mrb_insigniaCache setVariable [_x, getText (configFile >> "CfgUnitInsignia" >> _x >> "displayName")];
} forEach [
    "MRB_8312_Patch",
    "MRB_JTAC_Patch",
    "MRB_SARC_Patch",
    "MRB_8311_Patch",
    "MRB_8313_Patch",
    "MRB_SOAR_Patch",
    "MRB_S2",
    "MRB_CHQ"
];
