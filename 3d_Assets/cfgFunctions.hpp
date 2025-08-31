class CfgFunctions {
	class MRB {
		tag = "MRB";
		class SATCOM {
            class preInitSATCOM {
                file = "\3d_Assets\functions\fn_preInitSATCOM.sqf";
                preInit = 1;
            };
			class postInitSATCOM {
				file = "\3d_Assets\functions\fn_postInitSATCOM.sqf";
				postInit = 1;
			};
		};
		class functions {
			file = "3d_Assets\functions";
			class deployTL {};
			class deployUAV {};
			class pickupTL {};
			class pickupUAV {};
		};
	};
	class MELB
	{
		tag = "MELB";
		class functions
		{
			class ToggleWeapons
			{
				file = "\3d_Assets\functions\melb_toggleweapons.sqf";
				description = "Toggle MELB weapons Control";
			};
		};
	};
};

