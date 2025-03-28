_p = call MELB_fnc_findPlayer;
_vehicle = vehicle _p;
_pylons = getAllPylonsInfo vehicle _p;
//diag_log format ["DEBUG: Pylons Info: %1", _pylons];
 {
	 _pylonIndex = _x select 0;
	 _pylonName = _x select 1;
	 _assignedTurret = _x select 2;
	 _magazineName = _x select 3;
	 _ammoCount = _x select 4;
	 _turretToggle = [];
	
	if (!isNil "_magazineName" && {_magazineName != ""}) then {
			_weapons = _vehicle weaponsTurret _assignedTurret;
	//diag_log format ["DEBUG: Weapons Info: %1", _weapons];
		if (_assignedTurret isEqualTo [-1]) then {
		_turretToggle = [0]} else {_turretToggle = [-1]};
       // diag_log format ["DEBUG: Setting pylon loadout for pylon index '%1' with weapon '%2'", _pylonIndex, _magazineName];
        [_vehicle, [_pylonIndex, _magazineName, true, _turretToggle]] remoteExec ["setPylonLoadout", 0];
		[_vehicle, [_pylonIndex, _ammoCount]] remoteExec ["setAmmoOnPylon", 0];
    };
    } forEach _pylons;
