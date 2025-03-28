_p = call MELB_fnc_findPlayer;
_vehicle = vehicle _p;
_pylons = getAllPylonsInfo vehicle _p;
//diag_log format ["DEBUG: Pylons Info: %1", _pylons];
 {
	 private _pylonIndex = _x select 0;
	 private _pylonName = _x select 1;
	 private _assignedTurret = _x select 2;
	 private _magazineName = _x select 3;
	 private _ammoCount = _x select 4;
	 private _turretToggle = [];
	
	if (!isNil "_magazineName" && {_magazineName != ""}) then {
			private _weapons = _vehicle weaponsTurret _assignedTurret;
	//diag_log format ["DEBUG: Weapons Info: %1", _weapons];
	{
			private _weaponName = _x;
			if (_magazineName find _weaponName != -1 or (_weaponName find "MELB_Hellfire" != -1) or (_weaponName find "MELB_DAGR" != -1) and (_weaponName != "LWIRCM_MELB") and (_weaponName != "Laserdesignator_MELB")) then 
			{
			diag_log format ["DEBUG: Removing weapon '%1' from '%2'", _weaponName, _assignedTurret];
			[_vehicle, [_weaponName, _assignedTurret]] remoteExec ["removeWeaponTurret", 0];
			};
	} forEach _weapons;
		if (_assignedTurret isEqualTo [-1]) then {
		_turretToggle = [0]} else {_turretToggle = [-1]};
       // diag_log format ["DEBUG: Setting pylon loadout for pylon index '%1' with weapon '%2'", _pylonIndex, _magazineName];
        [_vehicle, [_pylonIndex, _magazineName, true, _turretToggle]] remoteExec ["setPylonLoadout", 0];
		[_vehicle, [_pylonIndex, _ammoCount]] remoteExec ["setAmmoOnPylon", 0];
    };
    } forEach _pylons;
