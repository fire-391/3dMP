   params ["_vehicle"];
    
    if (isNull _vehicle) exitWith {};
    
    _pylons = getAllPylonsInfo _vehicle;
    {
	 private _pylonIndex = _x select 0;
	 private _pylonName = _x select 1;
	 private _originalAssignedTurret = _x select 2;
	 private _magazineName = _x select 3;
	 private _ammoCount = _x select 4;
	 private _newTurret = [-1];
        
        // Swap between [0] and [1] for pilot and copilot
        if (_originalAssignedTurret isEqualTo [-1]) then {
            _newTurret = [0];
        } else {
            if (_originalAssignedTurret isEqualTo [0]) then {
                _newTurret = [-1];
            } else {
                _newTurret = _originalAssignedTurret;
            }
        }
        private _weapons = _vehicle weaponsTurret _assignedTurret;
	//diag_log format ["DEBUG: Weapons Info: %1", _weapons];
		{
			private _weaponName = _x;
			if (_magazineName find _weaponName != -1 or (_weaponName find "MELB_Hellfire" != -1) or (_weaponName find "MELB_DAGR" != -1) and (_weaponName != "LWIRCM_MELB") and (_weaponName != "Laserdesignator_MELB")) then 
			{
			//diag_log format ["DEBUG: Removing weapon '%1' from '%2'", _weaponName, _assignedTurret];
			_vehicle removeWeaponTurret [_weaponName, _assignedTurret];
			};
		} forEach _weapons;
    } forEach _pylons;
