#include "\z\ghostb\addons\adminmenu\script_component.hpp"

disableSerialization;


private _mapCtrl = ((findDisplay IDC_GHOSTB_ADMINMENU_ADME_MAP_DISPLAY) displayCtrl IDC_GHOSTB_ADMINMENU_ADME_MAP_CONTROL);//_this select 0;//
private _pos = [0,0,0];

if (alive player && !(player isKindOf "ghostb_spectator_unit")) then {
    _pos = getPos player;
} else {
    if (count playableUnits > 0) then {
        _pos = getPos (playableUnits select 0);
    } else {
        if (count allUnits > 0) then {
            _pos = getPos (allUnits select 0);
        };
    };
};
_mapCtrl ctrlMapAnimAdd [0, 0.1, _pos];
ctrlMapAnimCommit _mapCtrl;

