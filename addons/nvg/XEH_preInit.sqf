#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

// ACE check
[
  "ghostb_nvg_ACE",
  "CHECKBOX",
  ["Use ACE color preset","Enable if using ACE"],
  COMPONENT_NAME,
  false
] call cba_settings_fnc_init;

// NVG effect select
[
  "ghostb_nvg_Effect",
  "LIST",
  ["NVG Effect", "Green Phosphor (no effect).\n White Phosphor (White Phosphor)"],
  COMPONENT_NAME,
  [
    [
      "",
      "gpEffect",
      "wpEffect"
    ],
    [
      "None",
      "Green Phosphor",
      "White Phosphor"
    ],
    0
  ]
] call cba_settings_fnc_init;

// NVG blacklist
[
  "ghostb_nvg_Blacklist",
  "EDITBOX",
  ["Blacklisted NVG classnames", "Seperrate classnames by commas \nEg. className1, className2, className3, etc"],
  COMPONENT_NAME,
  ""
] call cba_settings_fnc_init;
