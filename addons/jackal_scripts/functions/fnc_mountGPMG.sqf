/*
Author: Grey

Removes the a GPMG from players inventory and "mounts" it to a Jackal

Arguments:
0: vehicle <OBJECT>
1: unit <OBJECT>

Return Value:
Nothing

Return value:
None
*/
#include "script_component.hpp"

params["_vehicle","_unit"];

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    _unit playMove "AmovPercMstpSrasWrflDnon_diary";
};

[{
    params["_vehicle","_unit"];

    _unit removeWeapon '16aa_l7a2';

    _vehicle setvariable [QGVAR(hasGPMG), true, true];

    ["16aa_jackals_setWeaponTurretGPMG", [_vehicle, true]] call ace_common_fnc_globalEvent;

	_vehicle setObjectTextureGlobal [3, "16aa_vehicles_common\weapons\gpmg\m240_co.paa"];

}, [_vehicle, _unit], 1, 0]call ace_common_fnc_waitAndExecute;