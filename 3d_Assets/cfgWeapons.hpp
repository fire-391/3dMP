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
    class ItemCore;
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
};
