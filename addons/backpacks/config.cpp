#include "script_component.hpp"


class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT_NAME);
        requiredVersion = REQUIRED_VERSION;
        requiredaddons[] = {
            "a3_weapons_f",
            "ghostb_main",
            "A3_Supplies_F_Enoch_Bags"
        };
        units[] = {};
        weapons[] = {};
        author = QAUTHOR;
        authors[] = {
            "O. Jemineh"
        };
        url = URL;
    };

};
