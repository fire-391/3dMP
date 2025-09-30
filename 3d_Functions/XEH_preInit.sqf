#include "script_component.hpp"

#define FN(ID) FNC(ID) = compile preprocessFileLineNumbers QUOTE(DOUBLES(3d_Functions\functions\fnc,ID).sqf);

//Functions
FN(deleteEmptyGroups)
FN(draw3D)
FN(handleInsignia)
FN(insigniaMenu)
FN(listDialog)
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
