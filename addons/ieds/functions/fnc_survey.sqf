#include "script_component.hpp"
//Needs a header
params ["_unit", "_target"];
_target = attachedTo (_target);
_detonatorType = getText(ConfigFile >> "CfgAmmo" >> typeOf (_target) >> QGVAR(detonatorType));
_powerSourceType = getText(ConfigFile >> "CfgAmmo" >> typeOf (_target) >> QGVAR(powerSourceType));
_stability = getText(ConfigFile >> "CfgAmmo" >> typeOf (_target) >> QGVAR(stability));
//This needs to be "prettyfied" later down the line
hint format ["The detonator type is:%1. The powersource type is:%2. The stability of the object is:%3",_detonatorType,_powerSourceType,_stability];
