#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostb_common",
            "cba_main",
            "ace_nightvision",
            "ace_compat_rhs_usf3",
            "BettIR_Core"
        };
        author = "Ghost";
        authors[] = {"PDT"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgEffects.hpp"
#include "CfgWeapons.hpp"
#include "BettIR.hpp"