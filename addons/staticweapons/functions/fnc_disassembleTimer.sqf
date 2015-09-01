/*
Author: Grey

Place down tripod using a timer

Arguments:
0: unit <OBJECT>
1: item <STRING>
2: tripod <STRING>

Return Value:
Nothing

Return value:
 None
*/
#include "script_component.hpp"

params["_staticOld","_unit","_staticNewClass","_staticItems"];
private ["_name", "_progressText","_objectClassName"];

_objectClassName = typeOf _staticOld;
_name = getText (configFile >> "CfgVehicles" >> _objectClassName >> "displayName");

_progressText = format["Disassembling: %1", _name];

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[15, [_staticOld,_unit,_staticNewClass,_staticItems], {(_this select 0) call FUNC(disassemble);}, {}, _progressText] call ace_common_fnc_progressBar;