params ["_crate"];

if (!isServer) exitWith {};

clearItemCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearBackpackCargoGlobal _crate;

//_crate addItemCargoGlobal ["ACE_Vector", 10];
//_crate addItemCargoGlobal ["ACE_MX2A", 50];
//_crate addItemCargoGlobal ["ACE_key_master", 1];
_crate addItemCargoGlobal ["ACE_key_lockpick", 10];
_crate addItemCargoGlobal ["ACE_key_west", 5];
_crate addItemCargoGlobal ["ACRE_PRC152", 100];
_crate addItemCargoGlobal ["ACRE_PRC117F", 100];
//_crate addItemCargoGlobal ["lerca_1200_black", 50];
//_crate addItemCargoGlobal ["lerca_1200_tan", 50];
//_crate addItemCargoGlobal ["Laserdesignator", 5];
_crate addItemCargoGlobal ["ACE_rope12", 20];
_crate addItemCargoGlobal ["ACE_rope15", 20];
_crate addItemCargoGlobal ["ACE_rope18", 20];
_crate addItemCargoGlobal ["ACE_rope27", 2];
_crate addItemCargoGlobal ["ACE_rope36", 20];
_crate addItemCargoGlobal ["ItemSMGR", 10];

_crate addMagazineCargoGlobal ["Laserbatteries", 10];
_crate addMagazineCargoGlobal ["kat_Painkiller", 69];