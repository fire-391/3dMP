params ["_crate"];

if (!isServer) exitWith {};

clearItemCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

_crate addItemCargoGlobal ["rhs_mag_30Rnd_556x45_M855A1_PMAG", 15];
_crate addItemCargoGlobal ["rhsusf_100Rnd_556x45_soft_pouch", 6];
_crate addItemCargoGlobal ["rhs_mag_an_m8hc", 10];
_crate addItemCargoGlobal ["rhs_mag_m67", 10];
_crate addItemCargoGlobal ["tsp_flashbang_m84", 10];
_crate addItemCargoGlobal ["rhs_mag_M433_HEDP", 10];
_crate addItemCargoGlobal ["rhs_mag_m714_White", 10];
_crate addItemCargoGlobal ["ACE_quikclot", 20];
_crate addItemCargoGlobal ["ACE_packingBandage", 20];
_crate addItemCargoGlobal ["kat_TXA", 5];
_crate addItemCargoGlobal ["ACE_tourniquet", 4];
_crate addItemCargoGlobal ["kat_ketamine", 5];