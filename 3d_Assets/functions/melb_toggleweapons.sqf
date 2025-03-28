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
	 _turretToggle = [-1];
	
	if (!isNil "_magazineName" && {_magazineName != ""}) then {
			_weapons = _vehicle weaponsTurret _assignedTurret;
	//diag_log format ["DEBUG: Weapons Info: %1", _weapons];
		{
			_weaponName = _x;
			if (_magazineName find _weaponName != -1 or (_weaponName find "MELB_Hellfire" != -1) or (_weaponName find "MELB_DAGR" != -1) and (_weaponName != "LWIRCM_MELB") and (_weaponName != "Laserdesignator_MELB")) then 
			{
			//diag_log format ["DEBUG: Removing weapon '%1' from '%2'", _weaponName, _assignedTurret];
			[_vehicle, [_weaponName, _assignedTurret]] remoteExec ["removeWeaponTurret", _vehicle];
			};
		} forEach _weapons;
		if (_assignedTurret isEqualTo [-1]) then {
		_turretToggle = [0]};
       // diag_log format ["DEBUG: Setting pylon loadout for pylon index '%1' with weapon '%2'", _pylonIndex, _magazineName];
        [_vehicle, [_pylonIndex, _magazineName, true, _turretToggle]] remoteExec ["setPylonLoadout", _vehicle];
		[_vehicle, [_pylonIndex, _ammoCount]] remoteExec ["setAmmoOnPylon", _vehicle];
    };
    } forEach _pylons;
