class B_Carryall_cbr;
class MRB_SPB_Mag: B_Carryall_cbr {
  scope = 2;
  scopeArsenal = 2;
  author = "3d Mod Team";
  displayName = "3d Carryall Mag Speedball";
  class TransportMagazines {
    MAG_XX(rhs_mag_30Rnd_556x45_M855A1_PMAG, 16);
    MAG_XX(rhsusf_100Rnd_556x45_soft_pouch, 6);
  };
};
class MRB_SPB_Throw: B_Carryall_cbr {
  scope = 2;
  scopeArsenal = 2;
  author = "3d Mod Team";
  displayName = "3d Carryall Throwable Speedball";
  class TransportMagazines {
    MAG_XX(rhs_mag_an_m8hc, 10);
    MAG_XX(rhs_mag_m67, 10);
    MAG_XX(tsp_flashbang_m84, 10);
    MAG_XX(rhs_mag_M433_HEDP, 10);
    MAG_XX(rhs_mag_m714_White, 10);
  };
};
class MRB_SPB_Med: B_Carryall_cbr {
  scope = 2;
  scopeArsenal = 2;
  author = "3d Mod Team";
  displayName = "3d Carryall Medical Speedball";
  class TransportItems {
    ITEM_XX(ACE_quikclot, 20);
    ITEM_XX(ACE_packingBandage, 20);
    ITEM_XX(kat_TXA, 5);
    ITEM_XX(ACE_tourniquet, 4);
    ITEM_XX(kat_ketamine, 5);
  };
};
/*class B_AssaultPack_Base;
class rhsusf_assault_eagleaiii_ucp: B_AssaultPack_Base
{
	scope = 1;
	maximumLoad = 320; //160 - 420
};
class MRB_assault_eagleaiii_coy_Medic: rhsusf_assault_eagleaiii_ucp
{
	scope = 1;
	author = "3d Mod Team";
	displayName = "3d Tactical Medic Backpack";
	hiddenSelectionsTextures[] = {"3d_Assets\data\carryall_corpsman_coy_co.paa"};
	maximumLoad = 320;
	mass = 20;
};
