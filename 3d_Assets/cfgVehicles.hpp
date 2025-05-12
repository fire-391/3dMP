class cfgVehicles {
    class Air;
    class Helicopter: Air 
	{
        class ACE_Actions {
        class ACE_MainActions {};
        };
		class ViewPilot;
    };
	class Helicopter_Base_F: Helicopter 
	{
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {};
        };
		class Turrets;
    };
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class pilotCamera;
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
	};
	class MELB_base: Helicopter_Base_H
	{
		class UserActions;
		class Turrets: Turrets
		{
			class CopilotTurret : CopilotTurret
			{
				gunnerCompartments = "Compartment1";
				body = "obsTurret";
				gun = "obsGun";
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";
				turretInfoType = "Rsc_MELB_Turret_UnitInfo";
				memoryPointGunnerOptics = "commanderview";
				stabilizedInAxes = 3;
				minElev = -90;
				maxElev = 45;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				minFov = 0.25;
				maxFov = 0.9;
				initFov = 0.75;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				memoryPointsGetInGunnerPrecise = "pos gunner";
				gunnerUsesPilotView = 0;
				gunBeg = "commanderview";
				gunEnd = "laserstart";
				memoryPointGun = "commanderview";
				discretedistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discretedistanceinitindex = 3;
				weapons[] = {"Laserdesignator_MELB","LWIRCM_MELB"};
				magazines[] = {"Laserbatteries","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB","LWIRCM_Magazine_MELB"};
				inGunnerMayFire = 1;
				outGunnerMayFire = 1;
				primaryGunner = 1;
				gunnerAction = "Copilot_MELB";
				gunnerInAction = "Copilot_MELB";
				usePreciseGetInAction = 1;
				precisegetinout = 0;
				gunnerGetInAction = "Chopperlight_R_In_H";
				gunnergetOutAction = "GetOutLow";
				gunnerOpticsModel = "";
				LockDetectionSystem = 8;
				incomingMissileDetectionSystem = "8 + 16";
				TurretCanSee = "1+2+4+8";
				gunnerHasFlares = 1;
				usepip = 1;
				class ViewGunner
				{
					minAngleX = -65;
					maxAngleX = 85;
					initAngleX = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initAngleY = 0;
					minFov = 0.25;
					maxFov = 0.9;
					initFov = 0.9;
				};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "----";
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 0;
						initAngleY = 0;
						minAngleY = 0;
						maxAngleY = 0;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						directionStabilized = 1;
						horizontallyStabilized = 1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0};
						gunnerOpticsModel = "melb\data\optics\melb_flir_wf.p3d";
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
						gunnerOpticsEffect[] = {"TankCommanderOptics2"};
					};
					class WideT2: Wide
					{
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "melb\data\optics\melb_flir_w2.p3d";
					};
					class MediumT: Wide
					{
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						gunnerOpticsModel = "melb\data\optics\melb_flir_m.p3d";
					};
					class NarrowT: Wide
					{
						initFov = 0.022;
						minFov = 0.022;
						maxFov = 0.022;
						gunnerOpticsModel = "melb\data\optics\melb_flir_n.p3d";
					};
					class NarrowT2: Wide
					{
						initFov = 0.0092;
						minFov = 0.0092;
						maxFov = 0.0092;
						gunnerOpticsModel = "melb\data\optics\melb_flir_n2.p3d";
					};
					};
				soundServo[] = {"",0.01,1,30};
				lodTurnedOut = 1100;
				showAllTargets = 0;
			};
		};
			class ViewPilot: ViewPilot
		{
			maxFov = 0.9;
		};
		memoryPointDriverOptics = "pos pilot dir";
		class pilotCamera {
			stabilizedInAxes = 3;
			minElev = -45;
			maxElev = 90;
			initElev = 0;
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
			gunBeg = "axis_flir";
			gunEnd = "laserstart";
			memorypointDriverOptics = "axis_flir";
			memoryPointGun = "axis_flir";
			gunnerOpticsModel = "";
			body = "";
			gun = "";
			animationSourceBody = "";
			animationSourceGun = "";
			turretInfoType = "Rsc_MELB_Turret_UnitInfo";
			discretedistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
			discretedistanceinitindex = 3;
			weapons[] = {"Laserdesignator_MELB"};
			magazines[] = {"Laserbatteries"};
			class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "Pilot_Camera";
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 0;
						initAngleY = 0;
						minAngleY = 0;
						maxAngleY = 0;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0};
						directionStabilized = 1;
						horizontallystabilized =1;
						gunnerOpticsModel = "melb\data\optics\melb_flir_wf.p3d";
						opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
						gunnerOpticsEffect[] = {"TankCommanderOptics2"};
					};
					class WideT2: Wide
					{
						initFov = 0.2;
						minFov = 0.2;
						maxFov = 0.2;
						gunnerOpticsModel = "melb\data\optics\melb_flir_w2.p3d";
					};
					class MediumT: Wide
					{
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						gunnerOpticsModel = "melb\data\optics\melb_flir_m.p3d";
					};
					class NarrowT: Wide
					{
						initFov = 0.022;
						minFov = 0.022;
						maxFov = 0.022;
						gunnerOpticsModel = "melb\data\optics\melb_flir_n.p3d";
					};
					class NarrowT2: Wide
					{
						initFov = 0.0092;
						minFov = 0.0092;
						maxFov = 0.0092;
						gunnerOpticsModel = "melb\data\optics\melb_flir_n2.p3d";
					};
				};
		};
	};
   class UAV_01_base_F: Helicopter_Base_F {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                class MRB_PickUp_UAV {
                    displayName = "PickUp UAV";
                    distance = 4;
                    condition = "!('MRB_UAV_Item' in (backpackItems ACE_player)) && ACE_player canAddItemToBackpack 'MRB_UAV_Item'";
                    statement = "[_target, _player] call MRB_fnc_pickupUAV";
                    showDisabled = 0;
                    priority = 1.255;
                };
            };
        };
    };
	#include "\3d_Assets\cfgVehicles\cfgAir.hpp"
    #include "\3d_Assets\cfgVehicles\cfgBackpacks.hpp"
    #include "\3d_Assets\cfgVehicles\cfgGround.hpp"
    #include "\3d_Assets\cfgVehicles\cfgUnits.hpp"
	class Land_Destroyer_01_hull_base_F;
    class Land_Destroyer_01_hull_05_F: Land_Destroyer_01_hull_base_F
	{
		editorPreview="\A3\EditorPreviews_F_Destroyer\Data\CfgVehicles\Destroyer_01_hull5.jpg";
		displayName="$STR_A3_Land_Destroyer_01_hull_05_F";
		model="\A3\Boat_F_Destroyer\Destroyer_01\Destroyer_01_hull_05_F.p3d";
		hiddenSelections[]=
		{
			"shipNameTag"
		};
		hiddenSelectionsTextures[]=
		{
			"\3d_Assets\data\Destroyer_01_tag_01_co.paa"
		};
		ladders[]=
		{

			{
				"Ladder_1_start",
				"Ladder_1_end"
			},

			{
				"Ladder_2_start",
				"Ladder_2_end"
			}
		};
	};
	class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class MRB_Deploy_UAV {
                    displayName = "Deploy UAV";
                    condition = "'MRB_UAV_Item' in (backpackItems ACE_player)";
                    statement = "[_player] call MRB_fnc_deployUAV";
                    exceptions[] = {};
                    showDisabled = 1;
                    priority = 4;
                };

                class ACE_TacticalLadders2 {
                    displayName = "$STR_ace_tacticalladder_Deploy";
                    condition = "'ACE_TacticalLadder_Item' in (backpackItems ACE_player)";
                    statement = "[_player] call MRB_fnc_deployTL";
                    exceptions[] = {};
                    showDisabled = 1;
                    priority = 4;
                };
            };
        };
    };

    class All;
    class ACE_IR_Strobe_Effect: All {
        class NVGMarker;
    };
    class Item_Base_F;
    class ACE_Item_Tactical_Ladder: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_ace_tacticalladder_DisplayName";
        vehicleClass = "Items";
        class TransportItems {
            class _xx_ACE_TacticalLadder_Item {
                name = "ACE_TacticalLadder_Item";
                count = 1;
            };
        };
    };
    class House;
    class ACE_TacticalLadder: House {
        class ACE_Actions {
            class ACE_MainActions {
                class ACE_PickUp2 {
                    selection = "";
                    displayName = "$STR_ace_tacticalladder_Pickup";
                    distance = 4;
                    condition = "(ACE_player canAddItemToBackpack 'ACE_TacticalLadder_Item')";
                    statement = "[_target,_player] call MRB_fnc_pickupTL";
                    showDisabled = 0;
                    exceptions[] = {};
                    priority = 5;
                };
            };
        };
    };
    class UAV_Item_MRB: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV";
        editorCategory="EdCat_Equipment";
        editorSubcategory="EdSubcat_InventoryItems";
        vehicleClass = "Items";
        class TransportItems {
            class MRB_UAV_Item {
                name = "MRB_UAV_Item";
                count = 1;
            };
        };
    };
    class CargoNet_01_base_F;
    class MRB_Arsenal_Crate: CargoNet_01_base_F {
        author = "3d MRB";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Arsenal Crate";
        editorCategory = "3d_Objects";
        editorSubcategory = "3d_Crates";

        ace_cargo_canLoad = 0;
        // Values from CargoNet_01_ammo_base_F
        model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_ammo_F.p3d";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_CargoNet_01_ammo_F.jpg";
        DLC = "Heli";
        maximumLoad = 22000;
        transportMaxWeapons = 100;
        transportMaxMagazines = 300;
        hiddenSelections[] = {"Camo_1","Camo_2"};
        hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Data\AmmoBox_CO.paa","\A3\Weapons_F\Ammoboxes\Data\AmmoBox_signs_CA.paa"};

        class EventHandlers {
            init = "[_this select 0] execVM '\3d_Assets\arsenal\fixed_arsenal.sqf';";
        };
        //Content
        class TransportItems {
            class _xx_ACE_key_lockpick {
                name = "ACE_key_lockpick";
                count = "75";
            };
            class _xx_ACE_key_west {
                name = "ACE_key_west";
                count = "75";
            };
            class _xx_ACRE_PRC152 {
                name = "ACRE_PRC152";
                count = "100";
            };
            class _xx_ACRE_PRC117F {
                name = "ACRE_PRC117F";
                count = "20";
            };
        };
        class TransportMagazines {
            class _xx_Laserbatteries {
                magazine = "Laserbatteries";
                count = "10";
            };
            class _xx_ACE_SpareBarrel {
                magazine = "ACE_SpareBarrel";
                count = "10";
            };
        };
    };
    class MRB_Full_Arsenal_Crate: MRB_Arsenal_Crate {
        author = "3d MRB";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Full Arsenal Crate";
        class EventHandlers {
            init = "[_this select 0] execVM '\3d_Assets\arsenal\full_arsenal.sqf';";
        };
    };
    class MRB_FTX_Arsenal_Crate: MRB_Arsenal_Crate {
        author = "3d MRB";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "FTX Arsenal Crate";
        class EventHandlers {
            init = "[_this select 0] execVM '\3d_Assets\arsenal\ftx_arsenal.sqf';";
        };
    };
    class CargoNet_01_box_F;
    class MRB_Supply_Crate: CargoNet_01_box_F {
        author = "3d MRB";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Supply Crate";
        editorCategory = "3d_Objects";
        editorSubcategory = "3d_Crates";
        ace_cargo_canLoad = 1;
        ace_cargo_size = 4;
        mapSize = 1.58;
        model = "\A3\Supplies_F_Heli\CargoNets\CargoNet_01_box_F.p3d";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\CargoNet_01_box_F.jpg";
        maximumLoad = 5000;
        supplyRadius = -1;
        memoryPointSupply = "doplnovani";
        slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
        class EventHandlers {
            Init = "[_this select 0] execVM '\3d_Assets\arsenal\supply_crate.sqf';";
        };
    };
    class B_Slingload_01_Ammo_F;
    class MRB_Ammunition_Container: B_Slingload_01_Ammo_F {
        author = "3d MRB";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Aircraft Ammunition Container";
        editorCategory = "3d_Objects";
        editorSubcategory = "3d_Containers";
    };
    class B_Slingload_01_Fuel_F;
    class MRB_Fuel_Container: B_Slingload_01_Fuel_F {
        author = "3d MRB";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Aircraft Fuel Container";
        editorCategory = "3d_Objects";
        editorSubcategory = "3d_Containers";
    };
};
