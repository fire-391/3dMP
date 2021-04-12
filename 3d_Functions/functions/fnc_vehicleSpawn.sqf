#include "script_component.hpp"

params ["_args", "_lbData", "", "_curSel"];
_args params ["_helipad", "_dataLinkOptions"];

if (_lbData == "") exitWith {};

if (_lbData == "delete_any") exitWith {
    {deleteVehicle _x} forEach nearestObjects [getPos _helipad, ["AllVehicles"], 9];
};

if ((_helipad distance nearestObject [_helipad, "AllVehicles"]) <= 5) exitWith {
    hint "Vehicle in the way!";
};

private _veh = createVehicle [_lbData, [0, 0, 0], [], 0, "CAN_COLLIDE"];
_veh setPosASL getPosASL _helipad;
_veh setDir (getDir _helipad);

if (_veh isKindOf "Helicopter") then {
    _veh call EFUNC(fastroping,equipFRIES);
};

(_dataLinkOptions select _curSel) params [["_reportOwnPosition", false], ["_reportRemoteTargets", false], ["_receiveRemoteTargets", false]];
_veh setVehicleReportOwnPosition _reportOwnPosition;
_veh setVehicleReportRemoteTargets _reportRemoteTargets;
_veh setVehicleReceiveRemoteTargets _receiveRemoteTargets;

if ((toLower _lbData) in ["mrb_m109a7_sph_woodland", "mrb_m109a7_sph_tan"]) then {
    _veh addEventHandler ["Fired", {call FNC(trackShell)}];
};
