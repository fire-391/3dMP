#include "\3d_Assets\script_component.hpp"

class CfgAmmo 
{	
/*
	//New Hellfire Config
	class ACE_Hellfire_AGM114K;
    class ACE_Hellfire_AGM114K2X: ACE_Hellfire_AGM114K {
        displayName = "2x AGM-114K";
        displayNameShort = "2x AGM-114K";
        description = "2x AGM-114K";
        descriptionShort = "2x AGM-114K";

        model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K";
        
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = { "LOAL", "LOBL" };

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 70;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "hellfire";
            attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
        };
		
    };
    class ACE_Hellfire_AGM114N2X: ACE_Hellfire_AGM114K2X {
        displayName = "2x AGM-114N";
        displayNameShort = "2x AGM-114N";
        description = "2x AGM-114N";
        descriptionShort = "2x AGM-114N";
        hit = 200;
        indirectHit = 200;
        indirectHitRange = 12;
        submunitionAmmo = "";
        explosionEffects = "BombExplosion";
		
		class ace_missileguidance: ace_missileguidance {
            enabled = 1; // Missile Guidance must be explicitly enabled
        };
    };
	*/
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
	//Rotary Wing Ammo types
	class RHS_Ammo_DAGR;
	class RHS_DAGR_Ammo_MELB: RHS_Ammo_DAGR 
	{
		manualControl = 0;
		ace_frag_charge = 2400;
		ace_frag_classes[] = {"ace_frag_medium","ace_frag_medium_HD"};
		ace_frag_enabled = 1;
		ace_frag_gurney_c = 2700;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 8000;
		class ace_missileguidance 
		{
			enabled = 1;
			minDeflection = 0.0005;
			maxDeflection = 0.01;
			incDeflection = 0.0005;
			canVanillaLock = 0;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH","LIDAR","SARH","Optic","Thermal","GPS","SACLOS","MCLOS"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL"};
			seekLastTargetPos = 1;
			seekerAngle = 70;
			seekerAccuracy = 1;
			seekerMinRange = 1;
			seekerMaxRange = 5000;
			defaultAttackProfile = "hellfire_lo";
			attackProfiles[] = {"hellfire_hi","hellfire_lo"};
		};
	};
	//40mm UGL physics fix
	/*class GrenadeHand;
    class SmokeShell: GrenadeHand
	{
		simulation="shotsmoke";
        deflectionSlowDown = 0.4;
    };*/
	class SmokeShellYellow;
    class SmokeShell;
    class SmokeShellGreen;
    class SmokeShellRed;
    class rhs_40mm_smoke_white: SmokeShell
    {
        model = "\A3\weapons_f\ammo\UGL_slug";
		simulation="shotsmoke";
        deflectionSlowDown = 0.4;
    };
    class rhs_40mm_smoke_red: SmokeShellRed
    {
        model = "\A3\weapons_f\ammo\UGL_slug";
		simulation="shotsmoke";
        deflectionSlowDown = 0.4;
    };
    class rhs_40mm_smoke_green: SmokeShellGreen
    {
        model = "\A3\weapons_f\ammo\UGL_slug";
		simulation="shotsmoke";
        deflectionSlowDown = 0.4;
    };
    class rhs_40mm_smoke_yellow: SmokeShellYellow
    {
        model = "\A3\weapons_f\ammo\UGL_slug";
		simulation="shotsmoke";
        deflectionSlowDown = 0.4;
    };
};