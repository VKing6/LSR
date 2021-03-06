/*
Author: Grey

Checks if player can dismount a GPMG from a Jackal

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
private "_canDismount";
_canDismount = false;

if(_vehicle getVariable [QGVAR(hasGPMG),true])then {
	_canDismount = true;
};
_canDismount