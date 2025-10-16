#include "\3d_Assets\script_component.hpp"

class CfgAmmo 
{
    class MissileCore;
	class MissileBase;
	class Missile_AGM_02_F;
    class fza_275_m261;
    class fza_275_m255a1;
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
    class M261_Ammo_MELB: fza_275_m261
    { 
        submunitionDirectionType    = "SubmunitionModelDirection";
        submunitionAmmo             = "fza_m73mpsm";
        submunitionConeType[]       = {"randomcenter",9};
        submunitionConeAngle        = 2;
        triggerDistance             = 500;
        submunitionInitSpeed        = 500;
        deleteParentWhenTriggered   = 1;
    };
    class M255A1_Ammo_MELB: fza_275_m255a1
    {
        submunitionDirectionType    ="SubmunitionModelDirection";
        submunitionAmmo             = "fza_flec_cluster";
        submunitionConeType[]       = {"randomcenter",100};
        submunitionConeAngle        = 12;
        triggerDistance             = 200;
        submunitionInitSpeed        = 500;
        deleteParentWhenTriggered   = 1;
        submunitionInitialOffset[]  = {0,0,2};

        soundHit1[]                 = {"A3\sounds_f\dummysound",2.5118864,1,5};
        multiSoundHit[]             = {"soundHit1",1};
    };
	class DAGR_Ammo_MELB: MissileBase
	{
		autoSeekTarget = 1;
    missileLockCone = 30;
		class ace_missileguidance
		{
			enabled = 1;
			pitchRate = 25;
			yawRate = 25;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH"};
			defaultSeekerLockMode = "LOBL";
			seekerLockModes[] = { "LOAL", "LOBL" };
			defaultNavigationType = "Direct";
			navigationTypes[] = { "Direct" };
			seekLastTargetPos = 1;
			seekerAngle = 30;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 5000;
			defaultAttackProfile = "DIR";
			attackProfiles[] = {"DIR"};
		};
	};
	class MELB_AGM_114K: Missile_AGM_02_F
	{
		class ace_missileguidance
		{
			enabled = 1;
			pitchRate = 30;
			yawRate = 30;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = { "LOAL", "LOBL" };
			defaultNavigationType = "Direct";
			navigationTypes[] = { "Direct","ZeroEffortMiss" };
			seekLastTargetPos = 1;
			seekerAngle = 30;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 8000;
			defaultAttackProfile = "hellfire";
			attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
		};
	};
};

