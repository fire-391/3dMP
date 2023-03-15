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
    class rhsusf_hgu56p;
    class rhsusf_hgu56p_visor;
    class rhsusf_hgu56p_visor_mask;
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
		picture = "pilot_helmets\img\rhs_hgu56_usa_ca"
        hiddenSelectionsTextures[] =
        {
            "pilot_helmets\img\MRB_H_hgu56_Carrera.paa"
        };
    };
    class MRB_H_hgu56_visor_Speirs : MRB_H_hgu56_visor_base
    {
        displayName = "HGU-56/P Visor (Speirs)";
        scope = 2;
        hiddenSelectionsTextures[] =
        {
            "pilot_helmets\img\MRB_H_hgu56_visor_Speirs.paa"
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
            "pilot_helmets\img\MRB_H_hgu56_visor_Levorse.paa"
        };
    };
    class MRB_H_hgu56_visor_mask_Whelan : MRB_H_hgu56_visor_mask_base
    { 
        displayname = "HGU-56/P Visor Mask (Whelan)";
        scope = 2;
		picture = "pilot_helmets\img\rhs_hgu56_visor_mask_olv_smiley_ca"
        hiddenSelectionsTextures[] =
        { 
            "pilot_helmets\img\MRB_H_hgu56_visor_mask_Whelan.paa"
        };
    };
    class MRB_H_hgu56_visor_mask_Jordan : MRB_H_hgu56_visor_mask_base
    {
         displayname = "HGU-56/P Visor Mask (Jordan)";
        scope = 2;
        hiddenSelectionsTextures[] =
        { 
            "pilot_helmets\img\MRB_H_hgu56_visor_mask_Jordan.paa"
        };
    };
};





























