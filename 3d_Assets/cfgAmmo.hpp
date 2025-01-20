#include "\3d_Assets\script_component.hpp"

class CfgAmmo 
{
    class FlareCore;
    class FlareBase: FlareCore {};
    class Flare_82mm_AMOS_White: FlareCore 
	{
        intensity = 2500000;
    };
    class F_40mm_White: FlareBase 
	{
        intensity = 1250000;
        timeToLive = 40;
        coefGravity = 0.25;
    };
    class rhs_40mm_white: F_40mm_White 
	{
        intensity = 1250000;
        timeToLive = 40;
    };
    class vtx_30mm_shells_hedp;
    class vtx_30mm_shells_hedpt: vtx_30mm_shells_hedp {
        tracerColor[] = {0.7,0.1,0.1,0.04};
        tracerColorR[] = {0.7,0.1,0.1,0.04};
    };
};
