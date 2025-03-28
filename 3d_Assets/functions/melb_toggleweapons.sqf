_p = call MELB_fnc_findPlayer;
_vehicle = vehicle _p;
_crew = fullCrew _vehicle;
_pilot = objNull;
_copilot = objNull;

{
    _unit = _x select 0;
    if (isPlayer _unit) then {
        _role = _x select 1;
        _turretPath = _x select 3;
        if (_role == "driver") then {
            _pilot = _unit;
        };
        if (_role == "turret" && _turretPath isEqualTo [0]) then {
            _copilot = _unit;
        };
    };
} forEach _crew;

_otherPlayer = objNull;
_seat = "";

if (_p == _pilot) then {
    if (!isNull _copilot && isPlayer _copilot) then {
        _otherPlayer = _copilot;
        _seat = "copilot";
    };
} else { if (_p == _copilot) then {
    if (!isNull _pilot && isPlayer _pilot) then {
        _otherPlayer = _pilot;
        _seat = "pilot";
    };
};
};

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
			[_vehicle, [_weaponName, _assignedTurret]] remoteExec ["removeWeaponTurret", _p];
			[_vehicle, [_weaponName, _assignedTurret]] remoteExec ["removeWeaponTurret", _otherPlayer];
			};
		} forEach _weapons;
		if (_assignedTurret isEqualTo [-1]) then {
		_turretToggle = [0]};
       // diag_log format ["DEBUG: Setting pylon loadout for pylon index '%1' with weapon '%2'", _pylonIndex, _magazineName];
        [_vehicle, [_pylonIndex, _magazineName, true, _turretToggle]] remoteExec ["setPylonLoadout", _vehicle];
		[_vehicle, [_pylonIndex, _magazineName, true, _turretToggle]] remoteExec ["setPylonLoadout", _p];
		[_vehicle, [_pylonIndex, _magazineName, true, _turretToggle]] remoteExec ["setPylonLoadout", _otherPlayer];
		[_vehicle, [_pylonIndex, _ammoCount]] remoteExec ["setAmmoOnPylon", _vehicle];
		[_vehicle, [_pylonIndex, _ammoCount]] remoteExec ["setAmmoOnPylon", _p];
		[_vehicle, [_pylonIndex, _ammoCount]] remoteExec ["setAmmoOnPylon", _otherPlayer];
    };
    } forEach _pylons;
