class cfgVehicles {
    #include "\3d_Assets\cfgVehicles\cfgAir.hpp"
    #include "\3d_Assets\cfgVehicles\cfgBackpacks.hpp"
    #include "\3d_Assets\cfgVehicles\cfgBoats.hpp"
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
/*
    class MRB_IR_Strobe_Effect: ACE_IR_Strobe_Effect {
        class NVGMarker: NVGMarker {
            brightness = 0.8;
        };
        brightness = 20;
    };
*/
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
    class Air;
    class Helicopter: Air {
        class ACE_Actions {
            class ACE_MainActions {};
        };
    };
    class Helicopter_Base_F: Helicopter {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {};
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
            /*class _xx_ACE_Vector {
                name = "ACE_Vector";
                count = "50";
            };
            class _xx_ACE_MX2A {
                name = "ACE_MX2A";
                count = "50";
            };
            class _xx_ACE_key_master {
                name = "ACE_key_master";
                count = "5";
            };*/
            class _xx_ACE_key_lockpick {
                name = "ACE_key_lockpick";
                count = "75";
            };
            class _xx_ACE_key_west {
                name = "ACE_key_west";
                count = "75";
            };
            /*class _xx_lerca_1200_black {
                name = "lerca_1200_black";
                count = "50";
            };
            class _xx_lerca_1200_tan {
                name = "lerca_1200_tan";
                count = "50";
            };
            class _xx_Laserdesignator {
                name = "Laserdesignator";
                count = "5";
            };*/
            class _xx_ACRE_PRC152 {
                name = "ACRE_PRC152";
                count = "100";
            };
            class _xx_ACRE_PRC117F {
                name = "ACRE_PRC117F";
                count = "20";
            };/*
            class _xx_ItemSMGR {
                name = "ItemSMGR";
                count = "10";
            };*/
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
    class Reammobox_F;
    class MRB_Equipment_Crate: ReammoBox_F {
        author = "3d MRB";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Equipment Crate";
        editorCategory = "3d_Objects";
        editorSubcategory = "3d_Crates";
        ace_cargo_canLoad = 1;
        ace_cargo_size = 2;
        //Values from Box_NATO_Equip_F
        mapSize = 1.25;
        _generalMacro = "MRB_Supply_Crate";
        model = "\A3\Supplies_F_Exp\Ammoboxes\Equipment_Box_F.p3d";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Equip_F.jpg";
        icon = "\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
        DLC = "Expansion";
        maximumLoad = 7000;
        hiddenSelections[] = {"camo","camo_signs"};
        hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa","\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_ca.paa"};
        class EventHandlers {
            Init = "[_this select 0] execVM '\3d_Assets\arsenal\equipment.sqf';";
        };
    };
    class MRB_CNR_Crate: ReammoBox_F {
        author = "3d MRB";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Combat Net Radio Crate";
        editorCategory = "3d_Objects";
        editorSubcategory = "3d_Crates";
        ace_cargo_canLoad = 1;
        ace_cargo_size = 2;
        mapSize = 1.25;
        _generalMacro = "MRB_Supply_Crate";
        model = "\A3\Supplies_F_Exp\Ammoboxes\Equipment_Box_F.p3d";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Equip_F.jpg";
        icon = "\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
        DLC = "Expansion";
        maximumLoad = 7000;
        hiddenSelections[] = {"camo","camo_signs"};
        hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa","\3d_Assets\data\crate_cnr_CA.paa"};
        class TransportItems {
            class _xx_ACRE_PRC152 {
                name = "ACRE_PRC152";
                count = 100;
            };
            class _xx_ACRE_PRC117F {
                count = 20;
                name = "ACRE_PRC117F";
            };
        };
    };
    class MRB_Supply_Crate: ReammoBox_F {
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
        model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\C_T_supplyCrate_F.jpg";
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
	class B_CargoNet_01_ammo_F;
    class MRB_PersistenceCrate: B_CargoNet_01_ammo_F {
        author = "3d MRB";
        displayName = "Persistence Crate";
        editorCategory = "3d_Objects";
        editorSubcategory = "3d_Crates";

        class TransportItems {};
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportBackPacks {};
    };
};
