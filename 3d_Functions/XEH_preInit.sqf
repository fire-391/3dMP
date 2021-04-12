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
FN(AcreCustomSignal)
FN(backpackToChest)
FN(canDropBag)
FN(canMoveBag)
FN(canOpenChestbag)
FN(chestbagToBack)
FN(deleteEmptyGroups)
FN(draw3D)
FN(dropBackpack)
FN(dropChestbag)
FN(handleInsignia)
FN(hideChestbag)
FN(insigniaMenu)
FN(listDialog)
FN(loadLoadout)
FN(lockBackpackHolder)
FN(openChestbag)
FN(prepBackpackHolder)
FN(saveLoadout)
FN(setAISkill)
FN(setCallSign)
FN(setChannelNames)
FN(showCSDialog)
FN(sniperBlinds)
FN(spawnMenu)
FN(swapBackpacks)
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

mrb_AISkillNamespace = call CBA_fnc_createNamespace;

// No setting for this two, they're too delicate for S-2 to fuck with them
mrb_AISkillNamespace setVariable ["commanding", 0.9];
mrb_AISkillNamespace setVariable ["courage", 0.9];

[
    "MRB_AI_aimingAccuracy", "SLIDER", ["Aiming Accuracy", "Higher value = more controlled fire"], ["3d MRB Settings", "AI"],
    [0, 1, 0.2, 2],
    2,
    {
        params ["_value"];
        mrb_AISkillNamespace setVariable ["aimingAccuracy", _value];
    }
] call CBA_settings_fnc_init;

[
    "MRB_AI_aimingShake", "SLIDER", ["Aiming Shake", "Higher value = less weapon sway"], ["3d MRB Settings", "AI"],
    [0, 1, 0.5, 2],
    2,
    {
        params ["_value"];
        mrb_AISkillNamespace setVariable ["aimingShake", _value];
    }
] call CBA_settings_fnc_init;

[
    "MRB_AI_aimingSpeed", "SLIDER", ["Aiming Speed", "Higher value = faster, less error"], ["3d MRB Settings", "AI"],
    [0, 1, 0.3, 2],
    2,
    {
        params ["_value"];
        mrb_AISkillNamespace setVariable ["aimingSpeed", _value];
    }
] call CBA_settings_fnc_init;

[
    "MRB_AI_reloadSpeed", "SLIDER", ["Reload Speed", "Higher value = less delay"], ["3d MRB Settings", "AI"],
    [0, 1, 0.6, 2],
    2,
    {
        params ["_value"];
        mrb_AISkillNamespace setVariable ["reloadSpeed", _value];
    }
] call CBA_settings_fnc_init;

[
    "MRB_AI_spotDistance", "SLIDER", ["Spot Distance", "Higher value = more likely to spot"], ["3d MRB Settings", "AI"],
    [0, 1, 0.8, 2],
    2,
    {
        params ["_value"];
        mrb_AISkillNamespace setVariable ["spotDistance", _value];
    }
] call CBA_settings_fnc_init;

[
    "MRB_AI_spotTime", "SLIDER", ["Spot Time", "Higher value = quicker reaction"], ["3d MRB Settings", "AI"],
    [0, 1, 0.8, 2],
    2,
    {
        params ["_value"];
        mrb_AISkillNamespace setVariable ["spotTime", _value];
    }
] call CBA_settings_fnc_init;

mrb_factionCoefNamespace = call CBA_fnc_createNamespace;
mrb_factionCoefNamespace setVariable ["B_3d_Marine_Raider", AI_LEVEL_SUPER];
mrb_factionCoefNamespace setVariable ["BLU_F", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["BLU_GEN_F", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["BLU_T_F", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["IND_C_F", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_AA", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_AFR", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_AFR_OPF", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_AM", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_AM_OPF", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_BH", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_CDF", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_ChDKZ", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_IA", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_IRA", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_IRAN", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_ISTS", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_ISTS_OPF", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_NAPA", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_PESH", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_PESH_IND", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_PMC", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_RACS", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_SLA", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_TKA", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_UA", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_UKR", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_UN", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["LOP_US", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["LOP_UVF", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_MSV", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_RVA", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_SOCOM", AI_LEVEL_SUPER];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_TV", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_USAF", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_USARMY", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_USARMY_D", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_USARMY_WD", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_USMC", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_USMC_D", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_USMC_WD", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_USN", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_VDV", AI_LEVEL_SUPER];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_VMF", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_VPVO", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_VV", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_VVS", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_VVS_C", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_CDF_AIR", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_CD_AIR_B", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_CDF_GROUND", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_CDF_GROUND_B", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_CDF_NG", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_CDF_NG_B", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_CHDKZ", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_CHDKZ_G", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_HIDF", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_NATIONALIST", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_TLA", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["RHSGREF_FACTION_UN", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["RHSSAF_FACTION_AIRFORCE", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["RHSSAF_FACTION_ARMY", AI_LEVEL_NORM];
mrb_factionCoefNamespace setVariable ["RHSSAF_FACTION_UN", AI_LEVEL_LOW];
mrb_factionCoefNamespace setVariable ["UK_ARMED_FORCES", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["US_FACTION_SOCOM", AI_LEVEL_HIGH];
mrb_factionCoefNamespace setVariable ["RHS_FACTION_VDV_45", AI_LEVEL_SUPER];

mrb_insigniaCache = call CBA_fnc_createNamespace;
{
    mrb_insigniaCache setVariable [_x, getText (configFile >> "CfgUnitInsignia" >> _x >> "displayName")];
} forEach [
    "MRB_8312_Patch",
    "MRB_JTAC_Patch",
    "MRB_SARC_Patch",
    "MRB_8311_Patch",
    "MRB_8321_Patch",
    "MRB_SOAR_Patch",
    "MRB_S2"
];
