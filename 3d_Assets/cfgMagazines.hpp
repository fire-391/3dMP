#include "\3d_Assets\script_component.hpp"

class CfgMagazines {
	// 3d MRB Ammo weight fix MAAW
	class CA_LauncherMagazine;
	class rhs_mag_maaws_HE: CA_LauncherMagazine{mass = 34;};
	class rhs_mag_maaws_HEAT: CA_LauncherMagazine{mass = 44;};
	class rhs_mag_maaws_HEDP: CA_LauncherMagazine{mass = 36;};
	class rhs_mag_ATAS_2;
	class 3d_mag_ATAS_2: rhs_mag_ATAS_2 {
	hardpoints[] = {"VTX_ST_L","VTX_ST_R","VTX_ST_OUTBOARD"};
	pylonWeapon = "3d_weap_ATAS_launcher";
};
};
