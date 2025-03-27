params ["_vehicleNetId", "_newPylonConfig", "_weaponsToRemove"];
    
    _vehicle = objectFromNetId _vehicleNetId;
    if (isNull _vehicle) exitWith {};
    
    // Update pylon loadout using ACE function
    {
        _pylonIndex = _x select 0;
        _magazineName = _x select 1;
        _newTurret = _x select 2;
        [_vehicle, _pylonIndex, _magazineName, _newTurret, true] call ace_pylons_fnc_setPylonLoadout;
    } forEach _newPylonConfig;
    
    // Remove specified weapons
    {_vehicle removeWeaponTurret _x;} forEach _weaponsToRemove;
