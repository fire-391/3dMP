class CfgPatches
{
	class 3d_Assets
	{
		author = "3d MRB";
		magazines[] = {"FakeMagazine_MELB"};
		ammo[] = {};
		weapons[] =
		{
			// 3d weapons Configured in 3dassets\cfgWeapons.hpp in same order as below
			//"MRB_Vector",			//line 15
			"MRB_PVS14",			//line 138
			"MRB_PVS14FS",			//line 151
			"MRB_PVS15",			//line 171
			"MRB_PVS15FS",			//line 191
			"MRB_PVS23",			//line 211
			"MRB_PVS23FS",			//line 231
			"MRB_AVS6",			//line 251
			"MRB_AVS6FS",			//line 271
			"ACE_TacticalLadder_Item",      //line 294
			"MRB_UAV_Item",			//line 308
			"MRB_IR_Strobe_Item"	        //line 323
		};
		units[] =
		{
			// 3d Units
			"MRB_Battalion_CO",
			"MRB_Battalion_XO",
			"MRB_Battalion_SGM",
			"MRB_Battalion_CMC",
			"MRB_Company_CO",
			"MRB_Company_XO",
			"MRB_Company_FS",
			"MRB_Company_GY",
			"MRB_Company_SARC",
			"MRB_Team_TL",
			"MRB_Team_CHIEF",
			"MRB_Team_SARC",
			"MRB_Team_COMC",
			"MRB_Element_LDR",
			"MRB_Element_ALDR",
			"MRB_Element_SARC",
			"MRB_Element_CSO",
			"CJSOAC_Detachment_CO",
			"CJSOAC_Detachment_XO",
			"160th_Detachment_SL",
			"160th_Detachment_RWA",
			"16th_Detachment_SL",
			// 3d Ground Vehicles Configured in 3dassets\cfgvehicles\cfgGround.hpp in same order as below
			"MRB_MRZR_Tan",
			"MRB_MRZR_Olive",
			"MRB_GMVR_Tan",
			"MRB_GMVR_Olive",
			"MRB_GMVR_Tan_M2",
			"MRB_GMVR_Olive_M2",
			"MRB_GMVR_Tan_Mk19",
			"MRB_GMVR_Olive_Mk19",
			"MRB_DAGOR_Tan",
			"MRB_DAGOR_Olive",
			"MRB_DAGOR_XM312_Tan",
			"MRB_DAGOR_XM312_Olive",
			"MRB_MATV_CROWS",
			"MRB_Grizzly_ATV_Tan",
			"MRB_Grizzly_ATV_Black",
			"MRB_Grizzly_ATV_Woodland",
			"MRB_M109A7_SPH_Woodland",
			"MRB_M109A7_SPH_Tan",
			"MRB_Zodiac",
			// Rotary Wing Configured in 3dassets\cfgvehicles\cfgAir.hpp in same order as below
			"MRB_MQ9",			//line 1
			"MRB_MH60M_DAP",
			"MRB_MH60M_MLASS",
			//"MH47E_Razor1", 		//line 77
			//"MH47E_Razor2",		//line 149
			//"MH47E_Razor3",		//line 221
			// 3d Logistics Configured in 3dassets\cfgvehicles.hpp in same order as below
			"MRB_Arsenal_Crate",		//line 147
			"MRB_Full_Arsenal_Crate",	//line 230
			"MRB_Equipment_Crate",		//line 243
			"MRB_CNR_Crate",		//line 269
			"MRB_Supply_Crate",		//line 303
			"MRB_Ammunition_Container",	//line 419
			"MRB_Fuel_Container",		//line 429
			"MRB_PersistenceCrate",
			"MRB_FTX_Arsenal_Crate"
		};
		/*requiredAddons[] =
		{
			"ace_ballistics",
			"ace_vector",
			"ace_huntir",
			"ace_attach",
			"ace_interaction",
			"ace_missileguidance",
			"rhsusf_c_heavyweapons",
			"rhs_c_weapons",
			"ace_nightvision",
			"A3_Weapons_F",
			"A3_Sounds_F",
			"A3_Sounds_F_Mark",
			"A3_CargoPoses_F",
			"A3_Weapons_F_Exp",
			"A3_Boat_F_Destroyer",
			"acre_main"
		};*/
	};
};
class BettIR_Config
{
    class CompatibleNightvisionGoggles
    {
         class MRB_PVS14
         {
              offset[] = {-0.05,0.12,0.12}; //0.1, 0.15,0.3
         };
		 class MRB_PVS14FS
         {
              offset[] = {-0.05,0.12,0.12};
         };
		 class MRB_PVS15
         {
              offset[] = {-0.05,0.12,0.12};
         };
		 class MRB_PVS15FS
         {
              offset[] = {-0.05,0.12,0.12};
         };
		 class MRB_AVS6
         {
              offset[] = {-0.05,0.12,0.12};
         };
		 class MRB_AVS6FS
         {
              offset[] = {-0.05,0.12,0.12};
         };
		 class MRB_PVS23
         {
              offset[] = {-0.05,0.12,0.12};
         };
		 class MRB_PVS23FS
         {
              offset[] = {-0.05,0.12,0.12};
         };
    };
};
#include "cfgGroups.hpp"
#include "cfgFactionClasses.hpp"
#include "cfgFunctions.hpp"
#include "cfgEditorCategories.hpp"
#include "cfgAmmo.hpp"
#include "cfgMagazines.hpp"
#include "cfgWeapons.hpp"
#include "cfgVehicleClasses.hpp"
#include "cfgVehicles.hpp"
