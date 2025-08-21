class CfgPatches
{
    class pilot_helmets
    {
		units[] = {};
        weapons[] =
        {
            "MRB_H_hgu56_Carrera",
            "MRB_H_hgu56_visor_Speirs",
            "MRB_H_hgu56_visor_Brueske",
            "MRB_H_hgu56_visor_Levorse",
            "MRB_H_hgu56_visor_mask_Jordan",
            "MRB_H_hgu56_visor_mask_Whelan"
        };
        author[] =  
        {
            "Spookers"
        };
        requiredVersion = 1.32;
        requiredAddons[] =
        {
            "rhsusf_c_troops"
        }; 
    };
};
class CfgWeapons
{
	class Uniform_Base;
	class ItemCore;
	class UniformItem;
    class rhsusf_hgu56p;
    class rhsusf_hgu56p_visor;
    class rhsusf_hgu56p_visor_mask;
	class milgp_v_marciras_marksman_belt_mc_mc_mc;
    class MRB_H_hgu56_base : rhsusf_hgu56p
    {
        author = "Spookers";
        displayName = "";
        scope = 0;
    };
    class MRB_H_hgu56_visor_base : rhsusf_hgu56p_visor
    {
        author = "Spookers";
        displayName = "";
        scope = 0;
    };
    class MRB_H_hgu56_visor_mask_base : rhsusf_hgu56p_visor_mask
    {
        author = "Spookers";
        displayName = "";
        scope = 0;
    };
    class MRB_H_hgu56_Carrera : MRB_H_hgu56_base
    {
        displayName = "HGU-56/P USA (Carrera)";
        scope = 2;
		picture = "\pilot_helmets\img\rhs_hgu56_usa_ca";
        hiddenSelectionsTextures[] =
        {
            "pilot_helmets\img\MRB_H_hgu56_Carrera"
        };
    };
    class MRB_H_hgu56_visor_Speirs : MRB_H_hgu56_visor_base
    {
        displayName = "HGU-56/P Visor (Speirs)";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "pilot_helmets\img\MRB_H_hgu56_visor_Speirs"
        };
    };
    class MRB_H_hgu56_visor_Brueske : MRB_H_hgu56_visor_base
    {
        displayname = "HGU-56/P Visor (Brueske)";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "pilot_helmets\img\MRB_H_hgu56_visor_Brueske"
        };
    };    
    class MRB_H_hgu56_visor_Levorse : MRB_H_hgu56_visor_base
    {
        displayname = "HGU-56/P Visor (Levorse)";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "pilot_helmets\img\MRB_H_hgu56_visor_Levorse"
        };
    };
    class MRB_H_hgu56_visor_mask_Whelan : MRB_H_hgu56_visor_mask_base
    { 
        displayname = "HGU-56/P Visor Mask (Whelan)";
        scope = 2;
		picture = "\pilot_helmets\img\rhs_hgu56_visor_mask_olv_smiley_ca";
        hiddenSelectionsTextures[] =
        { 
            "pilot_helmets\img\MRB_H_hgu56_visor_mask_Whelan"
        };
    };
    class MRB_H_hgu56_visor_mask_Jordan : MRB_H_hgu56_visor_mask_base
    {
         displayname = "HGU-56/P Visor Mask (Jordan)";
        scope = 2;
        hiddenSelectionsTextures[] =
        { 
            "pilot_helmets\img\MRB_H_hgu56_visor_mask_Jordan"
        };
    };
	class MRB_H_hgu56_visor_mask_Tuulessa : MRB_H_hgu56_visor_mask_base
    {
        displayname = "HGU-56/P Visor Mask (Tuulessa)";
        scope = 2;
        hiddenSelectionsTextures[] =
        { 
            "pilot_helmets\img\rhs_hgu56_olv_tuulessa_co"
        };
		ace_hearing_lowerVolume=0.3;
    };
	class MRB_H_hgu56_visor_mask_Murda : MRB_H_hgu56_visor_mask_base
    {
        displayname = "HGU-56/P Visor Mask (Murda)";
        scope = 2;
        hiddenSelectionsTextures[] =
        { 
            "pilot_helmets\img\rhs_hgu56_blk_murda_co"
        };
    };
	
	//vests
	class milgp_v_marciras_marksman_belt_mc_mc_mc_tuulessa: milgp_v_marciras_marksman_belt_mc_mc_mc
	{
		scopeArsenal=2;
		displayname="MarCiras Marksman + Belt (MC/MC/MC) [Tuulessa]";
		hiddenSelectionsTextures[]=
		{
			"milgp_vests\textures\v_marciras_mc_co.paa",
			"milgp_vests\textures\v_battle_belt_mc_co.paa",
			"pilot_helmets\img\v_gear_01_mc_tuulessa_co.paa",
			"milgp_vests\textures\v_gear_02_co.paa"
		};
	};
};