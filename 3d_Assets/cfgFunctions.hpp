class CfgFunctions {
	class MRB {
		tag = "MRB";
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
			class serverSwapPylonControl
			{
				file = "\3d_Assets\functions\melb_serverSwapPylonControl.sqf";
				description = "Swap Pylons Server Side";
			};
			class clientUpdateVehcile
			{
				file = "\3d_Assets\functions\melb_clientUpdateVehicle.sqf";
				description = "Update Pylons Cliet Side";
			};
		};
	};
};
