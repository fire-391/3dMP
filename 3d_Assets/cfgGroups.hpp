class CfgGroups {
    class West {
        /*class LOP_IA {
            class Infantry {
                class MRB_IA_SFT {
                    aliveCategory = "Infantry";
                    faction = "LOP_IA";
                    name = "Special Forces Team";
                    side = 1;
                    class Unit0 {
                        position[] = {0,5,0};
                        side = 1;
                        rank = "Sergeant";
                        vehicle = "PO_IA_Infantry_SF_TL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        side = 1;
                        rank = "Corporal";
                        vehicle = "PO_IA_Infantry_SF_SL";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_Operator";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_AT";
                    };
                    class Unit4 {
                        position[] = {9,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_MG";
                    };
                    class Unit5 {
                        position[] = {11,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_Corpsman";
                    };
                    class Unit6 {
                        position[] = {3,5,0};
                        side = 1;
                        rank = "Corporal";
                        vehicle = "PO_IA_Infantry_SF_SL";
                    };
                    class Unit7 {
                        position[] = {5,5,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_Operator_2";
                    };
                    class Unit8 {
                        position[] = {7,5,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_GL";
                    };
                    class Unit9 {
                        position[] = {9,5,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_MG";
                    };
                    class Unit10 {
                        position[] = {11,5,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_Corpsman";
                    };
                };
                class MRB_IA_SF_SFS_RPG7 {
                    aliveCategory = "Infantry";
                    faction = "LOP_IA";
                    name = "Special Forces Section (RPG-7)";
                    side = 1;
                    class Unit0 {
                        position[] = {0,5,0};
                        side = 1;
                        rank = "Corporal";
                        vehicle = "PO_IA_Infantry_SF_SL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_Operator";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_AT";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_MG";
                    };
                    class Unit4 {
                        position[] = {9,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_Corpsman";
                    };
                };
                class MRB_IA_SF_SFS_M136 {
                    aliveCategory = "Infantry";
                    faction = "LOP_IA";
                    name = "Special Forces Section (M136)";
                    side = 1;
                    class Unit0 {
                        position[] = {0,5,0};
                        side = 1;
                        rank = "Corporal";
                        vehicle = "PO_IA_Infantry_SF_SL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_Operator_2";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_GL";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_MG";
                    };
                    class Unit4 {
                        position[] = {9,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_Corpsman";
                    };
                };
                class MRB_IA_SFSE {
                    aliveCategory = "Infantry";
                    faction = "LOP_IA";
                    name = "Special Forces Sniper Element";
                    side = 1;
                    class Unit0 {
                        position[] = {0,5,0};
                        side = 1;
                        rank = "Corporal";
                        vehicle = "PO_IA_Infantry_SF_Marksman";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        side = 1;
                        rank = "Private";
                        vehicle = "PO_IA_Infantry_SF_Operator";
                    };
                };
            };
        };*/
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
