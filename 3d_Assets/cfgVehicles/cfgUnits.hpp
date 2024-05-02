	class SoldierWB;
	class MRB_Battalion_CO : SoldierWB 
	{
		scope = 2;
		displayname = "Battalion Commander";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Men";
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		uniformClass = "VSM_M81_Crye_Camo";
		icon = "iconManOfficer";
		linkedItems[] = {};
		weapons[] = {};
        backpack = ;
		magazines[] = {};
		identityTypes[] =  {"LanguageENG_F", "Head_NATO"};
		Items[] = {};
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};	
	class MRB_Battalion_XO : MRB_Battalion_CO 
	{
		scope = 2;
		displayname = "Battalion Executive Officer";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};	
	class MRB_Battalion_SGM : MRB_Battalion_CO 
	{
		scope = 2;
		displayname = "Battalion Sergeant Major";
		icon = "iconManLeader";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};	
	class MRB_Battalion_CMC : MRB_Battalion_CO 
	{
		scope = 2;
		displayname = "Battalion Command Master Chief";
		icon = "iconManMedic";
		backpack = ;
		linkedItems[] = {};
		magazines[] = {};
		Items[] = {};
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",2]};";
		};
	};	
	class MRB_Company_CO : SoldierWB 
	{
		scope = 2;
		displayname = "Company Commander";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Men";
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		uniformClass = "VSM_M81_Crye_Camo";
		icon = "iconManOfficer";
		linkedItems[] = {};
		weapons[] = {};
		magazines[] = {};
		backpack = ;
		identityTypes[] =  {"LanguageENG_F", "Head_NATO"};
		Items[] = {};
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class MRB_Company_XO : MRB_Company_CO 
	{
		scope = 2;
		displayname = "Company Executive Officer";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class MRB_Company_FS : MRB_Company_CO 
	{
		scope = 2;
		displayname = "Company First Sergeant";
		icon = "iconManAT";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};	
	class MRB_Company_GY : MRB_Company_FS 
	{
		scope = 2;
		displayname = "Company Gunny";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class MRB_Company_SARC : MRB_Company_CO 
	{
		scope = 2;
		displayname = "Company SARC";
		backpack = ;
		linkedItems[] = {};
		icon = "iconManMedic";
		magazines[] = {};
		Items[] = {};
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",2]};";
		};
	};
	class MRB_Team_TL : SoldierWB 
	{
		scope = 2;
		displayname = "Team Leader";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Men";
		model = "\rhsusf\addons\rhsusf_infantry2\CryeGen3.p3d";
		uniformClass = "VSM_M81_Crye_Camo";
		backpack = ;
		icon = "iconManOfficer";
		linkedItems[] = {};
		magazines[] = {};
		identityTypes[] =  {"LanguageENG_F", "Head_NATO"};
		Items[] = {};
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class MRB_Team_CHIEF : MRB_Team_TL 
	{
		scope = 2;
		displayname = "Team Chief";
		icon = "iconManLeader";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class MRB_Team_SARC : MRB_Team_TL 
	{
		scope = 2;
		displayname = "Team SARC";
		backpack = ;
		linkedItems[] = {};
		icon = "iconManMedic";
		magazines[] = {};
		Items[] = {};
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",2]};";
		};
	};	
	class MRB_Team_COMC : MRB_Team_TL 
	{
		scope = 2;
		displayname = "Team Comms Chief";
		backpack = ;
		icon = "iconManMG";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class MRB_Element_LDR : MRB_Team_CHIEF
	{
		scope = 2;
		displayname = "Element Leader";
		uniformClass = "VSM_M81_Crye_Camo";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class MRB_Element_ALDR : MRB_Element_LDR
	{
		scope = 2;
		displayname = "Assistant Element Leader";
		uniformClass = "VSM_M81_Crye_Camo";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class MRB_Element_SARC : MRB_Team_TL 
	{
		scope = 2;
		displayname = "Element SARC";
		backpack = ;
		linkedItems[] = {};
		magazines[] = {};
		uniformClass = "VSM_M81_Crye_Camo";
		icon = "iconManMedic";
		Items[] = {};
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",2]};";
		};
	};
	class MRB_Element_CSO : MRB_Team_TL 
	{
		scope = 2;
		displayname = "Critical Skills Operator";
		uniformClass = "VSM_M81_Crye_Camo";
		icon = "iconManAT";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class CJSOAC_Detachment_CO : SoldierWB 
	{
		scope = 2;
		displayname = "CJSOAC CO";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Men";
		model = "\milgp_uniforms\models\u_g3_field_set_base.p3d";
		uniformClass = "RHS_UNIFORM_CU_OCP";
		weapons[] = {};
		linkedItems[] = {};
		magazines[] = {};
		icon = "iconManOfficer";
		identityTypes[] =  {"LanguageENG_F", "Head_NATO"};
		Items[] = {};
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class CJSOAC_Detachment_XO : CJSOAC_Detachment_CO 
	{
		scope = 2;
		displayname = "CJSOAC XO";
		icon = "iconManOfficer";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class 160th_Detachment_SL : SoldierWB 
	{
		scope = 2;
		displayname = "160th Units Section Leader";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Men";
		model = "\milgp_uniforms\models\u_g3_field_set_base.p3d";
		uniformClass = "RHS_UNIFORM_CU_OCP";
		weapons[] = {};
		linkedItems[] = {};
		magazines[] = {};
		icon = "iconManOfficer";
		identityTypes[] =  {"LanguageENG_F", "Head_NATO"};
		Items[] = {};
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class 160th_Detachment_RWA : 160th_Detachment_SL 
	{
		scope = 2;
		displayname = "160th Units Rotary Wing Aviator";
		icon = "iconManEngineer";
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
	class 16th_Detachment_SL : SoldierWB 
	{
		scope = 0;
		displayname = "16th SOW Section Leader";
		faction = "B_3d_Marine_Raider";
		editorSubcategory = "B_3d_Marine_Raider_Men";
		model = "\milgp_uniforms\models\u_g3_field_set_base.p3d";
		uniformClass = "FIR_Fighter_Pilot_Nomex3";
		weapons[] = {};
		linkedItems[] = {};
		magazines[] = {};
		icon = "iconManOfficer";
		identityTypes[] =  {"LanguageENG_F", "Head_NATO"};
		Items[] = {};
		class EventHandlers
		{
			init = "init = if(local (_this select 0))then{(_this select 0) setVariable [""ace_medical_medicClass"",1]};";
		};
	};
