#include "script_component.hpp"

if (isDedicated) exitWith {};

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbmakecom = [
    "ghostbmakecom",
    "Communications",
    "", {
        player call FUNC(makecom);
        [
                {player setVariable["draWhitelisted",TRUE,TRUE];},
                [draReady],
                5
            ] call CBA_fnc_waitAndExecute;
            [
                {player call {daoWhitelisted=true};player call {daoJTACmode=true};},
                [daoReady], 
                5
            ] call CBA_fnc_waitAndExecute;
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbmakecom] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbmakeeng = [
    "ghostbmakeeng",
    "Engineer",
    "", {
        player call FUNC(makeeng);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbmakeeng] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbmakemed = [
    "ghostbmakemed",
    "Medic",
    "", {
        player call FUNC(makemed);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbmakemed] call ACE_interact_menu_fnc_addActionToObject;


////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbmakewep = [
    "ghostbmakewep",
    "Weapons",
    "", {
        player call FUNC(makewep);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbmakewep] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _ghostbFIX = [
    "ghostbfix",
    "FIX Perms",
    "", {
        player call FUNC(role);
    }, {true}, {},
    [_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _ghostbFIX] call ACE_interact_menu_fnc_addActionToObject;
