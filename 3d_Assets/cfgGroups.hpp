class CfgGroups {
  class West {
    class B_3d_Marine_Raider {
    name = "3d Marine Raider Battalion"; //Faction Name
      class BattHQ {
      name = "3d Battalion HQ"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
        class BattalionHQ {
        name = "Battalion HQ"; //Name of Group
        faction = "3d Marine Raider Battalion"; //Faction
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
        side = 1; //Side
          class Unit0 {
          side = 1;
          vehicle = "MRB_Battalion_CO"; //Class name of desired solider
          rank = "CAPTAIN"; // Rank
          position[] = {5,0,0}; //Position in the formation
          };
          class Unit1 {
          side = 1;
          vehicle = "MRB_Battalion_XO";
          rank = "LIEUTENANT";
          position[] = {4,0,0};
          };
          class Unit2 {
          side = 1;
          vehicle = "MRB_Battalion_SGM";
          rank = "SERGEANT";
          position[] = {3,0,0};
          };
          class Unit3 {
          side = 1;
          vehicle = "MRB_Battalion_CMC";
          rank = "SERGEANT";
          position[] = {2,0,0};
          };
        };
      };
      class ComHQ {
      name = "3d Company HQ"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
        class CompanyHQ {
        name = "Company HQ"; //Name of Group
        faction = "3d Marine Raider Battalion"; //Faction
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
        side = 1; //Side
          class Unit0 {
          side = 1;
          vehicle = "MRB_Company_CO"; //Class name of desired solider
          rank = "CAPTAIN"; // Rank
          position[] = {5,0,0}; //Position in the formation
          };
          class Unit1 {
          side = 1;
          vehicle = "MRB_Company_XO";
          rank = "LIEUTENANT";
          position[] = {4,0,0};
          };
          class Unit2 {
          side = 1;
          vehicle = "MRB_Company_FS";
          rank = "SERGEANT";
          position[] = {3,0,0};
          };
          class Unit3 {
          side = 1;
          vehicle = "MRB_Company_GY";
          rank = "SERGEANT";
          position[] = {2,0,0};
          };
          class Unit4 {
          side = 1;
          vehicle = "MRB_Company_SARC";
          rank = "SERGEANT";
          position[] = {1,0,0};
          };
        };
      };
      class MSOTHQ {
      name = "3d MSOT Team"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
        class MHQ {
        name = "Team HQ";
        side = 1;
        icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
        faction = "3d Marine Raider Battalion";
          class Unit0 {
          side = 1;
          vehicle = "MRB_Team_TL";
          rank = "CAPTAIN";
          position[] = {4,0,0};
          };
          class Unit1 {
          side = 1;
          vehicle = "MRB_Team_CHIEF";
          rank = "SERGEANT";
          position[] = {3,0,0};
          };
          class Unit2 {
          side = 1;
          vehicle = "MRB_Team_SARC";
          rank = "SERGEANT";
          position[] = {2,0,0};
          };
          class Unit3 {
          side = 1;
          vehicle = "MRB_Team_COMC";
          rank = "SERGEANT";
          position[] = {1,0,0};
          };
        };
      class Element {
      name = "Element";
      side = 1;
      icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
      faction = "3d Marine Raider Battalion";
          class Unit0 {
          side = 1;
          vehicle = "MRB_Element_LDR";
          rank = "SERGEANT";
          position[] = {5,0,0};
          };
          class Unit1 {
          side = 1;
          vehicle = "MRB_Element_ALDR";
          rank = "SERGEANT";
          position[] = {4,0,0};
          };
          class Unit2 {
          side = 1;
          vehicle = "MRB_Element_SARC";
          rank = "SERGEANT";
          position[] = {3,0,0};
          };
          class Unit3 {
          side = 1;
          vehicle = "MRB_Element_CSO";
          rank = "CORPORAL";
          position[] = {2,0,0};
          };
          class Unit4 {
          side = 1;
          vehicle = "MRB_Element_CSO";
          rank = "CORPORAL";
          position[] = {1,0,0};
          };
        };
      };
      class CJSOAC {
      name = "CJSOAC"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
        class CJSOAC_HQ {
        name = "CJSOAC HQ"; //Name of Group
        faction = "3d Marine Raider Battalion"; //Faction
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        side = 1; //Side
          class Unit0 {
          side = 1;
          vehicle = "CJSOAC_Detachment_CO"; //Class name of desired solider
          rank = "CAPTAIN"; // Rank
          position[] = {5,0,0}; //Position in the formation
          };
          class Unit1 {
          side = 1;
          vehicle = "CJSOAC_Detachment_XO";
          rank = "LIEUTENANT";
          position[] = {4,0,0};
          };
        };
      };
      class Units {
      name = "160th Units"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
        class 160th_Section {
        name = "Detachment Section"; //Name of Group
        faction = "3d Marine Raider Battalion"; //Faction
        icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
        side = 1; //Side
          class Unit0 {
          side = 1;
          vehicle = "160th_Detachment_SL"; //Class name of desired solider
          rank = "LIEUTENANT"; // Rank
          position[] = {5,0,0}; //Position in the formation
          };
          class Unit1 {
          side = 1;
          vehicle = "160th_Detachment_RWA";
          rank = "LIEUTENANT";
          position[] = {4,0,0};
          };
          class Unit2 {
          side = 1;
          vehicle = "160th_Detachment_RWA";
          rank = "LIEUTENANT";
          position[] = {3,0,0};
          };
          class Unit3 {
          side = 1;
          vehicle = "160th_Detachment_RWA";
          rank = "LIEUTENANT";
          position[] = {2,0,0};
          };
          class Unit4 {
          side = 1;
          vehicle = "160th_Detachment_RWA";
          rank = "LIEUTENANT";
          position[] = {1,0,0};
          };
        };
      };
      class SOW {
      name = "16th SOW"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
        class 16th_Section {
        name = "Detachment Section"; //Name of Group
        faction = "3d Marine Raider Battalion"; //Faction
        icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
        side = 1; //Side
          class Unit0 {
          side = 1;
          vehicle = "16th_Detachment_SL"; //Class name of desired solider
          rank = "LIEUTENANT"; // Rank
          position[] = {5,0,0}; //Position in the formation
          };
        };
      };
    };
  };
};
