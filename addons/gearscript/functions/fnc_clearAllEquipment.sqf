/*
 * Author: Glowbal
 * Retreive the gear beloning to the given role
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: No
 */

#include "script_component.hpp"

params ["_unit"];

removeallweapons _unit;
removeallassigneditems _unit;
removeUniform _unit;
removeHeadgear _unit;
removeBackpack _unit;
removeVest _unit;
removeGoggles _unit;
