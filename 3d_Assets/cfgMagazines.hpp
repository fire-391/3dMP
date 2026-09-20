#include "\3d_Assets\script_component.hpp"

class CfgMagazines {
    class rhs_mag_ATAS_2;
    class 3d_mag_ATAS_2: rhs_mag_ATAS_2 {
        hardpoints[] = {"VTX_ST_L","VTX_ST_R","VTX_ST_OUTBOARD"};
        pylonWeapon = "3d_weap_ATAS_launcher";
    };
    class VTX_M230_Chaingun_L;
    class VTX_M230_Chaingun_LT: VTX_M230_Chaingun_L {
        displayname = "M230 HEDP-T [H60]";
        pylonWeapon = "vtx_chaingun_hedpt";
        tracersEvery = 1;
        LastRoundsTracer = 1;
    };
    class VTX_M230_Chaingun_R;
    class VTX_M230_Chaingun_RT: VTX_M230_Chaingun_R {
        displayname = "M230 HEDP-T [H60]";
        pylonWeapon = "vtx_chaingun_hedpt";
        tracersEvery = 1;
        lastRoundsTracer = 1;
    };
};
