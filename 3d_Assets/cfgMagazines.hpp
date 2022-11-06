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
	
	//Milgp hearing
    class milgp_h_cap_02_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	 ace_hearing_lowerVolume = 0.00;  // Muffling of the sound (0 to 1, higher means more muffling)
	};
    class milgp_h_cap_02_KHK {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_02_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_02_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_02_goggles_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_02_goggles_KHK {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_02_goggles_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_02_goggles_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_03_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_03_KHK {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_03_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_03_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_03_goggles_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_03_goggles_KHK {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_03_goggles_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_03_goggles_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_02_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_02_KHK {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_02_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_02_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_02_goggles_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_02_goggles_KHK {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_02_goggles_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_02_goggles_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_03_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_03_KHK {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_03_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_03_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_03_goggles_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_03_goggles_KHK {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_03_goggles_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_cap_backwards_03_goggles_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_goggles_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_goggles_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_goggles_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_goggles_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_goggles_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_goggles_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_01_goggles_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_goggles_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_goggles_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_goggles_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_goggles_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_goggles_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_goggles_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_02_goggles_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_goggles_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_goggles_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_goggles_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_goggles_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_goggles_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_goggles_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_03_goggles_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_goggles_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_goggles_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_goggles_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_goggles_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_goggles_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_goggles_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_04_goggles_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_goggles_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_goggles_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_goggles_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_goggles_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_goggles_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_goggles_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_05_goggles_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_goggles_CB_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_goggles_CB {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_goggles_khk_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_goggles_khk {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_goggles_MC {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_goggles_RGR_hexagon {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
    class milgp_h_opscore_06_goggles_RGR {
         ace_hearing_protection = 0.80;  // Protection against deafening (0 to 1, higher means more protection)
	};
};
