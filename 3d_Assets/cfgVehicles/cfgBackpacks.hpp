	class B_AssaultPack_Base;
	class rhsusf_assault_eagleaiii_ucp: B_AssaultPack_Base
	{
		scope = 2;
		maximumLoad = 160; //160 - 420
	};
	class MRB_assault_eagleaiii_coy_Medic: rhsusf_assault_eagleaiii_ucp
	{
		scope = 2;
		author = "3d Mod Team";
		displayName = "3d Tactical Medic Backpack [CB]";
		hiddenSelectionsTextures[] = {"3d_Assets\data\eagleaii_coy_medic_co.paa"};
		maximumLoad = 160;
      	mass = 20;
	};	
	class MRB_assault_coy_corpsman: rhsusf_assault_eagleaiii_ucp
	{
		scope = 2;
		author = "3d Mod Team";
		displayName = "3d Tactical Corpsmanpack [CB]";
		hiddenSelectionsTextures[] = {"3d_Assets\data\assault_corpsman_coy_co.paa"};
		maximumLoad = 320;//420
      	mass = 20;
	};
	class B_Carryall_Base;
	class MRB_carryall_CM_CY: B_Carryall_Base
	{
		scope = 2;
		author = "3d Mod Team";
		displayName = "3d Carryall Corpsman Ruck [CB]";
		hiddenSelectionsTextures[] = {"3d_Assets\data\carryall_corpsman_coy_co.paa"};
		maximumLoad = 320;//420
      	mass = 25;
	};
	class MRB_carryall_CM_SA: B_Carryall_Base
	{
		scope = 2;
		author = "3d Mod Team";
		displayName = "3d Carryall Corpsman Ruck [KHK]";
		hiddenSelectionsTextures[] = {"3d_Assets\data\carryall_corpsman_des_co.paa"};
		maximumLoad = 320;//420
      	mass = 25;
	};
	class MRB_carryall_CM_SAS: B_Carryall_Base
	{
		scope = 1;
		author = "3d Mod Team";
		displayName = "3d Carryall Corpsman Ruck Full [KHK]";
		hiddenSelectionsTextures[] = {"3d_Assets\data\carryall_corpsman_des_co.paa"};
		maximumLoad = 320;//420
      	mass = 25;
        class TransportItems {
			class _xx_ACE_quikclot
			{
			name = "ACE_quikclot";
			count = 20;
			};
		
			class _xx_ACE_packingBandage
			{
			name = "ACE_packingBandage";
			count = 30;
			};
		
			class _xx_ACE_epinephrine
			{
			name = "ACE_epinephrine";
			count = 10;
			};
		
			class _xx_ACE_morphine
			{
			name = "ACE_morphine";
			count = 20;
			};
		
			class _xx_ACE_salineIV_500
			{
			name = "ACE_salineIV_500";
			count = 6;
			};
		
			class _xx_ACE_tourniquet
			{
			name = "ACE_tourniquet";
			count = 4;
			};
		
			class _xx_adv_aceCPR_AED
			{
			name = "adv_aceCPR_AED";
			count = 1;
			};
		
			class _xx_ACE_surgicalKit
			{
			name = "ACE_surgicalKit";
			count = 1;
			};
		};
	};
	class B_Carryall_cbr;
	class MRB_Carryall_MEF_CY : B_Carryall_cbr
	{
		scope = 2;
		displayname = "3d Carryall Backpack [CB]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_y_cb_co.paa"};
	};
	class B_Carryall_khk;
	class MRB_Carryall_MEF_KHK : B_Carryall_khk
	{
		scope = 2;
		displayname = "3d Carryall Backpack [KHK]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_y_cyt_co.paa"};
	};
	class B_Carryall_oli;
	class MRB_Carryall_MEF_WM : B_Carryall_oli
	{
		scope = 2;
		displayname = "3d Carryall Backpack [W.MARPAT]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_y_wm_co.paa"};
	};
	class MRB_Carryall_MEF_RGR : B_Carryall_oli
	{
		scope = 2;
		displayname = "3d Carryall Backpack [RGR]";
		hiddenSelections[] = {"camo","insignia"};
		//hiddenselectionstextures[] = {"3d_Assets\data\mef_y_wm_co.paa"};
	};
	class B_Carryall_ocamo;
	class MRB_Carryall_MEF_DM : B_Carryall_ocamo
	{
		scope = 2;
		displayname = "3d Carryall Backpack [D.MARPAT]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_y_dm_co.paa"};
	};
	class MRB_Carryall_MEF_M81 : B_Carryall_oli
	{
		scope = 2;
		displayname = "3d Carryall Backpack [M81]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_y_wl_co.paa"};
	};
	class B_Carryall_mcamo;
	class MRB_Carryall_MEF_MCAMO : B_Carryall_mcamo
	{
		scope = 2;
		displayname = "3d Carryall Backpack [MC]";
		hiddenSelections[] = {"camo","insignia"};
		//hiddenselectionstextures[] = {"3d_Assets\data\mef_y_wl_co.paa"};
	};
	class MRB_Carryall_MEF_BL : B_Carryall_ocamo
	{
		scope = 2;
		displayname = "3d Carryall Backpack [Black]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_y_bl_co.paa"};
	};
	class B_Kitbag_Base;
	class MRB_Kitbag_MEF_CY : B_Kitbag_Base
	{
		scope = 2;
		displayname = "3d Kitbag [CB]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_k_cb_co.paa"};
	};
	class B_Kitbag_mcamo;
	class MRB_Kitbag_MEF_WM : B_Kitbag_mcamo
	{
		scope = 2;
		displayname = "3d Kitbag [W.MARPAT]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_k_wm_co.paa"};
	};
	class MRB_Kitbag_MEF_MCAMO : B_Kitbag_mcamo
	{
		scope = 2;
		displayname = "3d Kitbag [MC]";
		hiddenSelections[] = {"camo","insignia"};
		//hiddenselectionstextures[] = {"3d_Assets\data\mef_k_wm_co.paa"};
	};
	class B_Kitbag_rgr;
	class MRB_Kitbag_MEF_RGR : B_Kitbag_rgr
	{
		scope = 2;
		displayname = "3d Kitbag [RGR]";
		hiddenSelections[] = {"camo","insignia"};
	};
	class B_Kitbag_cbr;
	class MRB_Kitbag_MEF_DM : B_Kitbag_cbr
	{
		scope = 2;
		displayname = "3d Kitbag [D.MARPAT]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_k_dm_co.paa"};
	};
	class MRB_Kitbag_MEF_M81 : B_Kitbag_rgr
	{
		scope = 2;
		displayname = "3d Kitbag [M81]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_k_wl_co.paa"};
	};
	class MRB_Kitbag_MEF_BL : B_Kitbag_rgr
	{
		scope = 2;
		displayname = "3d Kitbag [Black]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_k_bl_co.paa"};
	};
	class B_AssaultPack_RGR;
	class MRB_Assault_MEF_CY : B_AssaultPack_RGR
	{
		scope = 2;
		displayname = "3d Assault Pack [CB]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_a_cb_co.paa"};
	};
	class MRB_Assault_MEF_RGR : B_Assaultpack_RGR
	{
		scope = 2;
		displayname = "3d Assault Pack [RGR]";
		hiddenSelections[] = {"camo","insignia"};
		//hiddenselectionstextures[] = {"3d_Assets\data\mef_a_cb_co.paa"};	
	}
	class B_AssaultPack_cbr;
	class MRB_Assault_MEF_WM : B_AssaultPack_cbr
	{
		scope = 2;
		displayname = "3d Assault Pack [W.MARPAT]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_a_wm_co.paa"};
	};
	class rhsusf_falconii_coy;
	class MRB_Assault_MEF_DM : rhsusf_falconii_coy
	{
		scope = 2;
		displayname = "3d Assault Pack [D.MARPAT]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_a_dm_co.paa"};
	};
	class B_AssaultPack_dgtl;
	class MRB_Assault_MEF_M81 : B_AssaultPack_dgtl
	{
		scope = 2;
		displayname = "3d Assault Pack [M81]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_a_wl_co.paa"};
	};
	class B_Assaultpack_Blk;
	class MRB_Assault_MEF_BL : B_AssaultPack_Blk
	{
		scope = 2;
		displayname = "3d Assault Pack [Black]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_a_bl_co.paa"};
	};
	class B_Assaultpack_KHK;
	class MRB_Assault_MEF_KHK : B_AssaultPack_KHK
	{
		scope = 2;
		displayname = "3d Assault Pack [KHK]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_a_cyt_co.paa"};
	};
	class B_AssaultPack_mcamo;
	class MRB_Assault_MEF_MCAM : B_AssaultPack_mcamo
	{
		scope = 2;
		displayname = "3d Assault Pack [MC]";
		hiddenSelections[] = {"camo","insignia"};
		//hiddenselectionstextures[] = {"3d_Assets\data\mef_a_wl_co.paa"};
	};
	class B_TacticalPack_blk;
	class MRB_Tactical_MEF_BLK : B_TacticalPack_blk
	{
		scope = 2;
		displayname = "3d Tactical Backpack [Black]";
		hiddenSelections[] = {"camo","insignia"};
		//hiddenselectionstextures[] = {"3d_Assets\data\mef_t_cb_co.paa"};
	};
	class B_TacticalPack_oli;
	class MRB_Tactical_MEF_CY : B_TacticalPack_oli
	{
		scope = 2;
		displayname = "3d Tactical Backpack [CB]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_t_cb_co.paa"};
	};
	class B_TacticalPack_rgr;
	class MRB_Tactical_MEF_RGR : B_TacticalPack_rgr
	{
		scope = 2;
		displayname = "3d Tactical Backpack [RGR]";
		hiddenSelections[] = {"camo","insignia"};
		//hiddenselectionstextures[] = {"3d_Assets\data\mef_t_cb_co.paa"};
	};
	class B_TacticalPack_mcamo;
	class MRB_Tactical_MEF_DM : B_TacticalPack_mcamo
	{
		scope = 2;
		displayname = "3d Tactical Backpack [D.MARPAT]";
		hiddenSelections[] = {"camo","insignia"};
		hiddenselectionstextures[] = {"3d_Assets\data\mef_t_dm_co.paa"};
	};
	class MRB_assault_ST_CY: rhsusf_assault_eagleaiii_ucp
	{
		scope = 2;
		author = "3d Mod Team";
		displayName = "3d Classic Backpack [CB]";
		hiddenSelectionsTextures[] = {"3d_Assets\data\assault_wirecutter_coy_co.paa"};
		maximumLoad = 320;//420
      	mass = 20;
	};
	class rhs_assault_umbts;
	class MRB_assault_NWI_CY: rhs_assault_umbts{
		scope = 2;
		displayName = "3d Tactical Backpack [CB] Wirecutters";
		hiddenSelectionsTextures[] = {"3d_Assets\data\assault_wirecutter_coy_co.paa"};
		maximumload = 320;
		mass = 20;
	};
	class rhs_assault_umbts_engineer_empty;
	class MRB_assault_WI_CY: rhs_assault_umbts_engineer_empty{
		scope = 2;
		displayName = "3d Tactical Backpack [CB] Wirecutters";
		maximumload = 380;
		hiddenSelectionsTextures[] = {"3d_Assets\data\assault_wirecutter_coy_co.paa"};
		mass = 23;
	};
	class MRB_assault_WI_SA: rhs_assault_umbts_engineer_empty{
		scope = 2;
		displayName = "3d Tactical Backpack [KHK] Wirecutters";
		maximumload = 380;
		hiddenSelectionsTextures[] = {"3d_Assets\data\assault_wirecutter_des_co.paa"};
		mass = 23;
	};
	class MRB_carryall_ST_SA: B_Carryall_Base
	{
		scope = 2;
		author = "3d Mod Team";
		displayName = "3d Carryall Ruck [KHK]";
		hiddenSelectionsTextures[] = {"3d_Assets\data\carryall_infantry_des_co.paa"};
		maximumLoad = 320;//420
      	mass = 25;
	};
	class MRB_carryall_ST_CY: B_Carryall_Base
	{
		scope = 2;
		author = "3d Mod Team";
		displayName = "3d Carryall Ruck [CB]";
		hiddenSelectionsTextures[] = {"3d_Assets\data\carryall_infantry_coy_co.paa"};
		maximumLoad = 320;//420
      	mass = 25;
	};
	class O_UAV_01_backpack_f;
	class MRB_largeruck_ST_CY: O_UAV_01_backpack_f{
		scope = 2;
		author = "3d Mod Team";
		displayName = "3d X-tra Large Ruck [KHK]";
		picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
		maximumLoad = 420;
		mass = 35;
	};
	class B_UAV_01_backpack_f;
	class MRB_largeruck_ST_SA: B_UAV_01_backpack_f{
		scope = 2;
		author = "3d Mod Team";
		displayName = "3d X-tra Large Ruck [RGR]";
		picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
		maximumLoad = 420;
		mass = 35;
	};