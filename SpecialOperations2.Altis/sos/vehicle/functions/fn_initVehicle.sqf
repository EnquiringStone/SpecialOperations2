/*
 * Author: Legman [S.O.S. Major]
 * Initializes an S.O.S unit.
 *
 * Arguments:
 * 0: vehicle <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [_vehicle] call SOS_fnc_initVehicle;
 *
 */
 
private ["_vehicle"];

_vehicle = _this select 0;

_vehicle setVariable ["sos_vehicle_can_drive", [_this select 0] call SOS_fnc_canDriveVehicle];
_vehicle addEventHandler ["GetIn", {
    _vehicle    = _this select 0;
    _unit       = _this select 2;
    if (_unit == player && !(_vehicle getVariable ["sos_vehicle_can_drive", true])) then {
        if (_vehicle getCargoIndex player == -1) then {
            if (_vehicle emptyPositions "cargo" > 0) then {
                moveOut player;
                player moveInCargo _vehicle;
            } else {
                moveOut player;
            };            
        };
    };
}];

//Checks if the vehicle is firing from within a safe zone
_vehicle addEventHandler ["Fired", {
    {
        _unit = _this select 0;
        if(_unit == vehicle player) then {
            _inArea = [getPosATL player, _x] call CBA_fnc_inArea;
            _flying = getPosATL player select 2 > 5;
            if (_inArea && !_flying) then {
                deleteVehicle (_this select 6);
                ["DO NOT FIRE IN BASE", "INFO", "sos_warning"] call SOS_fnc_showHint;
            };
        };
    } forEach SOS_MISSION_SAFE_ZONES;
}];

if ((typeOf _vehicle) in (getArray(missionConfigFile >> format ["SOS_VehicleTypes"] >> "TransportHelicopters" >> "vehicles"))) then {
	_vehicle addAction ["Parachute", {
		_heli = _this select 0;
		_unit = _this select 1;
		[_heli, _unit] call SOS_fnc_parachute;
	}, nil, 8.0, false, true, "", "(((getPos _target) select 2) > 150) && (player in (assignedCargo _target))"];
};
