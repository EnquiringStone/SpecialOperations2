/*
 * Author: Legman [S.O.S. Major]
 *
 * Arguments:
 *
 * Return Value:
 * result <BOOLEAN>
 *
 * Example:
 *
 */
 
private [
    "_name",
    "_destination",
    "_id",
    "_marker",
    "_markerShape"
];

_name           = _this select 0;
_destination    = if (count _this > 1) then {_this select 1} else {objNull};
_id             = count SOS_MISSION_TASKS;

SOS_MISSION_TASKS pushBack [
    _name,
    getText     (missionConfigFile >> "CfgTaskDescriptions" >> _name >> "title"),
    getText     (missionConfigFile >> "CfgTaskDescriptions" >> _name >> "description"),
    getText     (missionConfigFile >> "CfgTaskDescriptions" >> _name >> "marker"),
    getNumber   (missionConfigFile >> "CfgTaskDescriptions" >> _name >> "optional")
];
[
    west,
    [_id] call SOS_fnc_getTaskName,
    _name,
    _destination,
    "CREATED",
    0,
    true,
    "Attack"
] call BIS_fnc_taskCreate;

// create marker
if (typeName _destination == "ARRAY") then {
    _marker = createMarker [[] call SOS_fnc_getMarkerName, _destination];
    _marker setMarkerType getText (missionConfigFile >> "CfgTaskDescriptions" >> _name >> "markerType");
    _marker setMarkerColor getText (missionConfigFile >> "CfgTaskDescriptions" >> _name >> "markerColor");
    _marker setMarkerSize getArray (missionConfigFile >> "CfgTaskDescriptions" >> _name >> "markerSize");
};

_id
