#include "cfgGroups.hpp"
#include "cfgFactionClasses.hpp"
#include "cfgFunctions.hpp"
#include "cfgEditorCategories.hpp"
#include "cfgAmmo.hpp"
#include "cfgMagazines.hpp"
#include "cfgWeapons.hpp"
#include "cfgVehicleClasses.hpp"
#include "cfgVehicles.hpp"
class CfgPatches {
  class 3d_Assets {
    author = "3d MRB";
    magazines[] = {};
    ammo[] = {};
    weapons[] = {
      // 3d weapons Configured in 3dassets\cfgWeapons.hpp in same order as below
      "MRB_PVS14",
      "MRB_PVS14FS",
      "MRB_PVS15",
      "MRB_PVS15FS",
      "MRB_PVS23",
      "MRB_PVS23FS",
      "MRB_AVS6",
      "MRB_AVS6FS",
      "ACE_TacticalLadder_Item",
      "MRB_UAV_Item",
      "MRB_IR_Strobe_Item"
  };
    units[] = {
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
      "MRB_MQ9",
      "MRB_AH6M",
      "MRB_MH6M",
      "MRB_MH60M",
      "MRB_MH60M_DAP",
      "MRB_MH60M_MLASS",
      // 3d Logistics Configured in 3dassets\cfgvehicles.hpp in same order as below
      "MRB_Arsenal_Crate",
      "MRB_Full_Arsenal_Crate",
      "MRB_Supply_Crate",
      "MRB_Ammunition_Container",
      "MRB_Fuel_Container",
      "MRB_FTX_Arsenal_Crate"
    };
  };
};
