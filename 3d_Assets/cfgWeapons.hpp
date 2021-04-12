/*
Classname definition for ACE hearing support
Applicable list of equipment classnames is at bottom
*/
/*#define HEARING(CLASSNAME) \
class CLASSNAME: ItemCore { \
    ace_hearing_protection = 0.75; \
    ace_hearing_lowerVolume = 0; \
    }*/

class CfgWeapons
{
    //Vector with thermal for command
	/*class ACE_Vector;
	class MRB_Vector: ACE_Vector
    {
        displayName = "MRB Vector";
        visionMode[]={"Normal","NVG","TI"};
    };
    //Ctab Weight Fix
	*/
    class ItemCore;
    /*class ItemcTab: ItemCore
    {
        descriptionshort="DK10 Rugged Tablet PC";
        descriptionuse="<t color='#9cf953'>Use: </t>Show Commander's Tablet";
        displayname="Rugged Tablet";
        picture="\cTab\img\icon_dk10.paa";
        model="\ctab\data\itemDK10.p3d";
        scope=2;
        simulation="ItemGPS";
        class ItemInfo
        {
            mass=20;
        };
        author="Gundy, Riouken, Raspu";
    };
    //Android Weight Fix
    class ItemAndroid: ItemcTab
    {
        descriptionshort="GD300 Rugged Wearable Computer";
        descriptionuse="<t color='#9cf953'>Use: </t>Show Android Based BFT";
        displayname="GD300 Android";
        picture="\cTab\img\icon_Android.paa";
        model="\ctab\data\itemAndroid.p3d";
        class ItemInfo
        {
            mass=3;
        };
        author="Gundy, Riouken, Raspu";
    };
    //MicroDAGR Weight Fix
    class ItemMicroDAGR: ItemcTab
    {
        descriptionshort="HNV-2930 Micro Defense Advanced GPS Receiver";
        descriptionuse="<t color='#9cf953'>Use: </t>Show Android Based BFT";
        displayname="MicroDAGR";
        picture="\cTab\img\icon_MicroDAGR.paa";
        model="\ctab\data\itemMicroDAGR.p3d";
        class ItemInfo
        {
            mass=2;
        };
        author="Gundy, Riouken, Raspu";
    };
    //Add switch function to anpeq15
    class acc_pointer_IR;
    class rhsusf_acc_anpeq15: acc_pointer_IR
    {
        MRT_switchItemHintText = "Switched to Laser";
        MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_light";
        MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_light";
    };
    class rhsusf_acc_anpeq15_light: rhsusf_acc_anpeq15
    {
        MRT_switchItemHintText = "Switched to Light";
        MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15";
        MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15";
    };
    //Add all 40mm rounds to grenadelauncher
    class GrenadeLauncher;
    class UGL_F:GrenadeLauncher
    {
        magazines[]=
        {
            "rhs_mag_M441_HE",
            "rhs_mag_M433_HEDP",
            "rhs_mag_M4009",
            "rhs_mag_m576",
            "rhs_mag_M585_white",
            "rhs_mag_M661_green",
            "rhs_mag_M662_red",
            "rhs_mag_M713_red",
            "rhs_mag_M714_white",
            "rhs_mag_M715_green",
            "rhs_mag_M716_yellow",

            //bis compatibility
            "1Rnd_HE_Grenade_shell",
            "UGL_FlareWhite_F",
            "UGL_FlareGreen_F",
            "UGL_FlareRed_F",
            "UGL_FlareYellow_F",
            "UGL_FlareCIR_F",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_SmokeRed_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeYellow_Grenade_shell",
            "1Rnd_SmokePurple_Grenade_shell",
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell",
            "3Rnd_HE_Grenade_shell",
            "3Rnd_UGL_FlareWhite_F",
            "3Rnd_UGL_FlareGreen_F",
            "3Rnd_UGL_FlareRed_F",
            "3Rnd_UGL_FlareYellow_F",
            "3Rnd_UGL_FlareCIR_F",
            "3Rnd_Smoke_Grenade_shell",
            "3Rnd_SmokeRed_Grenade_shell",
            "3Rnd_SmokeGreen_Grenade_shell",
            "3Rnd_SmokeYellow_Grenade_shell",
            "3Rnd_SmokePurple_Grenade_shell",
            "3Rnd_SmokeBlue_Grenade_shell",
            "3Rnd_SmokeOrange_Grenade_shell",

            //ACE3 Compatibility
            "ACE_HuntIR_M203"
        };
    };
*/
    // Nightvisions
    class Binocular;

	class NVGoggles: Binocular {
		class ItemInfo {};
	};

    class MRB_PVS14: NVGoggles {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        author = "3d MRB";
        displayname = "AN/PVS-14";
        modelOptics = "\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_opt";
        picture = "\rhsusf\addons\rhsusf_infantry\ui\ico_anpvs14.paa";
        model = "\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_UP";
		ace_nightvision_generation = 7;
		ace_nightvision_bluRadius = 0.10;
		ace_nightvision_eyeCups = 1;
		ace_nightvision_fogScaling = 0.5;
		ace_nightvision_effectScaling = 0.5;
        class ItemInfo: ItemInfo {
            modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_UP";
            uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_14_DOWN";
        };
    };
    class MRB_PVS14FS: MRB_PVS14 {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        displayname = "AN/PVS-14 FS";
        modelOptics = "\3d_Assets\data\nvg_optics";
    };
    class MRB_PVS15: NVGoggles {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        author = "3d MRB";
        displayname = "AN/PVS-15";
        modelOptics = "\A3\weapons_f\reticle\optics_night";
        picture = "\rhsusf\addons\rhsusf_infantry\ui\ico_anpvs15.paa";
        model = "\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_UP";
		ace_nightvision_generation = 7;
		ace_nightvision_bluRadius = 0.10;
		ace_nightvision_eyeCups = 1;
		ace_nightvision_fogScaling = 0.5;
		ace_nightvision_effectScaling = 0.5;
        class ItemInfo: ItemInfo {
            modelOff = "\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_UP";
            uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\nvg\ANPVS_15_DOWN";
        };
    };
    class MRB_PVS15FS: MRB_PVS15 {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        displayname = "AN/PVS-15 FS";
        modelOptics = "\3d_Assets\data\nvg_optics";
    };
    class MRB_PVS23: NVGoggles {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        author = "3d MRB";
        displayname = "AN/PVS-23";
        modelOptics = "\A3\weapons_f\reticle\optics_night";
        picture = "\3d_Assets\data\PVS_23_Opt.paa";
        model = "\SOAS_Gear\H_SOAR_ANVIS_ON";
		ace_nightvision_generation = 7;
		ace_nightvision_bluRadius = 0.10;
		ace_nightvision_eyeCups = 1;
		ace_nightvision_fogScaling = 0.5;
		ace_nightvision_effectScaling = 0.5;
        class ItemInfo: ItemInfo {
            uniformModel = "\SOAS_Gear\H_SOAR_ANVIS_ON";
            modelOff = "\SOAS_Gear\H_SOAR_ANVIS_OFF";
            mass = 12;
        };
    };
    class MRB_PVS23FS: MRB_PVS23 {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        displayname = "AN/PVS-23 FS";
        modelOptics = "\3d_Assets\data\nvg_optics";
    };
    class MRB_AVS6: NVGoggles {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        author = "3d MRB";
        displayname = "AN/AVS-6";
        modelOptics = "\A3\weapons_f\reticle\optics_night";
        picture = "\SOAS_Gear\Data\UI\SOAS_ANVIS_6.paa";
        model = "\SOAS_Gear\H_SOAR_ANVIS_ON";
		ace_nightvision_generation = 7;
		ace_nightvision_bluRadius = 0.10;
		ace_nightvision_eyeCups = 1;
		ace_nightvision_fogScaling = 0.5;
		ace_nightvision_effectScaling = 0.5;
        class ItemInfo: ItemInfo {
            uniformModel = "\SOAS_Gear\H_SOAR_ANVIS_ON";
            modelOff = "\SOAS_Gear\H_SOAR_ANVIS_OFF";
            mass = 12;
        };
    };
    class MRB_AVS6FS: MRB_AVS6 {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        displayname = "AN/AVS-6 FS";
        modelOptics = "";
        ace_nightvision_border = "3d_Assets\data\nvg_mask_4096.paa";
    };

    // Tactical Ladder
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class ACE_TacticalLadder_Item: ACE_ItemCore
    {
        scope = 2;
        displayName = "$STR_ace_tacticalladder_DisplayName";
        descriptionShort = "";
        model = "\A3\Weapons_F\Items\Toolkit";
        picture = "\z\ace\addons\tacticalladder\UI\ace_tactical_ladder_pack_ca.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 100;
            allowedSlots[] = {901};
        };
    };
    //UAV
    class MRB_UAV_Item : ACE_ItemCore
    {
        _generalMacro="MRB_UAV_Item";
        scope = 2;
        displayName = "UAV";
        descriptionShort = "";
        picture = "\3d_Assets\data\uav_icon.paa";
        model = "\A3\Weapons_F\Items\Toolkit";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 150;
            allowedSlots[] = {901};
        };
    };
/*
    // Strobe Light Fix (Brighter blinking)
    class ACE_IR_Strobe_Item;
    class MRB_IR_Strobe_Item: ACE_IR_Strobe_Item {
        ACE_attachable = "MRB_IR_Strobe_Effect";
        displayName = "MRB IR Strobe";
    };

    //Rotary Wing Weapons
    class RHS_M134x2_MELB;
    class RHS_M134_L_MELB : RHS_M134x2_MELB
    {
        displayname = "M134D Minigun";
    };
    class RHS_M134_R_MELB : RHS_M134_L_MELB
    {
        displayname = "M134D Minigun";
    };
    class M134_minigun;
    class MARM_SAFE_MELB : M134_minigun
    {
        CanLock = LockNo;
        displayName = SAFE;
        nameSound = "cannon";
        cursor = "EmptyCursor";
        cursorAim = "EmptyCursor";
        textureType = "semi";
        magazines[] = {"FakeMagazine_MELB"};
        burst = 0;
        reloadTime = 0.01;
        magazineReloadTime = 0.1;
    };
    class rhs_weap_HellfireLauncher;
    class RHS_MELB_DAGR : rhs_weap_HellfireLauncher
    {
        ace_hellfire_enabled = 1;
        ace_laser_canSelect = 1;
        canLock = 0;
        weaponLockSystem = 0;
        lockingTargetSound[] = {"",0,1};
        lockedTargetSound[] = {"",0,1};
    };

	class RocketPods;
	class ace_hellfire_launcher: RocketPods {
		class StandardSound {
            begin1[] = {"rhsusf\addons\rhsusf_melb\Sound\M260\M260_1",2.6,1,1800};
            begin2[] = {"rhsusf\addons\rhsusf_melb\Sound\M260\M260_2",2.6,1,1800};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		magazines[] = {
            "6Rnd_ACE_Hellfire_AGM114K",
            "PylonMissile_1Rnd_ACE_Hellfire_AGM114K",
            "PylonRack_1Rnd_ACE_Hellfire_AGM114K",
            "PylonRack_3Rnd_ACE_Hellfire_AGM114K",
            "PylonRack_4Rnd_ACE_Hellfire_AGM114K",
            "rhs_mag_agm114K_4",
            "rhs_mag_agm114K_2",
            "rhs_mag_agm114K",
            "mrb_mag_AGM114K_1X",
            "mrb_mag_AGM114K_2X"
		};
	};
	class ace_hellfire_launcher_N: ace_hellfire_launcher {
        magazines[] = {
            "6Rnd_ACE_Hellfire_AGM114N",
            "PylonMissile_1Rnd_ACE_Hellfire_AGM114N",
            "PylonRack_1Rnd_ACE_Hellfire_AGM114N",
            "PylonRack_3Rnd_ACE_Hellfire_AGM114N",
            "PylonRack_4Rnd_ACE_Hellfire_AGM114N",
            "rhs_mag_agm114N_4",
            "rhs_mag_agm114N_2",
            "rhs_mag_agm114N",
            "mrb_mag_AGM114N_1X",
            "mrb_mag_AGM114N_2X"
		};
    };
	
    //RHS mags for vanilla SPAR_03 / HK417
    class Rifle_Base_F;
    class arifle_SPAR_03_base_F: Rifle_Base_F
    {
		class WeaponSlotsInfo {
			mass = 85;
		};
        magazines[] = {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_20Rnd_762x51_SR25_m993_Mag"};
    };

	//RHS Weapon Weight fixes
	class SMG_02_base_F;
	class rhsusf_weap_MP7A1_base_f: SMG_02_base_F
	{
		class WeaponSlotsInfo {
			mass = 33;
		};
	};
	class rhs_weap_m136;
	class rhs_weap_m72a7: rhs_weap_m136
	{
		class WeaponSlotsInfo {
			mass = 57;
		};
	};*/

    //ACE Hearing support for MilGP helmets, see line 1
    /*HEARING(milgp_h_airframe_01_khk);
    HEARING(milgp_h_airframe_01_goggles_khk);
    HEARING(milgp_h_airframe_02_khk);
    HEARING(milgp_h_airframe_02_goggles_khk);
    HEARING(milgp_h_airframe_03_khk);
    HEARING(milgp_h_airframe_03_goggles_khk);
    HEARING(milgp_h_airframe_04_khk);
    HEARING(milgp_h_airframe_04_goggles_khk);
    HEARING(milgp_h_airframe_05_khk);
    HEARING(milgp_h_airframe_05_goggles_khk);
    HEARING(milgp_h_airframe_06_khk);
    HEARING(milgp_h_airframe_06_goggles_khk);
    HEARING(milgp_h_airframe_01_khk_hexagon);
    HEARING(milgp_h_airframe_01_goggles_khk_hexagon);
    HEARING(milgp_h_airframe_02_khk_hexagon);
    HEARING(milgp_h_airframe_02_goggles_khk_hexagon);
    HEARING(milgp_h_airframe_03_khk_hexagon);
    HEARING(milgp_h_airframe_03_goggles_khk_hexagon);
    HEARING(milgp_h_airframe_04_khk_hexagon);
    HEARING(milgp_h_airframe_04_goggles_khk_hexagon);
    HEARING(milgp_h_airframe_05_khk_hexagon);
    HEARING(milgp_h_airframe_05_goggles_khk_hexagon);
    HEARING(milgp_h_airframe_06_khk_hexagon);
    HEARING(milgp_h_airframe_06_goggles_khk_hexagon);
    HEARING(milgp_h_airframe_01_CB);
    HEARING(milgp_h_airframe_01_goggles_CB);
    HEARING(milgp_h_airframe_02_CB);
    HEARING(milgp_h_airframe_02_goggles_CB);
    HEARING(milgp_h_airframe_03_CB);
    HEARING(milgp_h_airframe_03_goggles_CB);
    HEARING(milgp_h_airframe_04_CB);
    HEARING(milgp_h_airframe_04_goggles_CB);
    HEARING(milgp_h_airframe_05_CB);
    HEARING(milgp_h_airframe_05_goggles_CB);
    HEARING(milgp_h_airframe_06_CB);
    HEARING(milgp_h_airframe_06_goggles_CB);
    HEARING(milgp_h_airframe_01_CB_hexagon);
    HEARING(milgp_h_airframe_01_goggles_CB_hexagon);
    HEARING(milgp_h_airframe_02_CB_hexagon);
    HEARING(milgp_h_airframe_02_goggles_CB_hexagon);
    HEARING(milgp_h_airframe_03_CB_hexagon);
    HEARING(milgp_h_airframe_03_goggles_CB_hexagon);
    HEARING(milgp_h_airframe_04_CB_hexagon);
    HEARING(milgp_h_airframe_04_goggles_CB_hexagon);
    HEARING(milgp_h_airframe_05_CB_hexagon);
    HEARING(milgp_h_airframe_05_goggles_CB_hexagon);
    HEARING(milgp_h_airframe_06_CB_hexagon);
    HEARING(milgp_h_airframe_06_goggles_CB_hexagon);
    HEARING(milgp_h_airframe_01_RGR);
    HEARING(milgp_h_airframe_01_goggles_RGR);
    HEARING(milgp_h_airframe_02_RGR);
    HEARING(milgp_h_airframe_02_goggles_RGR);
    HEARING(milgp_h_airframe_03_RGR);
    HEARING(milgp_h_airframe_03_goggles_RGR);
    HEARING(milgp_h_airframe_04_RGR);
    HEARING(milgp_h_airframe_04_goggles_RGR);
    HEARING(milgp_h_airframe_05_RGR);
    HEARING(milgp_h_airframe_05_goggles_RGR);
    HEARING(milgp_h_airframe_06_RGR);
    HEARING(milgp_h_airframe_06_goggles_RGR);
    HEARING(milgp_h_airframe_01_RGR_hexagon);
    HEARING(milgp_h_airframe_01_goggles_RGR_hexagon);
    HEARING(milgp_h_airframe_02_RGR_hexagon);
    HEARING(milgp_h_airframe_02_goggles_RGR_hexagon);
    HEARING(milgp_h_airframe_03_RGR_hexagon);
    HEARING(milgp_h_airframe_03_goggles_RGR_hexagon);
    HEARING(milgp_h_airframe_04_RGR_hexagon);
    HEARING(milgp_h_airframe_04_goggles_RGR_hexagon);
    HEARING(milgp_h_airframe_05_RGR_hexagon);
    HEARING(milgp_h_airframe_05_goggles_RGR_hexagon);
    HEARING(milgp_h_airframe_06_RGR_hexagon);
    HEARING(milgp_h_airframe_06_goggles_RGR_hexagon);
    HEARING(milgp_h_airframe_01_MC);
    HEARING(milgp_h_airframe_01_goggles_MC);
    HEARING(milgp_h_airframe_02_MC);
    HEARING(milgp_h_airframe_02_goggles_MC);
    HEARING(milgp_h_airframe_03_MC);
    HEARING(milgp_h_airframe_03_goggles_MC);
    HEARING(milgp_h_airframe_04_MC);
    HEARING(milgp_h_airframe_04_goggles_MC);
    HEARING(milgp_h_airframe_05_MC);
    HEARING(milgp_h_airframe_05_goggles_MC);
    HEARING(milgp_h_airframe_06_MC);
    HEARING(milgp_h_airframe_06_goggles_MC);
    HEARING(milgp_h_opscore_01_khk);
    HEARING(milgp_h_opscore_01_goggles_khk);
    HEARING(milgp_h_opscore_02_khk);
    HEARING(milgp_h_opscore_02_goggles_khk);
    HEARING(milgp_h_opscore_03_khk);
    HEARING(milgp_h_opscore_03_goggles_khk);
    HEARING(milgp_h_opscore_04_khk);
    HEARING(milgp_h_opscore_04_goggles_khk);
    HEARING(milgp_h_opscore_05_khk);
    HEARING(milgp_h_opscore_05_goggles_khk);
    HEARING(milgp_h_opscore_06_khk);
    HEARING(milgp_h_opscore_06_goggles_khk);
    HEARING(milgp_h_opscore_01_khk_hexagon);
    HEARING(milgp_h_opscore_01_goggles_khk_hexagon);
    HEARING(milgp_h_opscore_02_khk_hexagon);
    HEARING(milgp_h_opscore_02_goggles_khk_hexagon);
    HEARING(milgp_h_opscore_03_khk_hexagon);
    HEARING(milgp_h_opscore_03_goggles_khk_hexagon);
    HEARING(milgp_h_opscore_04_khk_hexagon);
    HEARING(milgp_h_opscore_04_goggles_khk_hexagon);
    HEARING(milgp_h_opscore_05_khk_hexagon);
    HEARING(milgp_h_opscore_05_goggles_khk_hexagon);
    HEARING(milgp_h_opscore_06_khk_hexagon);
    HEARING(milgp_h_opscore_06_goggles_khk_hexagon);
    HEARING(milgp_h_opscore_01_CB);
    HEARING(milgp_h_opscore_01_goggles_CB);
    HEARING(milgp_h_opscore_02_CB);
    HEARING(milgp_h_opscore_02_goggles_CB);
    HEARING(milgp_h_opscore_03_CB);
    HEARING(milgp_h_opscore_03_goggles_CB);
    HEARING(milgp_h_opscore_04_CB);
    HEARING(milgp_h_opscore_04_goggles_CB);
    HEARING(milgp_h_opscore_05_CB);
    HEARING(milgp_h_opscore_05_goggles_CB);
    HEARING(milgp_h_opscore_06_CB);
    HEARING(milgp_h_opscore_06_goggles_CB);
    HEARING(milgp_h_opscore_01_CB_hexagon);
    HEARING(milgp_h_opscore_01_goggles_CB_hexagon);
    HEARING(milgp_h_opscore_02_CB_hexagon);
    HEARING(milgp_h_opscore_02_goggles_CB_hexagon);
    HEARING(milgp_h_opscore_03_CB_hexagon);
    HEARING(milgp_h_opscore_03_goggles_CB_hexagon);
    HEARING(milgp_h_opscore_04_CB_hexagon);
    HEARING(milgp_h_opscore_04_goggles_CB_hexagon);
    HEARING(milgp_h_opscore_05_CB_hexagon);
    HEARING(milgp_h_opscore_05_goggles_CB_hexagon);
    HEARING(milgp_h_opscore_06_CB_hexagon);
    HEARING(milgp_h_opscore_06_goggles_CB_hexagon);
    HEARING(milgp_h_opscore_01_RGR);
    HEARING(milgp_h_opscore_01_goggles_RGR);
    HEARING(milgp_h_opscore_02_RGR);
    HEARING(milgp_h_opscore_02_goggles_RGR);
    HEARING(milgp_h_opscore_03_RGR);
    HEARING(milgp_h_opscore_03_goggles_RGR);
    HEARING(milgp_h_opscore_04_RGR);
    HEARING(milgp_h_opscore_04_goggles_RGR);
    HEARING(milgp_h_opscore_05_RGR);
    HEARING(milgp_h_opscore_05_goggles_RGR);
    HEARING(milgp_h_opscore_06_RGR);
    HEARING(milgp_h_opscore_06_goggles_RGR);
    HEARING(milgp_h_opscore_01_RGR_hexagon);
    HEARING(milgp_h_opscore_01_goggles_RGR_hexagon);
    HEARING(milgp_h_opscore_02_RGR_hexagon);
    HEARING(milgp_h_opscore_02_goggles_RGR_hexagon);
    HEARING(milgp_h_opscore_03_RGR_hexagon);
    HEARING(milgp_h_opscore_03_goggles_RGR_hexagon);
    HEARING(milgp_h_opscore_04_RGR_hexagon);
    HEARING(milgp_h_opscore_04_goggles_RGR_hexagon);
    HEARING(milgp_h_opscore_05_RGR_hexagon);
    HEARING(milgp_h_opscore_05_goggles_RGR_hexagon);
    HEARING(milgp_h_opscore_06_RGR_hexagon);
    HEARING(milgp_h_opscore_06_goggles_RGR_hexagon);
    HEARING(milgp_h_opscore_01_MC);
    HEARING(milgp_h_opscore_01_goggles_MC);
    HEARING(milgp_h_opscore_02_MC);
    HEARING(milgp_h_opscore_02_goggles_MC);
    HEARING(milgp_h_opscore_03_MC);
    HEARING(milgp_h_opscore_03_goggles_MC);
    HEARING(milgp_h_opscore_04_MC);
    HEARING(milgp_h_opscore_04_goggles_MC);
    HEARING(milgp_h_opscore_05_MC);
    HEARING(milgp_h_opscore_05_goggles_MC);
    HEARING(milgp_h_opscore_06_MC);
    HEARING(milgp_h_opscore_06_goggles_MC);
    HEARING(milgp_h_cap_02_khk);
    HEARING(milgp_h_cap_02_goggles_khk);
    HEARING(milgp_h_cap_02_RGR);
    HEARING(milgp_h_cap_02_goggles_RGR);
    HEARING(milgp_h_cap_02_CB);
    HEARING(milgp_h_cap_02_goggles_CB);
    HEARING(milgp_h_cap_02_MC);
    HEARING(milgp_h_cap_02_goggles_MC);
    HEARING(milgp_h_cap_03_khk);
    HEARING(milgp_h_cap_03_goggles_khk);
    HEARING(milgp_h_cap_03_RGR);
    HEARING(milgp_h_cap_03_goggles_RGR);
    HEARING(milgp_h_cap_03_CB);
    HEARING(milgp_h_cap_03_goggles_CB);
    HEARING(milgp_h_cap_03_MC);
    HEARING(milgp_h_cap_03_goggles_MC);
    HEARING(milgp_h_cap_backwards_02_khk);
    HEARING(milgp_h_cap_backwards_02_goggles_khk);
    HEARING(milgp_h_cap_backwards_02_RGR);
    HEARING(milgp_h_cap_backwards_02_goggles_RGR);
    HEARING(milgp_h_cap_backwards_02_CB);
    HEARING(milgp_h_cap_backwards_02_goggles_CB);
    HEARING(milgp_h_cap_backwards_02_MC);
    HEARING(milgp_h_cap_backwards_02_goggles_MC);
    HEARING(milgp_h_cap_backwards_03_khk);
    HEARING(milgp_h_cap_backwards_03_goggles_khk);
    HEARING(milgp_h_cap_backwards_03_RGR);
    HEARING(milgp_h_cap_backwards_03_goggles_RGR);
    HEARING(milgp_h_cap_backwards_03_CB);
    HEARING(milgp_h_cap_backwards_03_goggles_CB);
    HEARING(milgp_h_cap_backwards_03_MC);
    HEARING(milgp_h_cap_backwards_03_goggles_MC);*/
};
