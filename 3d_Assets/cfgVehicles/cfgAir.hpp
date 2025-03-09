class USAF_MQ9;
class MRB_MQ9 : USAF_MQ9 {
  displayname = "MQ-9 Reaper";
  faction = "B_3d_Marine_Raider";
  editorSubcategory = "B_3d_Marine_Raider_Aircraft";
  scope = 2;
  side = 1;
  scopeCurator = 2;
  scopeArsenal = 2;
    class EventHandlers 
    {
      init = "_veh = (_this select 0); createVehicleCrew _veh;";
    };
};
class RHS_MELB_AH6M;
class MRB_AH6M : RHS_MELB_AH6M {
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
        ITEM_XX(ACE_rope27, 2);
    };
    class TransportBackpacks {
        BACK_XX(MRB_SPB_Med, 1);
        BACK_XX(MRB_SPB_Mag, 2);
    };
};
class RHS_MELB_MH6M;
class MRB_MH6M : RHS_MELB_MH6M {
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
        ITEM_XX(ACE_rope27, 2);
    };
    class TransportBackpacks {
        BACK_XX(MRB_SPB_Med, 1);
        BACK_XX(MRB_SPB_Mag, 2);
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
    class TransportMagazines {};
    class TransportItems {
        ITEM_XX(ACE_microDAGR, 2);
        ITEM_XX(ToolKit, 1);
        ITEM_XX(DemoCharge_Remote_Mag, 1);
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
    class TransportMagazines {};
    class TransportItems {
        ITEM_XX(ACE_microDAGR, 2);
        ITEM_XX(ToolKit, 1);
        ITEM_XX(DemoCharge_Remote_Mag, 1);
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
    class TransportMagazines {};
    class TransportItems {
        ITEM_XX(ACE_microDAGR, 2);
        ITEM_XX(ToolKit, 1);
        ITEM_XX(DemoCharge_Remote_Mag, 1);
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
    class TransportMagazines {};
    class TransportItems {
        ITEM_XX(ToolKit, 1);
        ITEM_XX(DemoCharge_Remote_Mag, 1);
        ITEM_XX(ACE_rope27, 2);
    };
    class TransportBackpacks {
        BACK_XX(MRB_SPB_Med, 1);
        BACK_XX(MRB_SPB_Mag, 2);
        BACK_XX(MRB_SPB_Throw, 1);
    };
};
