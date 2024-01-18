	class rhsusf_mrzr_base;
	class MRB_MRZR_Tan: rhsusf_mrzr_base {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "MRZR 4 (Tan)";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Vehicles";
		crew = "MRB_Element_CSO";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camomerged"};
		hiddenSelectionsTextures[] = {
			"\rhsusf\addons\rhsusf_mrzr\data\blue_tan_co.paa",
			"\rhsusf\addons\rhsusf_mrzr\data\yel_tan_co.paa",
			"\rhsusf\addons\rhsusf_mrzr\data\red_tan_co.paa",
			"\rhsusf\addons\rhsusf_mrzr\data\grn_tan_co.paa",
			"\rhsusf\addons\rhsusf_mrzr\data\merged\orng_tan_co.paa"
		};
		class TransportMagazines {
			class _xx_SmokeShell {
				count = 0;
				magazine = "SmokeShell";
			};
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				count = 20;
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			};
			class _xx_rhs_200rnd_556x45_M_SAW {
				count = 0;
				magazine = "rhs_200rnd_556x45_M_SAW";
			};
			class _xx_100Rnd_65x39_caseless_mag {
				count = 0;
				magazine = "100Rnd_65x39_caseless_mag";
			};
			class _xx_16Rnd_9x21_Mag {
				count = 0;
				magazine = "16Rnd_9x21_Mag";
			};
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 0;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
			};
			class _xx_30Rnd_65x39_caseless_mag {
				count = 0;
				magazine = "30Rnd_65x39_caseless_mag";
			};
			class _xx_HandGrenade {
				count = 0;
				magazine = "HandGrenade";
			};
			class _xx_NLAW_F {
				count = 0;
				magazine = "NLAW_F";
			};
			class _xx_SmokeShellBlue {
				count = 0;
				magazine = "SmokeShellBlue";
			};
			class _xx_SmokeShellGreen {
				count = 0;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellOrange {
				count = 0;
				magazine = "SmokeShellOrange";
			};
		};
		class TransportItems {
			class _xx_FirstAidKit {
				count = 0;
				name = "FirstAidKit";
			};
			class _xx_ACE_earplugs {
				name = "ACE_earplugs";
				count = 4;
			};
			class _xx_toolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACRE_PRC152 {
				name = "ACRE_PRC152";
				count = 2;
			};
		};
		class TransportWeapons {
			class _xx_arifle_MX_F {
				weapon = "arifle_MX_F";
				count = 0;
			};
		};
		class TransportBackpacks {
			class _xx_rhsusf_falconii {
				backpack = "rhsusf_falconii";
				count = 0;
			};
		};
	};
	class MRB_MRZR_Olive: MRB_MRZR_Tan {
		displayname = "MRZR 4 (Olive)";
		hiddenSelectionsTextures[] = {
			"\rhsusf\addons\rhsusf_mrzr\data\blue_grn_co.paa",
			"\rhsusf\addons\rhsusf_mrzr\data\yel_grn_co.paa",
			"\rhsusf\addons\rhsusf_mrzr\data\red_grn_co.paa",
			"\rhsusf\addons\rhsusf_mrzr\data\grn_grn_co.paa",
			"\rhsusf\addons\rhsusf_mrzr\data\merged\orng_grn_co.paa"
		};
	};
	class rhsusf_m998_w_4dr;
	class MRB_GMVR_Tan: rhsusf_m998_w_4dr {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "GMV-R (Tan)";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Vehicles";
		crew = "MRB_Element_CSO";
		class TransportBackpacks {
			class _xx_rhsusf_falconii {
				backpack = "rhsusf_falconii";
				count = 0;
			};
		};
		class TransportItems {
			class _xx_FirstAidKit {
				count = 0;
				name = "FirstAidKit";
			};
			class _xx_ACE_earplugs {
				name = "ACE_earplugs";
				count = 4;
			};
			class _xx_toolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACRE_PRC152 {
				name = "ACRE_PRC152";
				count = 2;
			};
		};
		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				count = 20;
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			};
			class _xx_rhs_mag_an_m8hc {
				count = 4;
				magazine = "rhs_mag_an_m8hc";
			};
			class _xx_rhs_mag_m18_green {
				count = 4;
				magazine = "rhs_mag_m18_green";
			};
			class _xx_rhs_mag_m18_red {
				count = 2;
				magazine = "rhs_mag_m18_red";
			};
			class _xx_rhs_mag_M441_HE {
				count = 5;
				magazine = "rhs_mag_M441_HE";
			};
			class _xx_rhs_mag_m67 {
				count = 0;
				magazine = "rhs_mag_m67";
			};
		};
		class EventHandlers {
			Init = "[_this select 0, ['Desert', 1], ['hide_middleTop', 1, 'hide_CIP', 1, 'hide_BFT', 1, 'Hide_A2Bumper', 1]] call BIS_fnc_initVehicle;";
		};
	};
	class MRB_GMVR_Olive: MRB_GMVR_Tan {
		author = "3d MRB";
		scope = 2;
		displayname = "GMV-R (Olive)";
		class EventHandlers {
			Init = "[_this select 0, ['Olive', 1], ['hide_middleTop', 1, 'hide_CIP', 1, 'hide_BFT', 1, 'Hide_A2Bumper', 1]] call BIS_fnc_initVehicle;";
		};
	};
	class rhsusf_m1025_w_m2;
	class MRB_GMVR_Tan_M2 : rhsusf_m1025_w_m2 {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "GMV-R M2 (Tan)";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Vehicles";
		crew = "MRB_Element_CSO";
		class TransportBackpacks {
			class _xx_rhsusf_falconii {
				backpack = "rhsusf_falconii";
				count = 0;
			};
		};
		class TransportItems {
			class _xx_FirstAidKit {
				count = 0;
				name = "FirstAidKit";
			};
			class _xx_ACE_earplugs {
				name = "ACE_earplugs";
				count = 4;
			};
			class _xx_toolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACRE_PRC152 {
				name = "ACRE_PRC152";
				count = 2;
			};
		};
		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				count = 20;
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			};
			class _xx_rhs_mag_an_m8hc {
				count = 0;
				magazine = "rhs_mag_an_m8hc";
			};
			class _xx_rhs_mag_m136_hedp {
				count = 0;
				magazine = "rhs_m136_hedp_mag";
			};
			class _xx_rhs_mag_m18_green {
				count = 0;
				magazine = "rhs_mag_m18_green";
			};
			class _xx_rhs_mag_m18_red {
				count = 0;
				magazine = "rhs_mag_m18_red";
			};
			class _xx_rhs_mag_M441_HE {
				count = 0;
				magazine = "rhs_mag_M441_HE";
			};
			class _xx_rhs_mag_M662_red {
				count = 0;
				magazine = "rhs_mag_M662_red";
			};
			class _xx_rhs_mag_m67 {
				count = 0;
				magazine = "rhs_mag_m67";
			};
			class _xx_rhs_mag_M714_white {
				count = 0;
				magazine = "rhs_mag_M714_white";
			};
			class _xx_rhsusf_100Rnd_556x45_soft_pouch {
				count = 0;
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
			};
		};
		class TransportWeapons {
			class _xx_rhs_weap_m4_carryhandle {
				count = 0;
				weapon = "rhs_weap_m4_carryhandle";
			};
			class _xx_rhs_weap_M136_hedp {
				count = 0;
				weapon = "rhs_weap_M136_hedp";
			};
		};
		class EventHandlers {
			Init = "[_this select 0, ['Desert', 1], ['hide_CIP', 1, 'hide_BFT', 1, 'Hide_A2Bumper', 1]] call BIS_fnc_initVehicle;";
		};
	};
	class MRB_GMVR_Olive_M2 : MRB_GMVR_Tan_M2 {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "GMV-R M2 (Olive)";
		class EventHandlers {
			Init = "[_this select 0, ['Olive', 1], ['hide_CIP', 1, 'hide_BFT', 1, 'Hide_A2Bumper', 1]] call BIS_fnc_initVehicle;";
		};
	};
	class rhsusf_m1025_w_Mk19;
	class MRB_GMVR_Tan_Mk19 : rhsusf_m1025_w_Mk19 {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "GMV-R Mk 19 (Tan)";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Vehicles";
		crew = "MRB_Element_CSO";
		typicalCargo[] = {"MRB_Element_CSO"};
		class TransportBackpacks {
			class _xx_rhsusf_falconii {
				backpack = "rhsusf_falconii";
				count = 0;
			};
		};
		class TransportItems {
			class _xx_FirstAidKit {
				count = 0;
				name = "FirstAidKit";
			};
			class _xx_ACE_earplugs {
				name = "ACE_earplugs";
				count = 4;
			};
			class _xx_toolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACRE_PRC152 {
				name = "ACRE_PRC152";
				count = 2;
			};
			class _xx_MRB_IR_Strobe_Item {
				count = 5;
				name = "MRB_IR_Strobe_Item";
			};
		};
		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				count = 40;
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			};
			class _xx_rhs_mag_an_m8hc {
				count = 5;
				magazine = "rhs_mag_an_m8hc";
			};
			class _xx_rhs_mag_m136_hedp {
				count = 5;
				magazine = "rhs_m136_hedp_mag";
			};
			class _xx_rhs_mag_m18_green {
				count = 0;
				magazine = "rhs_mag_m18_green";
			};
			class _xx_rhs_mag_m18_red {
				count = 0;
				magazine = "rhs_mag_m18_red";
			};
			class _xx_rhs_mag_M441_HE {
				count = 5;
				magazine = "rhs_mag_M441_HE";
			};
			class _xx_rhs_mag_M662_red {
				count = 0;
				magazine = "rhs_mag_M662_red";
			};
			class _xx_rhs_mag_m67 {
				count = 0;
				magazine = "rhs_mag_m67";
			};
			class _xx_rhs_mag_M714_white {
				count = 0;
				magazine = "rhs_mag_M714_white";
			};
			class _xx_rhsusf_100Rnd_556x45_soft_pouch {
				count = 2;
				magazine = "rhsusf_100Rnd_556x45_soft_pouch";
			};
		};
		class TransportWeapons {
			class _xx_rhs_weap_m4_carryhandle {
				count = 0;
				weapon = "rhs_weap_m4_carryhandle";
			};
			class _xx_rhs_weap_M136_hedp {
				count = 1;
				weapon = "rhs_weap_M136_hedp";
			};
		};
		class EventHandlers {
			Init = "[_this select 0, ['Desert', 1], ['hide_CIP', 1, 'hide_BFT', 1, 'Hide_A2Bumper', 1]] call BIS_fnc_initVehicle;";
		};
	};
	class MRB_GMVR_Olive_Mk19 : MRB_GMVR_Tan_Mk19 {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "GMV-R Mk 19 (Olive)";
		class EventHandlers {
			Init = "[_this select 0, ['Olive', 1], ['hide_CIP', 1, 'hide_BFT', 1, 'Hide_A2Bumper', 1]] call BIS_fnc_initVehicle;";
		};
	};
	class B_LSV_01_unarmed_F;
	class MRB_DAGOR_Tan : B_LSV_01_unarmed_F {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "DAGOR (Tan)";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Vehicles";
		crew = "MRB_Element_CSO";
		class TransportMagazines {
			class _xx_SmokeShell {
				count = 0;
				magazine = "SmokeShell";
			};
			class _xx_30Rnd_556x45_Stanag {
				count = 0;
				magazine = "30Rnd_556x45_Stanag";
			};
			class _xx_100Rnd_65x39_caseless_mag {
				count = 0;
				magazine = "100Rnd_65x39_caseless_mag";
			};
			class _xx_16Rnd_9x21_Mag {
				count = 0;
				magazine = "16Rnd_9x21_Mag";
			};
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 0;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
			};
			class _xx_30Rnd_65x39_caseless_mag {
				count = 0;
				magazine = "30Rnd_65x39_caseless_mag";
			};
			class _xx_HandGrenade {
				count = 0;
				magazine = "HandGrenade";
			};
			class _xx_NLAW_F {
				count = 0;
				magazine = "NLAW_F";
			};
			class _xx_SmokeShellBlue {
				count = 0;
				magazine = "SmokeShellBlue";
			};
			class _xx_SmokeShellGreen {
				count = 0;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellOrange {
				count = 0;
				magazine = "SmokeShellOrange";
			};
		};
		class TransportItems {
			class _xx_FirstAidKit {
				count = 0;
				name = "FirstAidKit";
			};
			class _xx_ACE_earplugs {
				name = "ACE_earplugs";
				count = 4;
			};
			class _xx_toolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACRE_PRC152 {
				name = "ACRE_PRC152";
				count = 2;
			};
		};
		class TransportWeapons {
			class _xx_arifle_MX_F {
				weapon = "arifle_MX_F";
				count = 0;
			};
		};
		class EventHandlers {
			Init = "[_this select 0, ['Sand', 1], ['HideDoor1', 1, 'HideDoor2', 1, 'HideDoor3', 1, 'HideDoor4', 1]] call BIS_fnc_initVehicle;";
		};
	};
	class MRB_DAGOR_Olive : MRB_Dagor_Tan {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "DAGOR (Olive)";
		class EventHandlers {
			Init = "[_this select 0, ['Olive', 1], ['HideDoor1', 1, 'HideDoor2', 1, 'HideDoor3', 1, 'HideDoor4', 1]] call BIS_fnc_initVehicle;";
		};
	};
	class B_LSV_01_armed_F;
	class MRB_DAGOR_XM312_Tan : B_LSV_01_armed_F {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "DAGOR XM312 (Tan)";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Vehicles";
		crew = "MRB_Element_CSO";
		class TransportMagazines {
			class _xx_SmokeShell {
				count = 0;
				magazine = "SmokeShell";
			};
			class _xx_30Rnd_556x45_Stanag {
				count = 0;
				magazine = "30Rnd_556x45_Stanag";
			};
			class _xx_100Rnd_65x39_caseless_mag {
				count = 0;
				magazine = "100Rnd_65x39_caseless_mag";
			};
			class _xx_16Rnd_9x21_Mag {
				count = 0;
				magazine = "16Rnd_9x21_Mag";
			};
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 0;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
			};
			class _xx_30Rnd_65x39_caseless_mag {
				count = 0;
				magazine = "30Rnd_65x39_caseless_mag";
			};
			class _xx_HandGrenade {
				count = 0;
				magazine = "HandGrenade";
			};
			class _xx_NLAW_F {
				count = 0;
				magazine = "NLAW_F";
			};
			class _xx_SmokeShellBlue {
				count = 0;
				magazine = "SmokeShellBlue";
			};
			class _xx_SmokeShellGreen {
				count = 0;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellOrange {
				count = 0;
				magazine = "SmokeShellOrange";
			};
		};
		class TransportItems {
			class _xx_FirstAidKit {
				count = 0;
				name = "FirstAidKit";
			};
			class _xx_ACE_earplugs {
				name = "ACE_earplugs";
				count = 4;
			};
			class _xx_toolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACRE_PRC152 {
				name = "ACRE_PRC152";
				count = 2;
			};
		};
		class TransportWeapons {
			class _xx_arifle_MX_F {
				weapon = "arifle_MX_F";
				count = 0;
			};
		};
		class EventHandlers {
			Init = "[_this select 0, ['Sand', 1], ['HideDoor1', 1, 'HideDoor2', 1, 'HideDoor3', 1, 'HideDoor4', 1]] call BIS_fnc_initVehicle;";
		};
	};
	class MRB_DAGOR_XM312_Olive : MRB_Dagor_XM312_Tan {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayname = "DAGOR XM312 (Olive)";
		class EventHandlers {
			Init = "[_this select 0, ['Olive', 1], ['HideDoor1', 1, 'HideDoor2', 1, 'HideDoor3', 1, 'HideDoor4', 1]] call BIS_fnc_initVehicle;";
		};
	};
	class MRAP_01_base_F;
	class rhsusf_rg33_base : MRAP_01_base_F {
		armor = 200; // 4x RPGs required to kill 50dmg per AT RPG.
		armorWheels = 0.50;
		damageResistance = 0.5;
		occludeSoundsWhenIn = 0.562341;
		obstructSoundsWhenIn = 0.316228;
		crewExplosionProtection = 0.9999;
		maxOmega = 382.74; // 282.74
		enginePower = 344; // 244
		peakTorque = 2700;
		idleRPM = 700;
		redRPM = 2700;
		thrustDelay = 1.0;//4.0
		armorStructural = 8; //4
		transportSoldier = 11;
		class AcreIntercoms {
            class Intercom_1 {                             // Each entry defines a network {
				displayName = "Crew intercom";             // Name of the intercom network displayed to the players
				shortName = "Crew";                        // Short name of the intercom network. Maximum of 5 characters
				// Seats with stations configured that have intercom access. In this case, units in commander, driver, gunner and turret (excluding FFV) have access to this intercom
				// If left empty it has the same effect
				allowedPositions[] = {"crew"};
				// In this case the commander turret does not have access to crew intercom (unit is "turned out"). This can be useful for historical vehicles
				disabledPositions[] = {{"Turret", {0,0}}};
				// Despite not having regular access to the network, units in cargo positions can have limited connections to communicate with the crew. These positions do not transmit automatically in the limited network; units in this position must toggle the functionality manually.
				limitedPositions[] = {{"cargo", "all"}};
				// This is the number of simultaneous connections that units defined in the previous array can have
				numLimitedPositions = 1;
				// Seats with master stations have the possibility of broadcasting a message in that network
				masterPositions[] = {"commander"};
				// The intercom initial configuration is enabled upon entering a vehicle
				connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Pax intercom";
                shortName = "Pax";
                // Both crew and cargo positions have access to passenger intercom
                allowedPositions[] = {"crew", {"cargo", "all"}};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                // The intercom initial configuration is disabled upon entering a vehicle
                connectedByDefault = 0;
            };
        };
		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
				count = 30;
			};
			class _xx_rhsusf_100Rnd_762x51 {
				magazine = "rhsusf_100Rnd_762x51";
				count = 4;
			};
			class _xx_rhsusf_200Rnd_556x45_soft_pouch {
				magazine = "rhsusf_200Rnd_556x45_soft_pouch";
				count = 4;
			};
			class _xx_rhs_mag_M441_HE {
				magazine = "rhs_mag_M441_HE";
				count = 8;
			};
			class _xx_rhs_mag_an_m8hc {
				magazine = "rhs_mag_an_m8hc";
				count = 8;
			};
			class _xx_rhs_mag_m18_green {
				magazine = "rhs_mag_m18_green";
				count = 2;
			};
			class _xx_Chemlight_green {
				magazine = "Chemlight_green";
				count = 2;
			};
		};
		class TransportWeapons {
			class _xx_ACE_EarPlugs {
				weapon = "ACE_EarPlugs";
				count = 4;
			};
			class _xx_ACE_fieldDressing {
				weapon = "ACE_fieldDressing";
				count = 20;
			};
			class _xx_ACE_TacticalLadder_Item {
				weapon = "ACE_TacticalLadder_Item";
				count = 1;
			};
			class _xx_rhs_weap_M136_hp {
				weapon = "rhs_weap_M136_hp";
				count = 1;
			};
		};
		class TransportItems {
			class _xx_ACRE_PRC152 {
				name = "ACRE_PRC152";
				count = 2;
			};
			class _xx_MRB_IR_Strobe_Item {
				count = 5;
				name = "MRB_IR_Strobe_Item";
			};
		};
	};
	class B_Quadbike_01_F;
	class MRB_Grizzly_ATV_Tan : B_Quadbike_01_F {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Grizzly 4x4 ATV (Tan)";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Vehicles";
		crew = "MRB_Element_CSO";
		class TransportItems {
			class _xx_FirstAidKit {
				count = 0;
				name = "FirstAidKit";
			};
			class _xx_ACE_earplugs {
				name = "ACE_earplugs";
				count = 2;
			};
			class _xx_toolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACRE_PRC152 {
				name = "ACRE_PRC152";
				count = 1;
			};
			class _xx_MRB_IR_Strobe_Item {
				count = 1;
				name = "MRB_IR_Strobe_Item";
			};
		};
		hiddenSelections[] = {"camo1", "camo2"};
		textureList[] = {"Tan", 1};
		class TextureSources {
			class Tan {
				author = "Bohemia Interactive";
				displayName = "Tan";
				factions[] = {"B_3d_Marine_Raider"};
				textures[] = {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};
			};
		};
	};
	class MRB_Grizzly_ATV_Black : MRB_Grizzly_ATV_Tan {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Grizzly 4x4 ATV (Black)";
		class TransportItems {
			class _xx_FirstAidKit {
				count = 0;
				name = "FirstAidKit";
			};
			class _xx_ACE_earplugs {
				name = "ACE_earplugs";
				count = 2;
			};
			class _xx_toolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACRE_PRC152 {
				name = "ACRE_PRC152";
				count = 1;
			};
			class _xx_MRB_IR_Strobe_Item {
				count = 1;
				name = "MRB_IR_Strobe_Item";
			};
		};
		textureList[] = {"Black", 1};
		class TextureSources {
			class Black {
				author = "Bohemia Interactive";
				displayName = "Black";
				factions[] = {"B_3d_Marine_Raider"};
				textures[] = {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};
			};
		};
	};
	/*
	class FIR_MRAP_GPK;
	class MRB_MATV : FIR_MRAP_GPK {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "M-ATV M1240A1";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Vehicles";
		crewCrashProtection = 2.65;
		crewExplosionProtection = 1;
		hullDamageCauseExplosion = 1;
		armorStructural = 8.0;
		class AcreIntercoms {
            class Intercom_1 {                            // Each entry defines a network {
				displayName = "Crew intercom";             // Name of the intercom network displayed to the players
				shortName = "Crew";                        // Short name of the intercom network. Maximum of 5 characters
				// Seats with stations configured that have intercom access. In this case, units in commander, driver, gunner and turret (excluding FFV) have access to this intercom
				// If left empty it has the same effect
				allowedPositions[] = {"crew"};
				// In this case the commander turret does not have access to crew intercom (unit is "turned out"). This can be useful for historical vehicles
				disabledPositions[] = {{"Turret", {0,0}}};
				// Despite not having regular access to the network, units in cargo positions can have limited connections to communicate with the crew. These positions do not transmit automatically in the limited network; units in this position must toggle the functionality manually.
				limitedPositions[] = {{"cargo", "all"}};
				// This is the number of simultaneous connections that units defined in the previous array can have
				numLimitedPositions = 1;
				// Seats with master stations have the possibility of broadcasting a message in that network
				masterPositions[] = {"commander"};
				// The intercom initial configuration is enabled upon entering a vehicle
				connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Pax intercom";
                shortName = "Pax";
                // Both crew and cargo positions have access to passenger intercom
                allowedPositions[] = {"crew", {"cargo", "all"}};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                // The intercom initial configuration is disabled upon entering a vehicle
                connectedByDefault = 0;
            };
        };
		class TransportItems {
			class _xx_FirstAidKit {
				count = 0;
				name = "FirstAidKit";
			};
			class _xx_ACE_earplugs {
				name = "ACE_earplugs";
				count = 10;
			};
			class _xx_toolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACRE_PRC152 {
				name = "ACRE_PRC152";
				count = 2;
			};
			class _xx_MRB_IR_Strobe_Item {
				count = 5;
				name = "MRB_IR_Strobe_Item";
			};
		};
		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				count = 40;
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			};
			class _xx_1Rnd_HE_Grenade_shell {
				count = 0;
				magazine = "1Rnd_HE_Grenade_shell";
			};
			class _xx_1Rnd_Smoke_Grenade_shell {
				count = 0;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell {
				count = 0;
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
			};
			class _xx_30Rnd_65x39_caseless_mag {
				count = 0;
				magazine = "30Rnd_65x39_caseless_mag";
			};
			class _xx_SmokeShell {
				count = 0;
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellBlue {
				count = 0;
				magazine = "SmokeShellBlue";
			};
			class _xx_SmokeShellGreen {
				count = 0;
				magazine = "SmokeShellGreen";
			};
			class _xx_SmokeShellOrange {
				count = 0;
				magazine = "SmokeShellOrange";
			};
		};
		class TransportWeapons {
			class _xx_arifle_MX_F {
				weapon = "arifle_MX_F";
				count = 0;
			};
		};
		class EventHandlers {
			class RHS_DefaultEventhandlers {
				hitpart = "_this call rhs_fnc_hitPart";
			};
			class RHSUSF_EventHandlers {
				seatSwitched = "if(not(_this select 1 in [driver (_this select 0),gunner (_this select 0)]))then{ (_this select 1) action ['turnIn',_this select 0]}";
				turnIn = "([0] + _this)  call rhsusf_fnc_turretAction;";
				turnOut = "([1] + _this) call rhsusf_fnc_turretAction;";
				dammaged = "_this call rhs_fnc_fuelLeak;";
				fired = "_this call (uinamespace getvariable 'RHSUSF_fnc_effectFired')";
			};
		};
	};
	*/
	class B_MRAP_01_hmg_F;
    class MRB_MATV_CROWS : B_MRAP_01_hmg_F
    {
        author = "3d MRB";
        scope = 2;
        side = 1;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "M-ATV GPK";
        faction = "B_3d_Marine_Raider";
        editorSubcategory = "B_3d_Marine_Raider_Vehicles";
        crewCrashProtection = 2.65;
        crewExplosionProtection = 1;
        hullDamageCauseExplosion = 1;
        armorStructural = 8.0;
		class AcreIntercoms {
            class Intercom_1 {                            // Each entry defines a network {
				displayName = "Crew intercom";             // Name of the intercom network displayed to the players
				shortName = "Crew";                        // Short name of the intercom network. Maximum of 5 characters
				// Seats with stations configured that have intercom access. In this case, units in commander, driver, gunner and turret (excluding FFV) have access to this intercom
				// If left empty it has the same effect
				allowedPositions[] = {"crew"};
				// In this case the commander turret does not have access to crew intercom (unit is "turned out"). This can be useful for historical vehicles
				disabledPositions[] = {{"Turret", {0,0}}};
				// Despite not having regular access to the network, units in cargo positions can have limited connections to communicate with the crew. These positions do not transmit automatically in the limited network; units in this position must toggle the functionality manually.
				limitedPositions[] = {{"cargo", "all"}};
				// This is the number of simultaneous connections that units defined in the previous array can have
				numLimitedPositions = 1;
				// Seats with master stations have the possibility of broadcasting a message in that network
				masterPositions[] = {"commander"};
				// The intercom initial configuration is enabled upon entering a vehicle
				connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Pax intercom";
                shortName = "Pax";
                // Both crew and cargo positions have access to passenger intercom
                allowedPositions[] = {"crew", {"cargo", "all"}};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                // The intercom initial configuration is disabled upon entering a vehicle
                connectedByDefault = 0;
            };
        };
        class TransportItems
        {
            class _xx_FirstAidKit
            {
                count = 0;
                name = "FirstAidKit";
            };
            class _xx_ACE_earplugs
            {
                name = "ACE_earplugs";
                count = 4;
            };
            class _xx_toolKit
            {
                name = "ToolKit";
                count = 1;
            };
            class _xx_ACRE_PRC152
            {
                name = "ACRE_PRC152";
                count = 2;
            };
			class _xx_MRB_IR_Strobe_Item {
				count = 5;
				name = "MRB_IR_Strobe_Item";
			};
        };
        class TransportMagazines
        {
            class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag
            {
                count = 40;
                magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
            };
            class _xx_1Rnd_HE_Grenade_shell
            {
                count = 0;
                magazine = "1Rnd_HE_Grenade_shell";
            };
            class _xx_1Rnd_Smoke_Grenade_shell
            {
                count = 0;
                magazine = "1Rnd_Smoke_Grenade_shell";
            };
            class _xx_1Rnd_SmokeBlue_Grenade_shell
            {
                count = 0;
                magazine = "1Rnd_SmokeBlue_Grenade_shell";
            };
            class _xx_1Rnd_SmokeGreen_Grenade_shell
            {
                count = 0;
                magazine = "1Rnd_SmokeGreen_Grenade_shell";
            };
            class _xx_1Rnd_SmokeOrange_Grenade_shell
            {
                count = 0;
                magazine = "1Rnd_SmokeOrange_Grenade_shell";
            };
            class _xx_30Rnd_65x39_caseless_mag
            {
                count = 0;
                magazine = "30Rnd_65x39_caseless_mag";
            };
            class _xx_HandGrenade
            {
                count = 0;
                magazine = "HandGrenade";
            };
            class _xx_SmokeShell
            {
                count = 0;
                magazine = "SmokeShell";
            };
            class _xx_SmokeShellBlue
            {
                count = 0;
                magazine = "SmokeShellBlue";
            };
            class _xx_SmokeShellGreen
            {
                count = 0;
                magazine = "SmokeShellGreen";
            };
            class _xx_SmokeShellOrange
            {
                count = 0;
                magazine = "SmokeShellOrange";
            };
        };
        class TransportWeapons
        {
            class _xx_arifle_MX_F
            {
                weapon = "arifle_MX_F";
                count = 0;
            };
        };
        class EventHandlers
        {
            class RHS_DefaultEventhandlers
            {
                hitpart = "_this call rhs_fnc_hitPart";
            };
            class RHSUSF_EventHandlers
            {
                seatSwitched = "if(not(_this select 1 in [driver (_this select 0),gunner (_this select 0)]))then{ (_this select 1) action ['turnIn',_this select 0]";
                turnIn = "([0] + _this)  call rhsusf_fnc_turretAction;";
                turnOut = "([1] + _this) call rhsusf_fnc_turretAction;";
                dammaged = "_this call rhs_fnc_fuelLeak;";
                fired = "_this call (uinamespace getvariable 'RHSUSF_fnc_effectFired')";
            };
		};
	};

	class MRB_Grizzly_ATV_Woodland : MRB_Grizzly_ATV_Tan {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Grizzly 4x4 ATV (Woodland)";
		textureList[] = {"Woodland", 1};
		class TextureSources {
			class Woodland {
				author = "Bohemia Interactive";
				displayName = "Woodland";
				factions[] = {"B_3d_Marine_Raider"};
				textures[] = {"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};
			};
		};
	};
	class rhsusf_m109_usarmy;
	class MRB_M109A7_SPH_Woodland : rhsusf_m109_usarmy {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "M109A7 SPH (Woodland)";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Vehicles";
		class TransportBackpacks {
			class _xx_rhsusf_falconii {
				backpack = "rhsusf_falconii";
				count = 0;
			};
		};
		class TransportItems {
			class _xx_FirstAidKit {
				count = 0;
				name = "FirstAidKit";
			};
			class _xx_Medikit {
				count = 0;
				name = "Medikit";
			};
			class _xx_Toolkit {
				count = 0;
				name = "Toolkit";
			};
		};
		class TransportMagazines {
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag {
				count = 20;
				magazine = "rhs_mag_30Rnd_556x45_Mk318_Stanag";
			};
			class _xx_rhs_mag_an_m8hc {
				count = 10;
				magazine = "rhs_mag_an_m8hc";
			};
			class _xx_rhs_mag_m18_green {
				count = 0;
				magazine = "rhs_mag_m18_green";
			};
			class _xx_rhs_mag_m18_purple {
				count = 0;
				magazine = "rhs_mag_m18_purple";
			};
			class _xx_rhs_mag_m18_red {
				count = 0;
				magazine = "rhs_mag_m18_red";
			};
			class _xx_rhs_mag_m18_yellow {
				count = 0;
				magazine = "rhs_mag_m18_yellow";
			};
			class _xx_rhs_mag_m67 {
				count = 0;
				magazine = "rhs_mag_m67";
			};
		};
		class TransportWeapons {
			class _xx_rhs_weap_m4_carryhandle {
				count = 0;
				weapon = "rhs_weap_m4_carryhandle";
			};
			class _xx_rhs_weap_M136_hedp {
				count = 0;
				weapon = "rhs_weap_M136_hedp";
			};
		};

	};
	class MRB_M109A7_SPH_Tan : MRB_M109A7_SPH_Woodland {
		author = "3d MRB";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "M109A7 SPH (Tan)";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
		hiddenSelectionsMaterials[] = {"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_d.rvmat","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_d.rvmat","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_d.rvmat","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_d.rvmat","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_d.rvmat"};
		hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_d_co.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_d_co.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_d_co.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_d_ca.paa","rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_d_co.paa"};
	};
	class B_Boat_Transport_01_F;
    class MRB_Zodiac: B_Boat_Transport_01_F {
        displayName = "MRB Zodiac";
		maxSpeed = 55;
		enginePower = 47;
		side = 1;
		scope =2;
		editorSubcategory = "B_3d_Marine_Raider_Watercraft";
		faction = "B_3d_Marine_Raider";
	};
