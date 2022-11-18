#include "function_macros.hpp"
/*
 * Authors: Chatter and M3ales
 * Saves current Long Range radio data to _radioData,
 * Pushes _radio data to setRadioData with TRUE to save Long Trange
 * Outputs "Saved SR Settings" in a hint as an indication of what was done.
 *
 *
 * Arguments:
 * _showResult (optional): If true will display a message at the top right using ace_common_fnc_displayTextPicture on success
 *
 * Return Value:
 * 0 if successful, 1 if error
 *
 * Example:
 * [true] call CHTR_TFAR_Setter_fnc_saveLRSettings
 *
 * Public: No
 */


params[
    ["_showResult", true, [true]],
    ["_vlr", false, [true]]
];

_type = if(_vlr) then {"VLR"} else {"LR"};
_radioData = if(_vlr) then {player call TFAR_fnc_vehicleLR} else {player call TFAR_fnc_backpackLR};
_radioData = _radioData call TFAR_fnc_getLrSettings;

LOGF_1("Saving %1 Settings", _type);
_success = [true, _vlr, _radioData] call FUNC(setRadioData);

if(_showResult) then {
    if(!_success) exitWith {
        [format["Failed to save %1 Settings", _type], QUOTE(ICON_PATH(interact_root))] call ace_common_fnc_displayTextPicture;
        LOG_ERRORF_1("Cannot load empty radioData for LR");
        1
    };
    [format["Saved %1 Settings", _type], QUOTE(ICON_PATH(interact_root))] call ace_common_fnc_displayTextPicture;
};
0
