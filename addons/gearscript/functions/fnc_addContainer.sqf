/*
 * Author: Glowbal
 * Adds an container to given unit
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

#define GET_CLASSNAME(ARRAY) ARRAY select 0
#define GET_AMOUNT(ARRAY) ARRAY select 1

private ["_containerClass"];
params ["_unit", "_type"];

_containerClass = "";
if (typeName _classes == "ARRAY" && {count _classes > 0}) then {
    _containerClass = (_classes select (floor(random(count _classes))));
};
if (_containerClass == "") exitwith {}; // no container to add

switch (toLower _type) do {
    case "backpack": {
        _unit addBackpack _containerClass;
    };
    case "uniform": {
        _unit addUniform _containerClass;
    };
    case "vest": {
        _unit addVest _containerClass;
    };
};
