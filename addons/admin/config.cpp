#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ghostb_main"
        };
        author = "Ghost";
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

#include "adminWhitelist.hpp"
