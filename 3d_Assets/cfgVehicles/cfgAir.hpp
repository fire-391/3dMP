class USAF_MQ9;
class MRB_MQ1C : USAF_MQ9 {
  displayname = "MQ-1C Grey Eagle";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
  class AcreComponents {
			componentName = "ACRE_RF3080_UHF_TNC";
			mountedAntenna = "";
			mastMount[] = {};
			};
    class EventHandlers 
    {
      init = "_veh = (_this select 0); createVehicleCrew _veh;";
    };
};
class MELB_AH6M: MELB_base
{
	class UserActions: UserActions
		{
		class Pylon_Control_Swap
		{
			displayName = "Swap Weapons Control";
			onlyforplayer = 1;
			position = "doplnovani";
			radius = 2;
			condition = "((call MELB_fnc_findPlayer)==driver this) or ((call MELB_fnc_findPlayer)==gunner this)";
			statement = "call MELB_fnc_toggleweapons";
			showWindow = 0;
		};
		};
};
class MRB_AH6M : MELB_AH6M {
  displayName = "MRB AH-6M";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
    class TransportMagazines {};
    class TransportItems {
        ITEM_XX(ACE_microDAGR, 2);
        ITEM_XX(ToolKit, 1);
        ITEM_XX(DemoCharge_Remote_Mag, 1);
        ITEM_XX(ACE_M26_Clacker, 1);
    };
    class TransportBackpacks {
        BACK_XX(MRB_SPB_Mag, 1);
    };
};
class MELB_MH6M;
class MRB_MH6M : MELB_MH6M {
  displayName = "MRB MH-6M";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
    class TransportMagazines {};
    class TransportItems {
        ITEM_XX(ACE_microDAGR, 2);
        ITEM_XX(ToolKit, 1);
        ITEM_XX(DemoCharge_Remote_Mag, 1);
        ITEM_XX(ACE_M26_Clacker, 1);
        ITEM_XX(ACE_rope27, 2);
    };
    class TransportBackpacks {
        BACK_XX(MRB_SPB_Mag, 1);
    };
};
class vtx_MH60M;
class MRB_MH60M : vtx_MH60M {
  displayName = "MRB MH-60M";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
  		class AcreComponents {
			componentName = "ACRE_RF3080_UHF_TNC";
			mountedAntenna = "";
			mastMount[] = {};
			};
    class TransportMagazines {};
    class TransportItems {
        ITEM_XX(ACE_microDAGR, 2);
        ITEM_XX(ToolKit, 1);
        ITEM_XX(DemoCharge_Remote_Mag, 1);
        ITEM_XX(ACE_M26_Clacker, 1);
        ITEM_XX(ACE_rope27, 2);
    };
    class TransportBackpacks {
        BACK_XX(MRB_SPB_Med, 1);
        BACK_XX(MRB_SPB_Mag, 2);
        BACK_XX(MRB_SPB_Throw, 1);
    };
};
class vtx_MH60M_DAP;
class MRB_MH60M_DAP : vtx_MH60M_DAP {
  displayName = "MRB MH-60M_DAP";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
  		class AcreComponents {
			componentName = "ACRE_RF3080_UHF_TNC";
			mountedAntenna = "";
			mastMount[] = {};
			};
    class TransportMagazines {};
    class TransportItems {
        ITEM_XX(ACE_microDAGR, 2);
        ITEM_XX(ToolKit, 1);
        ITEM_XX(DemoCharge_Remote_Mag, 1);
        ITEM_XX(ACE_M26_Clacker, 1);
        ITEM_XX(ACE_rope27, 2);
    };
    class TransportBackpacks {
        BACK_XX(MRB_SPB_Med, 1);
        BACK_XX(MRB_SPB_Mag, 2);
        BACK_XX(MRB_SPB_Throw, 1);
    };
};
class vtx_MH60M_DAP_MLASS;
class MRB_MH60M_MLASS : vtx_MH60M_DAP_MLASS {
  displayName = "MRB MH-60M MLASS";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
  		class AcreComponents {
			componentName = "ACRE_RF3080_UHF_TNC";
			mountedAntenna = "";
			mastMount[] = {};
			};
    class TransportMagazines {};
    class TransportItems {
        ITEM_XX(ACE_microDAGR, 2);
        ITEM_XX(ToolKit, 1);
        ITEM_XX(DemoCharge_Remote_Mag, 1);
        ITEM_XX(ACE_M26_Clacker, 1);
        ITEM_XX(ACE_rope27, 2);
    };
    class TransportBackpacks {
        BACK_XX(MRB_SPB_Med, 1);
        BACK_XX(MRB_SPB_Mag, 2);
        BACK_XX(MRB_SPB_Throw, 1);
    };
};
class TF373_SOAR_MH47G;
class MRB_MH47G : TF373_SOAR_MH47G {
  displayName = "MRB MH-47G";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
  		class AcreComponents {
			componentName = "ACRE_RF3080_UHF_TNC";
			mountedAntenna = "";
			mastMount[] = {};
			};
    class TransportMagazines {};
    class TransportItems {
        ITEM_XX(ToolKit, 1);
        ITEM_XX(DemoCharge_Remote_Mag, 1);
        ITEM_XX(ACE_M26_Clacker, 1);
        ITEM_XX(ACE_rope27, 2);
    };
    class TransportBackpacks {
        BACK_XX(MRB_SPB_Med, 1);
        BACK_XX(MRB_SPB_Mag, 2);
        BACK_XX(MRB_SPB_Throw, 1);
    };
};
