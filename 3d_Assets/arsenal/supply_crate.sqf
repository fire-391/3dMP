params ["_crate"];

if (!isServer) exitWith {};

clearItemCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

//Ammo
_crate addItemCargoGlobal ["rhs_mag_30Rnd_556x45_M855A1_PMAG", 60];
_crate addItemCargoGlobal ["rhsusf_200Rnd_556x45_soft_pouch", 9];
_crate addItemCargoGlobal ["rhsusf_100Rnd_556x45_soft_pouch", 12];
_crate addItemCargoGlobal ["rhs_mag_M397_HET", 40];
_crate addItemCargoGlobal ["rhs_mag_M433_HEDP", 20];
_crate addItemCargoGlobal ["rhs_mag_m714_White", 15];
_crate addItemCargoGlobal ["tsp_flashbang_m84", 40];
_crate addItemCargoGlobal ["rhs_mag_m67", 30];
_crate addItemCargoGlobal ["SmokeShellYellow", 30];
_crate addItemCargoGlobal ["BJ_Strobes_helstar", 5];
_crate addItemCargoGlobal ["BJ_Strobes_raillink", 5];
_crate addItemCargoGlobal ["MRAWS_HEAT_F", 6];
_crate addItemCargoGlobal ["MRAWS_HEAT55_F", 6];
_crate addItemCargoGlobal ["MRAWS_HE_F", 10];
_crate addItemCargoGlobal ["rhs_weap_M136", 4];
_crate addItemCargoGlobal ["DemoCharge_Remote_Mag", 4];

//Medical
_crate addItemCargoGlobal ["ACM_PressureBandage", 80];
_crate addItemCargoGlobal ["ACM_EmergencyTraumaDressing", 45];
_crate addItemCargoGlobal ["ACM_ChestSeal", 30];
_crate addItemCargoGlobal ["ACE_tourniquet", 50];
_crate addItemCargoGlobal ["ACM_ElasticWrap", 45];
_crate addItemCargoGlobal ["ACM_SAMSplint", 6];

//Airway
_crate addItemCargoGlobal ["ACM_NPA", 18];
_crate addItemCargoGlobal ["ACM_IGel", 6];
_crate addItemCargoGlobal ["ACM_SuctionBag", 12];
_crate addItemCargoGlobal ["ACM_NCDKit", 15];
_crate addItemCargoGlobal ["ACM_ChestTubeKit", 3];
_crate addItemCargoGlobal ["ACM_CricKit", 3];
_crate addItemCargoGlobal ["ACM_ThoracostomyKit", 3];

//Sharps
_crate addItemCargoGlobal ["ACM_IO_EZ", 6];
_crate addItemCargoGlobal ["ACM_IO_FAST", 6];
_crate addItemCargoGlobal ["ACM_IV_16g", 9];
_crate addItemCargoGlobal ["ACM_Syringe_10", 15];
_crate addItemCargoGlobal ["ACM_Syringe_5", 6];
_crate addItemCargoGlobal ["ACM_Syringe_3", 6];
_crate addItemCargoGlobal ["ACM_Syringe_1", 12];

//Meds
_crate addItemCargoGlobal ["ACM_Paracetamol", 15];
_crate addItemCargoGlobal ["ACM_Lozenge_Fentanyl", 6];
_crate addItemCargoGlobal ["ACM_Spray_Naloxone", 6];
_crate addItemCargoGlobal ["ACM_Vial_Atropine", 6];
_crate addItemCargoGlobal ["ACE_epinephrine", 6];
_crate addItemCargoGlobal ["ACM_Vial_Ketamine", 6];
_crate addItemCargoGlobal ["ACM_Vial_Lidocaine", 3];
_crate addItemCargoGlobal ["ACM_Vial_Ondansetron", 6];
_crate addItemCargoGlobal ["ACM_Vial_TXA", 9];
_crate addItemCargoGlobal ["ACM_AmmoniaInhalant", 3];

_crate addItemCargoGlobal ["ACM_FieldBloodTransfusionKit_500", 6];
_crate addItemCargoGlobal ["ACM_BloodBag_ON_500", 6];
_crate addItemCargoGlobal ["ACM_BloodBag_ON_250", 3];
