class CfgPatches {
    class 3d_Functions {
        name = "3d Functions";
        author = "3d MRB";
        url = "https://3dmrbru.com/forums/";
        authors[] = {"3d MRB"};
        authorUrl = "https://3dmrbru.com/forums/";
        requiredAddons[] = {
            // loose
            //"ace_repair",
            //"ace_nametags",
            "cba_events",
            "cba_keybinding",
            "cba_settings",
            "cba_versioning",

            // strict
            //"ace_ai",
            //"rhs_us_a2_airimport",
            //"rhsusf_c_ch53",
            //"rhsusf_c_melb"
            //"achilles_modules_f_ares"
        };
        requiredVersion = 2.00;
        units[] = {"Ares_Module_Create_Spawn_Zone"};
        weapons[] = {"MRB_SniperBlinds"};
        version = 1.1;
        versionStr = "1.1.0";
        versionAr[] = {1,1,0};
        versionDesc = "3d Functions 1.1";
    };
};

#include "script_component.hpp"
#include "CfgChannels.hpp"
#define TEX(FILE) QUOTE(\3d_Functions\data\FILE.paa)
#define ICO(FILE) QUOTE(\3d_Functions\UI\FILE.paa)

#define ADD_MASTERSAFE(MODIFY,BASE) class MODIFY: BASE { \
    weapons[] = {"rhs_weap_MASTERSAFE", "rhs_weap_FFARLauncher", "rhsusf_weap_CMFlareLauncher"}; \
};

class Extended_PreInit_EventHandlers {
    class MRB_PreInitEvent {
        init = "call compile preprocessFileLineNumbers '3d_Functions\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class MRB_PostInitClientEvent {
        clientInit = "call compile preprocessFileLineNumbers '3d_Functions\XEH_postInitClient.sqf'";
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class MRB_missionModules: NO_CATEGORY {
        displayName = "MRB mission Modules";
    };
};

class CfgDifficultyPresets {
    class Custom;
    class MRB_difficultyPreset: Custom {
        displayName = "MRB";
        description = "Difficulty setting for 3d MRB operations.";
        optionDescription = "Difficulty setting for 3d MRB operations.";
        levelAI = "MRB_AILevelPreset";
        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags = 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            squadRadar = 0;
            staminaBar = 1;
            stanceIndicator = 1;
            tacticalPing = 0;
            thirdPersonView = 1;
            visionAid = 0;
            vonID = 1;
            waypoints = 0;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };
};

class CfgVehicleClasses {
    class Sniper_Blind {
        displayName = "Sniper Blind";
    };
};

class CBA_Extended_EventHandlers_base;
class CfgVehicles {
   // class Ares_Module_Base;
    //class Ares_Module_Create_Spawn_Zone: Ares_Module_Base {
      //  scopeCurator = 2;
      //  displayName = "Create Spawn Zone";
      //  Category = "Environment";
       // function = "MRB_fnc_AresModuleCreateSpZone";
    //};
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class MRB_OpenChestbagSelf {
                    displayName = "Open Chestbag";
                    condition = QUOTE([_player] call FNC(canOpenChestbag));
                    statement = QUOTE([_player] call FNC(openChestbag));
                    icon = ICO(backpack_open);
                };
                class MRB_BackpackToChest {
                    displayName = "Backpack to Chest";
                    condition = QUOTE([0] call FNC(canMoveBag));
                    statement = QUOTE(call FNC(backpackToChest));
                    icon = "a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\backpack_ca.paa";
                };
                class MRB_ChestbagToBack {
                    displayName = "Chestbag to Back";
                    condition = QUOTE([1] call FNC(canMoveBag));
                    statement = QUOTE(call FNC(chestbagToBack));
                    icon = "a3\ui_f\data\GUI\Rsc\RscDisplayArsenal\backpack_ca.paa";
                };
                class MRB_SwapBackpacks {
                    displayName = "Swap Backpacks";
                    condition = QUOTE([2] call FNC(canMoveBag));
                    statement = QUOTE(call FNC(swapBackpacks));
                    icon = ICO(backpack_swap);
                };
                class MRB_DropBackpack {
                    displayName = "Drop Backpack";
                    condition = QUOTE([false] call FNC(canDropBag));
                    statement = QUOTE(call FNC(dropBackpack));
                    icon = ICO(backpack_drop);
                };
                class MRB_DropChestbag {
                    displayName = "Drop Chestbag";
                    condition = QUOTE([true] call FNC(canDropBag));
                    statement = QUOTE([_player] call FNC(dropChestbag));
                    icon = ICO(backpack_drop);
                };
                class MRB_DeploySniperBlinds {
                    displayName = "Deploy Sniper Blinds";
                    condition = "'MRB_SniperBlinds' in items ace_player && {((getPos ace_player) select 2) < 0.2}";
                    statement = QUOTE(call FNC(sniperBlinds));
                    icon = ICO(sniper_blinds);
                };
            };
        };
        class ACE_Actions {
            class ACE_MainActions {
                class MRB_OpenChestbagOther {
                    displayName = "Open Chestbag";
                    condition = QUOTE([_target] call FNC(canOpenChestbag));
                    statement = QUOTE([_target] call FNC(openChestbag));
                    icon = ICO(backpack_open);
                    distance = 4;
                };
            };
        };
    };
    class GroundWeaponHolder;
    class MRB_BagHolder: GroundWeaponHolder {
        maximumLoad = 460;
        supplyRadius = 0.001;
    };

    class Plane_Base_F;
    class RHS_AH1Z_base;
    class Heli_Light_03_base_F;
    class RHS_UH1Y_US_base;
    class RHS_UH1Y: RHS_UH1Y_US_base {
        class UserActions {
            class SAFEMODE {
                displayName = "<t color='#00FF7F'>MASTERSAFE</t>";
                condition = "ace_player in this";
                statement = "ace_player action ['SwitchWeapon', this, ace_player, 0];";
                position = "";
                radius = 10;
                priority = 10.5;
                onlyForPlayer = 1;
                showWindow = 0;
                shortcut = "user13";
                hideOnUse = 1;
            };
        };
    };
    ADD_MASTERSAFE(RHS_AH1Z,RHS_AH1Z_base)
    ADD_MASTERSAFE(RHS_UH1_Base,Heli_Light_03_base_F)
    ADD_MASTERSAFE(RHS_UH1Y_FFAR,RHS_UH1Y)
    ADD_MASTERSAFE(RHS_UH1Y_GS,RHS_UH1Y)

    class Helicopter_Base_H;
    class RHS_MELB_base: Helicopter_Base_H {
        getInRadius = 3;
    };

    class ACE_Module;
    class MRB_teleporter_module: ACE_Module {
        author = "3d MRB";
        category = "MRB_missionModules";
        displayName = "Teleporters";
        function = "MRB_fnc_EdenModuleTeleporters";
        scope = 2;
        isGlobal = 2;
        isTriggerActivated = 0;
        isDisposable = 0;
        icon = ICO(Module_Teleport);

        class Arguments {
            class Objects {
                displayName = "Objects";
                description = "Objects which will become teleporters, separated by commas if multiple. Can also sync objects to module";
                typeName = "STRING";
                defaultValue = "";
            };
        };
        class ModuleDescription {
            description = "This module makes all listed objects into teleporters. Use multiple modules to seperated teleport actions. Action names are defined by the name of the object";
        };
    };
    class MRB_spawnvehicle_module: ACE_Module {
        author = "3d MRB";
        displayName = "Spawn Menu";
        category = "MRB_missionModules";
        function = "MRB_fnc_EdenModuleSpawnMenu";
        scope = 2;
        isGlobal = 2;
        isTriggerActivated = 0;
        isDisposable = 0;
        icon = ICO(Module_SpawnMenu);

        class Arguments {
            class object {
                displayName = "Object";
                description = "Object to which the menu will be added, can also be a synchronized object";
                typeName = "STRING";
                defaultValue = "";
            };
            class zone {
                displayName = "Zone";
                description = "USE LAND_HELIPADEMPTY_F OBJECT!!!, Object where the vehicle will spawn via menu, can also be a synchronized object";
                typeName = "STRING";
                defaultValue = "";
            };
            class menu {
                displayName = "Menu";
                description = "Which menu will be used";
                typeName = "NUMBER";
                class values {
                    class air { name = "FOB SENTINEL SPAWN MENU"; value = 0;};
                    class ground { name = "GROUND VEHICLE SPAWN MENU"; value = 1;};
                    class helo { name = "USS WASP SPAWN MENU"; value = 2;};
                    class support { name = "SUPPORT VEHICLE SPAWN MENU"; value = 3;};
                };
            };
        };
        class ModuleDescription {
            description = "This module adds a spawn menu to the selected object, use 1 module per menu";
        };
    };

    class Fence_Ind;
    class Str_WeedBrown_Tall: Fence_Ind {
        scope = 1;
        model = "A3\plants_f\Clutter\c_StrWeedBrownTall_group.p3d";
        accuracy = 0.3;
        vehicleClass = "Sniper_Blind";
    };
    class Str_WeedGreen_Tall: Str_WeedBrown_Tall {
        model = "A3\plants_f\Clutter\c_StrWeedGreenTall.p3d";
    };
    class Str_Grass_Dry: Str_WeedBrown_Tall {
        model = "A3\plants_f\Clutter\c_StrGrassDry.p3d";
    };
    class Plant_Germander_Group: Str_WeedBrown_Tall {
        model = "A3\plants_f\Clutter\c_StrPlantGermader_group.p3d";
    };
    class Plant_Green_Shrub: Str_WeedBrown_Tall {
        model = "A3\plants_f\Clutter\c_StrPlantGreenShrub.p3d";
    };
};

class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class MRB_SniperBlinds: ACE_ItemCore {
        scope = 2;
        author = "3d MRB";
        picture = ICO(sniper_blinds);
        displayName = "Sniper Blinds";
        descriptionShort = "Sniper blinds for concealment/ camouflage.";
        descriptionUse = "Sniper blinds for concealment/ camouflage.";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 30;
        };
    };
};

#define MAG(MAG,DNAME) class MAG; \
class DOUBLES(MAG,training): MAG { \
    displayName = DNAME; \
    scope = 1; \
    tracersEvery = 5; \
}

class CfgMagazines {
    MAG(30Rnd_65x39_caseless_mag,"[Training] 6.5 mm 30Rnd STANAG Mag");
    MAG(30Rnd_65x39_caseless_green,"[Training] 6.5mm 30Rnd Caseless Mag");
    MAG(30Rnd_556x45_Stanag,"[Training] 5.56 mm 30rnd STANAG Reload Tracer (Yellow) Mag");
    MAG(100Rnd_65x39_caseless_mag,"[Training] 6.5 mm 100Rnd Mag");
    MAG(200Rnd_65x39_cased_Box,"[Training] 6.5 mm 200Rnd Belt");
    MAG(200Rnd_65x39_Belt,"[Training] 6.5 mm 200Rnd Belt Case");
    MAG(150Rnd_93x64_Mag,"[Training] 9.3mm 150Rnd Belt");
    MAG(130Rnd_338_Mag,"[Training] .338 NM 130Rnd Belt");
    MAG(30Rnd_45ACP_Mag_SMG_01,"[Training] .45 ACP 30Rnd Vermin Mag");
    MAG(150Rnd_762x51_Box,"[Training] 7.62 mm 150Rnd Box");
    MAG(150Rnd_762x54_Box,"[Training] 7.62 mm 150Rnd Box");
    MAG(30Rnd_9x21_Mag,"[Training] 9 mm 30Rnd Mag");
    MAG(16Rnd_9x21_Mag,"[Training] 9 mm 16Rnd Mag");
    MAG(30Rnd_9x21_Mag_SMG_02,"[Training] 9 mm 30Rnd Mag");
    MAG(30Rnd_580x42_Mag_F,"[Training] 5.8 mm 30Rnd Mag");
    MAG(100Rnd_580x42_Mag_F,"[Training] 5.8 mm 100Rnd Mag");
    MAG(150Rnd_556x45_Drum_Mag_F,"[Training] 5.56 mm 150Rnd Mag");
    MAG(30Rnd_762x39_Mag_F,"[Training] 7.62 mm 30Rnd Reload Tracer (Yellow) Mag");
    MAG(30Rnd_545x39_Mag_F,"[Training] 5.45 mm 30Rnd Reload Tracer (Yellow) Mag");
    MAG(200Rnd_556x45_Box_F,"[Training] 5.56 mm 200Rnd Reload Tracer (Yellow) Box");
    MAG(30Rnd_556x45_Stanag_green,"[Training] 5.56 mm 30rnd STANAG Reload Tracer (Green) Mag");
    MAG(30Rnd_556x45_Stanag_red,"[Training] 5.56 mm 30rnd STANAG Reload Tracer (Red) Mag");
    MAG(30Rnd_762x39_Mag_Green_F,"[Training] 7.62 mm 30Rnd Reload Tracer (Green) Mag");
    MAG(rhs_30Rnd_545x39_AK,"[Training] 5N7 30Rnd AK-74 Mag");
    MAG(rhs_30Rnd_762x39mm,"[Training] 57-N-231 30Rnd AK Mag");
    MAG(rhs_45Rnd_545x39_AK,"[Training] 5N7 45Rnd RPK-74 Mag");
    MAG(rhs_30Rnd_545x39_7N10_AK,"[Training] 7N10 30Rnd AK-74 Mag");
    MAG(rhs_30Rnd_545x39_7N22_AK,"[Training] 7N22 30Rnd AK-74 Mag");
    MAG(rhs_30Rnd_762x39mm_89,"[Training] 57-N-231(89) 30Rnd AK Mag");
    MAG(rhs_45Rnd_545x39_7N10_AK,"[Training] 7N10 45Rnd RPK-74 Mag");
    MAG(rhs_45Rnd_545x39_7N22_AK,"[Training] 7N22 45Rnd RPK-74 Mag");
    MAG(rhs_mag_762x54mm_100,"[Training] 7.62x54mm");
    MAG(rhs_100Rnd_762x54mmR,"[Training] 57-N-323S 100Rnd PKM Box");
    MAG(rhs_mag_30Rnd_556x45_Mk262_Stanag,"[Training] 5.56mm 30rnd Mk262");
    MAG(rhs_mag_30Rnd_556x45_Mk318_Stanag,"[Training] 5.56mm 30rnd Mk318");
    MAG(rhs_mag_762x51_M240,"[Training] 100rnd M240");
    MAG(rhsusf_100Rnd_556x45_soft_pouch,"[Training] 5.56mm M855A1 (Mixed) 100rnd Pouch");
    MAG(rhsusf_100Rnd_556x45_M200_soft_pouch,"[Training] 5.56mm M200 100rnd Pouch");
    MAG(rhsusf_100Rnd_762x51,"[Training] 7.62mm M80 Ball 100rnd Belt");
    MAG(rhsusf_200Rnd_556x45_soft_pouch,"[Training] 5.56mm M855A1 200rnd Pouch");
    MAG(rhsusf_100Rnd_762x51_m80a1epr,"[Training] 7.62mm M80A1EPR 100rnd Belt");
    MAG(rhsusf_100Rnd_762x51_m993,"[Training] 7.62mm M993 100Rnd Belt");
    MAG(rhsusf_50Rnd_762x51,"[Training] 7.62mm M80 Ball 50rnd Belt");
    MAG(ACE_100Rnd_65x39_caseless_mag_Tracer_Dim,"[Training] 6.5mm 100Rnd Tracer IR-DIM Mag");
    MAG(ACE_200Rnd_65x39_cased_Box_Tracer_Dim,"[Training] 6.5mm 200Rnd Tracer IR-DIM Belt");
    MAG(ACE_30Rnd_65x39_caseless_mag_Tracer_Dim,"[Training] 6.5mm 30Rnd Tracer IR-DIM Mag");
    MAG(ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim,"[Training] 6.5mm 30Rnd Tracer IR-DIM Mag");
    MAG(ACE_30Rnd_556x45_Stanag_M995_AP_mag,"[Training] 5.56mm 30Rnd Mag (M995 AP)");
    MAG(ACE_30Rnd_556x45_Stanag_Mk262_mag,"[Training] 5.56mm 30Rnd Mag (Mk262)");
    MAG(ACE_30Rnd_556x45_Stanag_Mk318_mag,"[Training] 5.56mm 30Rnd Mag (Mk318)");
    MAG(ACE_30Rnd_556x45_Stanag_Tracer_Dim,"[Training] 5.56mm 30rnd Tracer IR-DIM Mag");
    MAG(ACE_20Rnd_762x51_Mag_Tracer,"[Training] 7.62mm 20rnd Tracer Mag");
    MAG(ACE_20Rnd_762x51_Mag_Tracer_Dim,"[Training] 7.62mm 20rnd Tracer IR-DIM Mag");
    MAG(ACE_20Rnd_762x51_Mag_SD,"[Training] 7.62mm 20Rnd SD Mag");
    MAG(ACE_20Rnd_762x51_Mk316_Mod_0_Mag,"[Training] 7.62mm 20Rnd Mag (Mk316 Mod 0)");
    MAG(ACE_20Rnd_762x51_Mk319_Mod_0_Mag,"[Training] 7.62mm 20Rnd Mag (Mk319 Mod 0)");
    MAG(ACE_20Rnd_762x51_M993_AP_Mag,"[Training] 7.62mm 20Rnd Mag (M993 AP)");
    MAG(ACE_20Rnd_762x67_Mk248_Mod_0_Mag,"[Training] 7.62mm 20Rnd Mag (Mk248 Mod 0)");
    MAG(ACE_20Rnd_762x67_Mk248_Mod_1_Mag,"[Training] 7.62mm 20Rnd Mag (Mk248 Mod 1)");
    MAG(ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag,"[Training] 7.62mm 20Rnd Mag (Berger Hybrid OTM)");
    MAG(ACE_30Rnd_65x47_Scenar_mag,"[Training] 6.5x47mm 30Rnd Mag (HPBT Scenar)");
    MAG(ACE_30Rnd_65_Creedmor_mag,"[Training] 6.5mm Creedmor 30Rnd Mag");
    MAG(ACE_10Rnd_338_API526_Mag,"[Training] .338 10Rnd Mag (API526)");
};

#include "gui_resources.hpp"
class RscPicture;
class RscTitles {
    class RscVehicleCargoIcon {
        idd = -1;
        duration = 43200;
        onLoad = "uiNamespace setVariable ['MRB_VCI_Title', _this select 0]";
        CONTROLS {
            PICTURE(CargoIcon) {
                idc = 10;
                SZX(0.108)
                SZY(0.108)
                SZW(0.012)
                SZH(0.025)
            };
        };
    };
	
	class SplashArma3
	{	
		idd=-1;
		movingEnable=0;
		duration=3;
		fadein=0;
		fadeout=0;
		name="3d Marine Raider Battalion";
		controls[]=
		{
			"Picture"
		};
		class Picture: RscPicture
		{
			idc=1200;
			text="\3d_Functions\data\logoMRB.paa";
			x="0.5 - 10 * 		(0.01875 * SafezoneH)";
			y="0.5 - 10 * 		(0.025 * SafezoneH)";
			w="16 * 		(0.01875 * SafezoneH)";
			h="16 * 		(0.025 * SafezoneH)";
		};
	};
	
	class SplashArma3Apex: SplashArma3
	{
		class Picture: Picture
		{
			text="\3d_Functions\data\logoMRB.paa";
		};
	};
};

DIALOG(List) {
    CONTROLS {
        IGUIBACK {
            SZX(0.355)
            SZY(0.38)
            SZW(0.277)
            SZH(0.214)
        };
        TITLE_BAR {
            SZX(0.355)
            SZY(0.349)
            SZW(0.277)
        };
        LIST(Items) {
            idc = 13;
            SZX(0.365)
            SZY(0.392)
            SZW(0.257)
            SZH(0.192)
        };
        BUTTON_MENU(Okay) {
            idc = 14;
            SZX(0.567)
            SZY(0.597)
        };
        BUTTON_MENU_CANCEL {
            SZX(0.355)
            SZY(0.597)
        };
    };
};

DIALOG(CS) {
    CONTROLS {
        IGUIBACK {
            SZX(0.395)
            SZY(0.457)
            SZW(0.217)
            SZH(0.086)
        };
        TITLE_BAR {
            text = "CALL SIGN SELECTION MENU";
            SZX(0.395)
            SZY(0.426)
            SZW(0.217)
        };
        TEXT(CallSign) {
            idc = 13;
            text = "Call Sign";
            tooltip = "Call sign of your group for BFT";
            SZX(0.405)
            SZY(0.469)
            SZW(0.088)
        };
        EDIT(CallSign) {
            idc = 14;
            SZX(0.496)
            SZY(0.469)
            SZW(0.106)
        };
        FRAME(CallSign) {
            idc = 15;
            SZX(0.496)
            SZY(0.469)
            SZW(0.106)
        };
        TEXT(SaveCallSign) {
            idc = 16;
            text = "Save Call Sign";
            tooltip = "Save and apply this call sign in new sessions?";
            SZX(0.405)
            SZY(0.503)
            SZW(0.088)
        };
        CHECKBOX(SaveCallSign) {
            idc = 17;
            SZX(0.496)
            SZY(0.503)
        };
        BUTTON_MENU(Apply) {
            idc = 18;
            text = "APPLY";
            action = QUOTE(call FNC(setCallSign));
            SZX(0.547)
            SZY(0.546)
        };
        BUTTON_MENU_CANCEL {
            SZX(0.395)
            SZY(0.546)
        };
    };
};

class IGUIBack;
class RscFrame;
class RscListBox;
class RscButtonMenuCancel;
class RscStandardDisplay;
class RscPictureKeepAspect;
class RscText;
#include "splash.hpp"
class RscDisplayMain: RscStandardDisplay
{
	class Spotlight
	{
		class Server1
		{
			//text = "[OFFICIAL] 3d Marine Raider Battalion Server #1"; // Text displayed on the square button, converted to upper-case
			//textIsQuote = 0; // 1 to add quotation marks around the text
			//picture = "\3d_Functions\data\logoOverMRB.paa"; // Square picture, ideally 512x512
			//video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
			//action = "0 = [_this, 'your.domain.name', '2302', 'yourpasshere'] execVM '\amp_spotlight\joinServer.sqf';";
			//action = "0 = [_this, '104.243.34.34', '2302', '3draider'] execVM '\3d_Functions\functions\joinServer.sqf';";
			//actionText = "Join server: [OFFICIAL] 3d Marine Raider Battalion Server #1"; // Text displayed in top left corner of on-hover white frame
			//condition = "true"; // Condition for showing the spotlight
		};
		
		class Server2
		{
			//text = "[OFFICIAL] 3d Marine Raider Battalion Server #2"; // Text displayed on the square button, converted to upper-case
			//textIsQuote = 0; // 1 to add quotation marks around the text
			//picture = "\3d_Functions\data\logoOverMRB.paa"; // Square picture, ideally 512x512
			//video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
			//action = "0 = [_this, 'your.domain.name', '2302', 'yourpasshere'] execVM '\amp_spotlight\joinServer.sqf';";
			//action = "0 = [_this, '104.243.34.34', '2312', '3draider'] execVM '\3d_Functions\functions\joinServer.sqf';";
			//actionText = "Join server: [OFFICIAL] 3d Marine Raider Battalion Server #2"; // Text displayed in top left corner of on-hover white frame
			//condition = "true"; // Condition for showing the spotlight
		};
	};
	
	class controls
	{
		class Logo: RscPictureKeepAspect
		{
			text="\3d_Functions\data\logoMRB.paa";
			tooltip="";
			x="0.4425 - 	5 * 	(pixelW * pixelGrid * 2)";
			y="safezoneY + (3 - 0.5 * 	5) * 	(pixelH * pixelGrid * 2)";
			w="3 * 	5 * 	(pixelW * pixelGrid * 2)";
			h="2 * 	5 * 	(pixelH * pixelGrid * 2)";
			onButtonClick="";
			onKillFocus="";
			onSetFocus="";
			onLoad="";
		};
		class LogoApex: Logo
		{
			show=0;
			text="\3d_Functions\data\logoMRB.paa";
			onLoad="";
		};
	};
};

class MRB_DialogInsignia {
    idd = 654655;
    name = "MRB_DialogInsignia";
    enableSimulation = 1;

    class Controls {
        class TextTitlebar: RscText {
            idc = 100;
            text = "[3d MRB] INSIGNIA SELECTION MENU";
            x = 0.263563 * safezoneW + safezoneX;
            y = 0.29 * safezoneH + safezoneY;
            w = 0.472873 * safezoneW;
            h = 0.028 * safezoneH;
            colorBackground[] = {"(profileNamespace getVariable ['GUI_BCG_RGB_R', 0.69])","(profileNamespace getVariable ['GUI_BCG_RGB_G', 0.75])","(profileNamespace getVariable ['GUI_BCG_RGB_B', 0.5])",1};
        };
        class BackgroundIGUIBack: IGUIBack {
            idc = 110;
            x = 0.263563 * safezoneW + safezoneX;
            y = 0.318 * safezoneH + safezoneY;
            w = 0.472873 * safezoneW;
            h = 0.364 * safezoneH;
            colorBackground[] = {0,0,0,0.3};
        };
        class FrameList: RscFrame {
            idc = 120;
            x = 0.283266 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.210166 * safezoneW;
            h = 0.308 * safezoneH;
        };
        class ListInsignia: RscListBox {
            idc = 130;
            x = 0.283266 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.210166 * safezoneW;
            h = 0.308 * safezoneH;
        };
        class PictureInsignia: RscPicture {
            idc = 140;
            x = 0.528304 * safezoneW + safezoneX;
            y = 0.346 * safezoneH + safezoneY;
            w = 0.17326 * safezoneW;
            h = 0.308 * safezoneH;
        };
        class ButtonClose: RscButtonMenuCancel {
            text = "$STR_DISP_OPT_CLOSE";
            x = 0.664192 * safezoneW + safezoneX;
            y = 0.682 * safezoneH + safezoneY;
            w = 0.0722445 * safezoneW;
            h = 0.028 * safezoneH;
        };
    };
};
