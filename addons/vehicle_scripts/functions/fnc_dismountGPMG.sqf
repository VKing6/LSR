/*
Author: Grey

Removes the commanders GPMG from a jackal and adds it to the player

Arguments:
0: vehicle <OBJECT>
1: unit <OBJECT>
2: textureIndex <NUMBER>

Return Value:
Nothing

Return value:
None
*/
#include "script_component.hpp"

params["_vehicle","_unit","_textureIndex"];

if !([_vehicle, _unit] call FUNC(canDismount)) exitwith {};

_vehicle setvariable [QGVAR(hasGPMG), false, true];

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    _unit playMove "AmovPercMstpSrasWrflDnon_diary";
};

[{
    params["_vehicle","_unit","_textureIndex"];

    ["16aa_vehicles_setWeaponTurretGPMG", [_vehicle, false]] call ace_common_fnc_globalEvent;

    _pos = _unit modelToWorldVisual [0,1,0.05];
    _unit = createVehicle ["WeaponHolder_Single_F",_pos,[],0,"NONE"];
    _unit addWeaponCargoGlobal ['16aa_l7a2',1];
    _unit setPosATL _pos;

	_vehicle setObjectTextureGlobal [_textureIndex, ""];

}, [_vehicle, _unit,_textureIndex], 1, 0]call ace_common_fnc_waitAndExecute;