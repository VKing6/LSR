/*
 * Author: Grey
 * Assembles a static weapon using an item from the players inventor by calling the assemble function with a 15 second timer
 *
 * Arguments:
 * 0: staticOld <OBJECT>
 * 1: unit <OBJECT>
 * 2: staticNewClass <STRING>
 * 3: staticItem <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target,_player,'16aa_GMG_Static_Base','16aa_static_item_gmg_receiver'] call lsr_staticweapons_assembleTimer
 *
 * Public: No
 */
#include "script_component.hpp"

params["_staticOld","_unit","_staticNewClass","_staticItem"];
private ["_name", "_progressText"];
//Get displayname of the new static weapon to be spawned to be used in the progress bar text
_name = getText (configFile >> "CfgVehicles" >> _staticNewClass >> "displayName");
_progressText = format["Assembling: %1", _name];

//Move player into an animation if player is standing
if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary", 1] call ace_common_fnc_doAnimation;
};

[15, [_staticOld,_unit,_staticNewClass,_staticItem], {(_this select 0) call FUNC(assemble);}, {}, _progressText] call ace_common_fnc_progressBar;
