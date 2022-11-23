#include "..\script_component.hpp"
class CfgVehicles {
    class TFAR_rt1523g;    // External class reference
    class TFAR_mr3000;
    class TFAR_anprc155;
    class TFAR_anarc210;
    class TFAR_mr6000l;
    class TFAR_anarc164;

    class GVAR(TFAR_rt1523g_kitbag): TFAR_rt1523g {
        author = "NemesisRE";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        hiddenSelections[] = {"camo"};
        maximumLoad = 240;
        mass = 130;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class GVAR(kitbag_khaki_west): GVAR(TFAR_rt1523g_kitbag) {
        displayName = "[GHOST] RT-1523G Kitbag (Green)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(kitbag_coyote_west): GVAR(TFAR_rt1523g_kitbag) {
        displayName = "[GHOST] RT-1523G Kitbag (Coyote)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(kitbag_winter_west): GVAR(TFAR_rt1523g_kitbag) {
        displayName = "[GHOST] RT-1523G Kitbag (Winter)";
        hiddenSelectionsTextures[] = {QPATHTOF(qip\data\textures\kitbag_wte.paa)};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(kitbag_black_west): GVAR(TFAR_rt1523g_kitbag) {
        displayName = "[GHOST] RT-1523G Kitbag (Black)";
        hiddenSelectionsTextures[] = {"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };
/*
    class GVAR(TFAR_mr3000_kitbag): TFAR_mr3000 {
        author = "NemesisRE";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        hiddenSelections[] = {"camo"};
        maximumLoad = 240;
        mass = 130;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class GVAR(kitbag_khaki_east): GVAR(TFAR_mr3000_kitbag) {
        displayName = "[GHOST] MR3000 Kitbag (Green)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(kitbag_coyote_east): GVAR(kitbag_khaki_east) {
        displayName = "[GHOST] MR3000 Kitbag (Coyote)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(kitbag_winter_east): GVAR(kitbag_khaki_east) {
        displayName = "[GHOST] MR3000 Kitbag (Winter)";
        hiddenSelectionsTextures[] = {QPATHTOF(qip\data\textures\kitbag_wte.paa)};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(kitbag_black_east): GVAR(kitbag_khaki_east) {
        displayName = "[GHOST] MR3000 Kitbag (Black)";
        hiddenSelectionsTextures[] = {"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(TFAR_anprc155_kitbag): TFAR_anprc155 {
        author = "NemesisRE";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        hiddenSelections[] = {"camo"};
        maximumLoad = 240;
        mass = 130;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class GVAR(kitbag_khaki_independent): ghostb_TFAR_anprc155_kitbag {
        displayName = "[GHOST] AN/PRC155 Kitbag (Green)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(kitbag_coyote_independent): ghostb_TFAR_anprc155_kitbag {
        displayName = "[GHOST] AN/PRC155 Kitbag (Coyote)";
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_cbr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(kitbag_winter_independent): ghostb_TFAR_anprc155_kitbag {
        displayName = "[GHOST] AN/PRC155 Kitbag (Winter)";
        hiddenSelectionsTextures[] = {QPATHTOF(qip\data\textures\kitbag_wte.paa)};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(kitbag_black_independent): ghostb_TFAR_anprc155_kitbag {
        displayName = "[GHOST] AN/PRC155 Kitbag (Black)";
        hiddenSelectionsTextures[] = {"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(TFAR_mr6000l_ilbe): TFAR_mr6000l {
        author = "NemesisRE";
        model = "y\tfw_radios\addons\ilbe\data\model\blade\tfw_blade_ilbe.p3d";
        hiddenSelections[] = {"camo"};
        maximumLoad = 200;
        mass = 100;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class GVAR(ilbe_marpatwd_east): ghostb_TFAR_mr6000l_ilbe {
        displayName = "[GHOST] MR6000L ILBE (MARPAT-WD)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(ilbe_marpatd_east): ghostb_TFAR_mr6000l_ilbe {
        displayName = "[GHOST] MR6000L ILBE (MARPAT-D)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_d.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_d_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(ilbe_coyote_east): ghostb_TFAR_mr6000l_ilbe {
        displayName = "[GHOST] MR6000L ILBE (Coyote)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_coy.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_coy_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(ilbe_khaki_east): ghostb_TFAR_mr6000l_ilbe {
        displayName = "[GHOST] MR6000L ILBE (Green)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_gr.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_gr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(TFAR_anarc210_ilbe): TFAR_anarc210 {
        author = "NemesisRE";
        model = "y\tfw_radios\addons\ilbe\data\model\blade\tfw_blade_ilbe.p3d";
        hiddenSelections[] = {"camo"};
        maximumLoad = 200;
        mass = 100;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class GVAR(ilbe_marpatwd_west): ghostb_TFAR_anarc210_ilbe {
        displayName = "[GHOST] AN/PRC-210 ILBE (MARPAT-WD)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(ilbe_marpatd_west): ghostb_TFAR_anarc210_ilbe {
        displayName = "[GHOST] AN/PRC-210 ILBE (MARPAT-D)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_d.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_d_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(ilbe_coyote_west): ghostb_TFAR_anarc210_ilbe {
        displayName = "[GHOST] AN/PRC-210 ILBE (Coyote)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_coy.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_coy_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(ilbe_khaki_west): ghostb_TFAR_anarc210_ilbe {
        displayName = "[GHOST] AN/PRC-210 ILBE (Green)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_gr.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_gr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(TFAR_anarc164_ilbe): TFAR_anarc164 {
        author = "NemesisRE";
        model = "y\tfw_radios\addons\ilbe\data\model\blade\tfw_blade_ilbe.p3d";
        hiddenSelections[] = {"camo"};
        maximumLoad = 200;
        mass = 100;
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
    };

    class GVAR(ilbe_marpatwd_independent): ghostb_TFAR_anarc164_ilbe {
        displayName = "[GHOST] AN/PRC-164 ILBE (MARPAT-WD)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(ilbe_marpatd_independent): ghostb_TFAR_anarc164_ilbe {
        displayName = "[GHOST] AN/PRC-164 ILBE (MARPAT-D)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_d.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_d_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(ilbe_coyote_independent): ghostb_TFAR_anarc164_ilbe {
        displayName = "[GHOST] AN/PRC-164 ILBE (Coyote)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_coy.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_coy_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };

    class GVAR(ilbe_khaki_independent): ghostb_TFAR_anarc164_ilbe {
        displayName = "[GHOST] AN/PRC-164 ILBE (Green)";
        picture = "y\tfw_radios\addons\ilbe\data\icons\ilbe_icon_gr.paa";
        editorPreview = "";
        hiddenSelectionsTextures[] = {"y\tfw_radios\addons\ilbe\data\model\ilbe_gr_co.paa"};
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
    };
 */
    // For older Missions
    class GVAR(talon_kitbag_khaki): GVAR(kitbag_khaki_west) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
    };

    class GVAR(talon_kitbag_coyote): GVAR(kitbag_coyote_west) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
    };

    class GVAR(talon_kitbag_winter): GVAR(kitbag_winter_west) {
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
    };
};
