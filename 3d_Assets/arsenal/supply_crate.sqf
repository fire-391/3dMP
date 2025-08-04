params ["_crate"];

if (!isServer) exitWith {};

clearItemCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

_crate addItemCargoGlobal ["rhs_mag_30Rnd_556x45_M855A1_PMAG", 60];
_crate addItemCargoGlobal ["rhsusf_200Rnd_556x45_soft_pouch", 9];
_crate addItemCargoGlobal ["rhsusf_100Rnd_556x45_soft_pouch", 12];
_crate addItemCargoGlobal ["rhs_mag_M397_HET", 40];
_crate addItemCargoGlobal ["rhs_mag_M433_HEDP", 20];
_crate addItemCargoGlobal ["rhs_mag_m714_White", 15];
_crate addItemCargoGlobal ["tsp_flashbang_m84", 40];
_crate addItemCargoGlobal ["rhs_mag_m67", 30];
_crate addItemCargoGlobal ["SmokeShellYellow", 30];
_crate addItemCargoGlobal ["MS_Strobe_Mag_1", 5];
_crate addItemCargoGlobal ["ACE_quikclot", 140];
_crate addItemCargoGlobal ["ACE_packingBandage", 140];
_crate addItemCargoGlobal ["kat_TXA", 16];
_crate addItemCargoGlobal ["kat_EACA", 15];
_crate addItemCargoGlobal ["kat_ketamine", 15];
_crate addItemCargoGlobal ["ACE_tourniquet", 12];
_crate addItemCargoGlobal ["ACE_splint", 20];
_crate addItemCargoGlobal ["kat_bloodIV_O_N_500", 15];
_crate addItemCargoGlobal ["kat_bloodIV_O_N", 3];
_crate addItemCargoGlobal ["MRAWS_HEAT_F", 6];
_crate addItemCargoGlobal ["MRAWS_HEAT55_F", 6];
_crate addItemCargoGlobal ["MRAWS_HE_F", 10];
_crate addItemCargoGlobal ["rhs_weap_M136", 4];
_crate addItemCargoGlobal ["DemoCharge_Remote_Mag", 4];
