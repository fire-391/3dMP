   params ["_vehicleNetId"];
    
    _vehicle = objectFromNetId _vehicleNetId;
    if (isNull _vehicle) exitWith {};
    
    _pylons = getAllPylonsInfo _vehicle;
    _newPylonConfig = [];
    _weaponsToRemove = [];
    
    {
        _pylonIndex = _x select 0;
        _pylonName = _x select 1;
        _originalAssignedTurret = _x select 2;
        _magazineName = _x select 3;
        _ammoCount = _x select 4;
        
        // Swap between [0] and [1] for pilot and copilot
        if (_originalAssignedTurret isEqualTo [0]) then {
            _newTurret = [1];
        } else {
            if (_originalAssignedTurret isEqualTo [1]) then {
                _newTurret = [0];
            } else {
                _newTurret = _originalAssignedTurret;
            }
        }
        
        // Use ACE function for server-side pylon loadout
        [_vehicle, _pylonIndex, _magazineName, _newTurret, true] call ace_pylons_fnc_setPylonLoadout;
        _vehicle setAmmoOnPylon [_pylonIndex, _ammoCount];
        _newPylonConfig pushBack [_pylonIndex, _magazineName, _newTurret];
        
        if (!isNil "_magazineName" && {_magazineName != ""}) then {
            _weapons = _vehicle weaponsTurret _originalAssignedTurret;
            {
                _weaponName = _x;
                if (_magazineName find _weaponName != -1 or (_weaponName find "MELB_Hellfire" != -1) or (_weaponName find "MELB_DAGR" != -1) and (_weaponName != "LWIRCM_MELB") and (_weaponName != "Laserdesignator_MELB")) then {
                    _weaponsToRemove pushBack [_weaponName, _originalAssignedTurret];
                };
            } forEach _weapons;
        };
    } forEach _pylons;
    
    // Remove weapons on server
    {_vehicle removeWeaponTurret _x;} forEach _weaponsToRemove;
    
    // Broadcast to all clients
    [ _vehicleNetId, _newPylonConfig, _weaponsToRemove ] remoteExec ["melb_fnc_clientUpdateVehicle", 0];
