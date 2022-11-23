#include "\x\cba\addons\main\script_macros_common.hpp"
// #define DFUNC(module) TRIPLES(ADDON,fnc,module)
#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

// Chat macros
#define IS_CMND_AVAILABLE(var,cmnd) if !([var,cmnd] call EFUNC(chat,commandAvailable)) exitWith {}

// ACE3 reference macros
#define ACE_PREFIX ace
#define ACE_ADDON(module) DOUBLES(ACE_PREFIX,module)
#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))
#define DACEFUNC(var1,var2) TRIPLES(DOUBLES(ACE_PREFIX,var1),fnc,var2)

#define ACEFUNC(module,function)    TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define QACEFUNC(module,function)   QUOTE(ACEFUNC(module,function))

#define ACELSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACECSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))


#define QN(var1) '##var1##'

#define HASHSET(hash,key,value) [hash,#key,value] call CBA_fnc_hashSet
#define HASHGET(hash,key) [hash,#key] call CBA_fnc_hashGet

#define EDEN_CHECK if !(is3DEN) exitwith {}
#define LOCAL_CHECK(ARG) if !(local ARG) exitwith {}

#define VERSIONNUMBER (MGETMVAR(Version_UpdatedNumber,102))
#define VERSION_CHECK(var1) if (var1 < VERSIONNUMBER) exitwith {}

// GHOSTB macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))

// Extension macros
#define EXT "Ghost_mods"
#define EXT_LOG "Ghost_mods_log"


// GHOSTB Debug macros
#include "script_debug.hpp"
#include "config_macros.hpp"


//This part includes parts of the CBA and ACE3 macro libraries
#define GETPRVAR(var1,var2) (profileNamespace getVariable [ARR_2(var1,var2)])
#define GETUVAR(var1,var2) (uiNamespace getVariable [ARR_2(var1,var2)])
#define GETMVAR(var1,var2) (missionNamespace getVariable [ARR_2(var1,var2)])

#define SETPRVAR(var1,var2) (profileNamespace setVariable [ARR_2(var1,var2)])
#define SETUVAR(var1,var2) (uiNamespace setVariable [ARR_2(var1,var2)])
#define SETMVAR(var1,var2,var3) (missionNamespace setVariable [ARR_3(var1,var2,var3)])

#define ARR_10(ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8,ARG9,ARG10) ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10

#define RESUPPLY_TEXT "Spawns in x amount of predefined magazines (not x total!)."

#define MAGAZINES_DESC "Magazines"

#define PARADROP_UNITS 0
#define PARADROP_VEHICLES 1
#define PARADROP_ALL 2
#define PARADROP_MISC 3

#define MEDICAL_MENU 0
#define CARGO_MENU 1

#define ICON_CARGO "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa"
#define ICON_CHANNEL "x\zen\addons\modules\ui\chat_ca.paa"
#define ICON_DEATH_STARE "x\zen\addons\modules\ui\target_ca.paa"
#define ICON_DELETE "\A3\ui_f\data\igui\cfg\commandbar\unitcombatmode_ca.paa"
#define ICON_DOCUMENTS "\a3\ui_f\data\igui\cfg\simpletasks\types\documents_ca.paa"
#define ICON_DOG "\a3\Modules_F_Curator\Data\portraitAnimalsGoats_ca.paa"
#define ICON_DOOR "\a3\ui_f\data\igui\cfg\actions\open_door_ca.paa"
#define ICON_END "\a3\Modules_F_Curator\Data\portraitEndMission_ca.paa"
#define ICON_EXPLOSION "x\zen\addons\modules\ui\explosion_ca.paa"
#define ICON_GRENADE "x\zen\addons\context_actions\ui\grenade_ca.paa"
#define ICON_INVENTORY "\a3\Modules_F_Curator\Data\portraitRespawnInventory_ca.paa"
#define ICON_MEDICAL "x\zen\addons\context_actions\ui\medical_cross_ca.paa"
#define ICON_OBJECT "x\zen\addons\modules\ui\edit_obj_ca.paa"
#define ICON_PARADROP "x\zen\addons\modules\ui\heli_ca.paa"//"\z\ace\addons\zeus\ui\Icon_Module_Zeus_ParadropCargo_ca.paa"
#define ICON_PERSON "x\zen\addons\modules\ui\person_ca.paa"
#define ICON_RADIO "\a3\Modules_F_Curator\Data\portraitRadio_ca.paa"
#define ICON_REMOTECONTROL "\a3\modules_f_curator\data\portraitremotecontrol_ca.paa"
#define ICON_TIME "\a3\Modules_F_Curator\Data\portraitTimeAcceleration_ca.paa"
#define ICON_TRUCK "x\zen\addons\modules\ui\truck_ca.paa"
#define ICON_TREE "\a3\modules_f\data\hideterrainobjects\icon32_ca.paa"
#define ICON_UNCONSCIOUS "\z\ace\addons\zeus\ui\Icon_Module_Zeus_Unconscious_ca.paa"
#define ICON_WEATHER "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\intel_ca.paa"

#define ST_CENTER 2

#define IDC_OK 1 // emulate "OK" button
#define IDC_CANCEL 2 // emulate "Cancel" button

#define IDC_BUTTON_CLR 311010
#define IDC_BUTTON_INC 311011
#define IDC_BUTTON_DEC 311012
#define IDC_BUTTON_INTO 311013
#define IDC_BUTTON_OUTOF 311014

#define IDC_LIST_CATEGORIES 311020
#define IDC_LIST_MAGAZINES 311021
#define IDC_LIST_SELECTED 311022

#define IDD_MISSION 46
#define IDD_INTERRUPT 49
#define IDD_RSCDISPLAYCURATOR 312

#define POS_CALC ((safezoneW / safezoneH) min 1.2)
#define X_OFF (safezoneX + (safezoneW - POS_CALC) / 2)
#define Y_OFF (safezoneY + (safezoneH - (POS_CALC / 1.2)) / 2)
#define W_OFF (POS_CALC / 40)
#define H_OFF (POS_CALC / 30) // (POS_CALC / 1.2) / 25

#define POS_W(var1) (var1 * W_OFF)
#define POS_H(var1) (var1 * H_OFF)
#define POS_X(var1) (POS_W(var1) + X_OFF)
#define POS_Y(var1) (POS_H(var1) + Y_OFF)

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#define MACRO_GOGGLES_COMMON \
    dlc = QUOTE(PREFIX); \
    scope = 2; \
    identityTypes[] = {}; \
    model = QPATHTOF(data\goggles.p3d); \
    mass = 2; \
    ace_overlay = ""; \
    ace_resistance = 2;

#define MACRO_ITEM_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        scopeCurator = 2; \
        scopeArsenal=2;

        // Items
#define ITEMS_2(var) QUOTE(var), QUOTE(var)
#define ITEMS_3(var) QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_4(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_5(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_6(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_7(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_8(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_9(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_10(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_11(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)
#define ITEMS_12(var) QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var), QUOTE(var)

#define MACRO_ADDWEAPON(WEAPON,COUNT) \
    class _xx_##WEAPON { \
        weapon = #WEAPON; \
        count = COUNT; \
    }

#define MACRO_ADDITEM(ITEM,COUNT) \
    class _xx_##ITEM { \
        name = #ITEM; \
        count = COUNT; \
    }

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) \
    class _xx_##MAGAZINE { \
        magazine = #MAGAZINE; \
        count = COUNT; \
    }

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) \
    class _xx_##BACKPACK { \
        backpack = #BACKPACK; \
        count = COUNT; \
    }

#define MACRO_LANDVEHICLE_CARGO \
    class TransportBackpacks {}; \
    class TransportItems { \
        MACRO_ADDITEM(FirstAidKit,8); \
    }; \
    class TransportMagazines { \
        MACRO_ADDMAGAZINE(SmokeShell,6); \
        MACRO_ADDMAGAZINE(SmokeShellBlue,2); \
        MACRO_ADDMAGAZINE(SmokeShellRed,2); \
    }; \
    class TransportWeapons {};

#define MACRO_AIRVEHICLE_CARGO \
    class TransportBackpacks { \
        MACRO_ADDBACKPACK(B_Parachute,2); \
    }; \
    class TransportItems { \
        MACRO_ADDITEM(FirstAidKit,8); \
        MACRO_ADDITEM(ItemGPS,1); \
        MACRO_ADDITEM(ToolKit,1); \
    }; \
    class TransportMagazines { \
        MACRO_ADDMAGAZINE(SmokeShell,6); \
        MACRO_ADDMAGAZINE(SmokeShellBlue,2); \
        MACRO_ADDMAGAZINE(SmokeShellRed,2); \
    }; \
    class TransportWeapons {};