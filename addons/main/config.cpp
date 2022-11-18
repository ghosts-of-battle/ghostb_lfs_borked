#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main"
        };
        author = "Ghost";
        VERSION_CONFIG;
    };
};

#include "CfgEden.hpp"
#include "DisplayEden.hpp"
#include "CfgWorlds.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgRespawnTemplates.hpp"