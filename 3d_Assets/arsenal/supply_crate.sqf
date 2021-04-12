params ["_crate"];

if (!isServer) exitWith {};

clearItemCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

_crate addItemCargoGlobal ["ACE_plasmaIV_500", 10];
_crate addItemCargoGlobal ["ACE_plasmaIV", 5];
_crate addItemCargoGlobal ["ACE_elasticBandage", 40];
_crate addItemCargoGlobal ["ACE_quikclot", 100];
_crate addItemCargoGlobal ["ACE_packingBandage", 40];
_crate addItemCargoGlobal ["ACE_Morphine", 20];
_crate addItemCargoGlobal ["ACE_epinephrine", 10];
_crate addItemCargoGlobal ["ACE_SpareBarrel", 1];
_crate addItemCargoGlobal ["ACE_Earplugs", 20];
_crate addItemCargoGlobal ["ACE_CableTie", 50];
_crate addItemCargoGlobal ["LaserBatteries", 5];
//_crate addItemCargoGlobal ["MRB_IR_Strobe_Item", 5];
_crate addItemCargoGlobal ["ACE_M26_Clacker", 1];

_crate addWeaponCargoGlobal ["rhs_weap_m72a7", 2];

_crate addMagazineCargoGlobal ["rhs_fim92_mag", 2];
_crate addMagazineCargoGlobal ["MRAWS_HE_F", 8];
_crate addMagazineCargoGlobal ["MRAWS_HEAT_F", 8];
_crate addMagazineCargoGlobal ["rhs_mag_30Rnd_556x45_Mk318_Stanag", 50];
_crate addMagazinecargoGlobal ["rhs_mag_30Rnd_556x45_Mk262_Stanag", 30];
_crate addMagazineCargoGlobal ["rhs_mag_20Rnd_SCAR_762x51_m61_ap", 20];
_crate addMagazineCargoGlobal ["rhsusf_20Rnd_762x51_SR25_m118_special_Mag", 5];
//_crate addMagazineCargoGlobal ["rhsusf_20Rnd_762x51_SR25_m993_Mag", 10];
//_crate addMagazinecargoGlobal ["rhsusf_20Rnd_762x51_SR25_m62_Mag", 10];
_crate addMagazineCargoGlobal ["rhsusf_200Rnd_556x45_soft_pouch", 5];
_crate addMagazineCargoGlobal ["rhsusf_100Rnd_762x51_M80a1EPR", 5];
_crate addMagazineCargoGlobal ["rhsusf_mag_6Rnd_M433_HEDP", 8];
_crate addMagazineCargoGlobal ["rhsusf_mag_6Rnd_M714_White", 2];
_crate addMagazineCargoGlobal ["rhs_mag_M433_HEDP", 20];
_crate addMagazineCargoGlobal ["rhs_mag_M714_white", 10];
_crate addMagazineCargoGlobal ["rhs_mag_M715_green", 10];
_crate addMagazineCargoGlobal ["rhs_mag_M713_red", 10];
_crate addMagazineCargoGlobal ["rhs_mag_M661_green", 5];
_crate addMagazineCargoGlobal ["rhs_mag_M662_red", 5];
_crate addMagazineCargoGlobal ["AMP_Breaching_Charge_Mag", 3];
_crate addMagazineCargoGlobal ["ACE_M84", 10];
_crate addMagazineCargoGlobal ["RHS_Mag_M67", 15];
_crate addMagazineCargoGlobal ["MS_Strobe_Mag_1", 4];
_crate addMagazineCargoGlobal ["rhs_mag_an_m8hc", 20];
_crate addMagazineCargoGlobal ["SmokeShellGreen", 10];
_crate addMagazineCargoGlobal ["Democharge_Remote_Mag", 3];
