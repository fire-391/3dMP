#include "\3d_Assets\script_component.hpp"

class CfgMagazines {
/*	// Rotary Wing Magazines
	class 5000Rnd_762x51_Belt;
	class FakeMagazine_MELB: 5000Rnd_762x51_Belt {
		count = 0;
		displaynameshort = "-";
		displayName = "-";
		descriptionShort = "-";
		tracersEvery = 0;
		weight = 0;
	};
	
	class 6Rnd_ACE_Hellfire_AGM114K;
	class mrb_mag_AGM114K_1X: 6Rnd_ACE_Hellfire_AGM114K
	{
		displayName			= "AGM-114K 1x(ACE)";
		displaynameshort	= "LG";
		descriptionShort	= "AGM-114K";
		ammo				= "ACE_Hellfire_AGM114K2X";
		maxLeadSpeed		= 100;
		count				= 1;
		mass 				= 70;
	};
	class mrb_mag_AGM114K_2X: mrb_mag_AGM114K_1X
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x;
		count					= 2;
		displayName				= "AGM-114K 2x(ACE)";
		mass 					= 70;
		hardpoints[]			= {"RHS_HP_HELLFIRE_RACK","RHS_HP_LONGBOW_RACK","RHS_HP_MELB"};
		pylonWeapon 			= "ace_hellfire_launcher";
		mirrorMissilesIndexes[]	= {2,1};
	};


	class mrb_mag_AGM114N_1X: mrb_mag_AGM114K_1X
	{
		displayName			= "AGM-114N 1x(ACE)";
		displaynameshort	= "LG TB";
		descriptionShort	= "AGM-114N";
		ammo				= "ACE_Hellfire_AGM114N2X";
		maxLeadSpeed		= 100;
		count				= 1;
		mass 				= 70;			
	};

	class mrb_mag_AGM114N_2X: mrb_mag_AGM114N_1X
	{
		model					= \rhsusf\addons\rhsusf_airweapons\proxypylon\rhsusf_pylon_m_agm114_2x;
		count					= 2;
		displayName				= "AGM-114N 2x(ACE)";
		mass 					= 70;
		hardpoints[]			= {"RHS_HP_HELLFIRE_RACK","RHS_HP_LONGBOW_RACK","RHS_HP_MELB"};
		pylonWeapon 			= "ace_hellfire_launcher_N";
		mirrorMissilesIndexes[]	= {2,1};
	};*/
	
	// 3d MRB Ammo weight fix MAAW
	class CA_LauncherMagazine;
	class rhs_mag_maaws_HE: CA_LauncherMagazine{mass = 34;};
	class rhs_mag_maaws_HEAT: CA_LauncherMagazine{mass = 44;};
	class rhs_mag_maaws_HEDP: CA_LauncherMagazine{mass = 36;};
};
