if (!hasInterface) exitWith {};
if (!isClass (configFile >> "CfgPatches" >> "ace_interact_menu")) exitWith {};

{
    [_x, "init", {
        params ["_vehicle"];

        //  Making sure player is the driver or gunner. Copied from P:\3d_Assets\functions\fn_preInitFLIRFIX.sqf
        private _vehCondition = {
		private _veh = vehicle _player;

		// Original conditions
		private _allowed =
			(_veh != _player)
			&& (_player == driver _veh || _player == gunner _veh)
			&& { [_player, objNull, ["isNotInside"]] call ace_common_fnc_canInteractWith };

		// Fuel truck nearby, thanks for more work Hart
		private _nearFuel = nearestObjects [
			_player,
			[
				// Add whatever fuel trucks you want here
				"B_Truck_01_fuel_F",
				"O_Truck_03_fuel_F",
				"C_Van_01_fuel_F",
				"rhsusf_M978A4_BKIT_usarmy_wd",
				"rhsusf_M978A4_usarmy_wd",
				"UK3CB_B_MTVR_Refuel_WDL",
				"rhsusf_M978A4_usarmy_d",
				"rhsusf_M978A4_BKIT_usarmy_d",
				"UK3CB_B_MTVR_Refuel_DES",
				"MRB_Fuel_Container"
				
			],
			12 //distance
		];

		// Combined requirement. must satisfy original AND have a fuel truck nearby
		_allowed && { count _nearFuel > 0 };
	};

        // Again copied from before, but this is adding the ACE option it appears. I dont fully get it.
        private _debugAction = [
            "Fuel Adjuster",
            "Fuel Adjuster",
            "",
            {},
            _vehCondition,
            {},
            [],
            { [0,0,0] },
            2,
            [false, true, false, false, false]
        ] call ace_interact_menu_fnc_createAction;

        [_vehicle, 1, ["ACE_SelfActions"], _debugAction] call ace_interact_menu_fnc_addActionToObject;

        //The good shit to actually lower values.
        private _fuelStatement = {
            private _veh = _target;

            private _currentFuel = fuel _veh;
            private _newFuel = _currentFuel - 0.25;

            if (_newFuel < 0) then { _newFuel = 0 };

            _veh setFuel _newFuel;
			//Debug for myself, maybe keep for useful messaging?
			//hint removed
            systemChat format [
                "Fuel lowered: %1% > %2%",
                round (_currentFuel * 100),
                round (_newFuel * 100)
            ];
        };

		//inserts above statement to actually lower the fuel
        private _fuelAction = [
            "LowerFuel25",
            "Lower Fuel by 25%",
            "",
            _fuelStatement,
            _vehCondition,
            {},
            [],
            { [0,0,0] },
            10,
            [false, true, false, false, false]
        ] call ace_interact_menu_fnc_createAction;

        [_vehicle, 1, ["ACE_SelfActions", "Fuel Adjuster"], _fuelAction] call ace_interact_menu_fnc_addActionToObject;

    }, nil, nil, true] call CBA_fnc_addClassEventHandler;

} forEach ["MRB_MH60M", "MRB_MH60M_DAP", "MRB_MH60M_MLASS"];
