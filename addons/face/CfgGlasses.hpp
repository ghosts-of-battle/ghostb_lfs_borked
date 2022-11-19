#include "script_component.hpp"
class CfgGlasses {
    class G_Balaclava_blk;
    class G_Balaclava_combat;
    class G_Balaclava_lowprofile;
    class G_Combat;
    class G_Balaclava_TI_G_blk_F;
    class G_Balaclava_TI_blk_F;
    class ghostb_Multicam_Snow_lite_G_Balaclava_Multicam_Snow: G_Balaclava_blk {
        author="Seb";
        displayName="[Multicam Snow] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_Multicam_Snow_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Snow_lite_G_Balaclava_combat_Multicam_Snow: G_Balaclava_combat {
        author="Seb";
        displayName="[Multicam Snow] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Snow_co.paa),
            QPATHTOF(data\g_combat_Multicam_Snow_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_Multicam_Snow_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Snow_lite_G_Balaclava_lowprofile_Multicam_Snow: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[Multicam Snow] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Snow_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_Multicam_Snow_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Snow_lite_G_Combat_Multicam_Snow: G_Combat {
        author="Seb";
        displayName="[Multicam Snow] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Multicam_Snow_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_Multicam_Snow_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class ghostb_Multicam_Snow_lite_G_Balaclava_TI_G_Multicam_Snow_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[Multicam Snow] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_Snow_F_co.paa),
            QPATHTOF(data\g_combat_Multicam_Snow_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_Multicam_Snow_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class ghostb_Multicam_Snow_lite_G_Balaclava_TI_Multicam_Snow_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[Multicam Snow] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_Snow_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_Multicam_Snow_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class acp_US_M81_lite_G_Balaclava_US_M81: G_Balaclava_blk {
        author="Seb";
        displayName="[US M81] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_M81_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_US_M81_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_US_M81_lite_G_Balaclava_combat_US_M81: G_Balaclava_combat {
        author="Seb";
        displayName="[US M81] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_M81_co.paa),
            QPATHTOF(data\g_combat_US_M81_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_US_M81_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_US_M81_lite_G_Balaclava_lowprofile_US_M81: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[US M81] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_M81_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_US_M81_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_US_M81_lite_G_Combat_US_M81: G_Combat {
        author="Seb";
        displayName="[US M81] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_US_M81_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_US_M81_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class acp_US_M81_lite_G_Balaclava_TI_G_US_M81_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[US M81] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_M81_F_co.paa),
            QPATHTOF(data\g_combat_US_M81_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_US_M81_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class acp_US_M81_lite_G_Balaclava_TI_US_M81_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[US M81] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_M81_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_US_M81_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class acp_US_DCU_lite_G_Balaclava_US_DCU: G_Balaclava_blk {
        author="Seb";
        displayName="[US DCU] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_US_DCU_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_US_DCU_lite_G_Balaclava_combat_US_DCU: G_Balaclava_combat {
        author="Seb";
        displayName="[US DCU] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_DCU_co.paa),
            QPATHTOF(data\g_combat_US_DCU_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_US_DCU_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_US_DCU_lite_G_Balaclava_lowprofile_US_DCU: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[US DCU] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_DCU_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_US_DCU_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_US_DCU_lite_G_Combat_US_DCU: G_Combat {
        author="Seb";
        displayName="[US DCU] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_US_DCU_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_US_DCU_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class acp_US_DCU_lite_G_Balaclava_TI_G_US_DCU_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[US DCU] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_DCU_F_co.paa),
            QPATHTOF(data\g_combat_US_DCU_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_US_DCU_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class acp_US_DCU_lite_G_Balaclava_TI_US_DCU_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[US DCU] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_DCU_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_US_DCU_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class acp_Solid_White_lite_G_Balaclava_Solid_White: G_Balaclava_blk {
        author="Seb";
        displayName="[Solid White] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_Solid_White_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_Solid_White_lite_G_Balaclava_combat_Solid_White: G_Balaclava_combat {
        author="Seb";
        displayName="[Solid White] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_White_co.paa),
            QPATHTOF(data\g_combat_Solid_White_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_Solid_White_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_Solid_White_lite_G_Balaclava_lowprofile_Solid_White: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[Solid White] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_White_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_Solid_White_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_Solid_White_lite_G_Combat_Solid_White: G_Combat {
        author="Seb";
        displayName="[Solid White] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_White_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_Solid_White_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class acp_Solid_White_lite_G_Balaclava_TI_G_Solid_White_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[Solid White] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_White_F_co.paa),
            QPATHTOF(data\g_combat_Solid_White_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_Solid_White_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class acp_Solid_White_lite_G_Balaclava_TI_Solid_White_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[Solid White] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_White_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_Solid_White_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class acp_Solid_Tan_lite_G_Balaclava_Solid_Tan: G_Balaclava_blk {
        author="Seb";
        displayName="[Solid Tan] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_Solid_Tan_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_Solid_Tan_lite_G_Balaclava_combat_Solid_Tan: G_Balaclava_combat {
        author="Seb";
        displayName="[Solid Tan] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Tan_co.paa),
            QPATHTOF(data\g_combat_Solid_Tan_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_Solid_Tan_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_Solid_Tan_lite_G_Balaclava_lowprofile_Solid_Tan: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[Solid Tan] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Tan_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_Solid_Tan_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_Solid_Tan_lite_G_Combat_Solid_Tan: G_Combat {
        author="Seb";
        displayName="[Solid Tan] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_Tan_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_Solid_Tan_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class acp_Solid_Tan_lite_G_Balaclava_TI_G_Solid_Tan_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[Solid Tan] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Tan_F_co.paa),
            QPATHTOF(data\g_combat_Solid_Tan_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_Solid_Tan_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class acp_Solid_Tan_lite_G_Balaclava_TI_Solid_Tan_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[Solid Tan] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Tan_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_Solid_Tan_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class acp_Solid_Olive_lite_G_Balaclava_Solid_Olive: G_Balaclava_blk {
        author="Seb";
        displayName="[Solid Olive] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_Solid_Olive_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_Solid_Olive_lite_G_Balaclava_combat_Solid_Olive: G_Balaclava_combat {
        author="Seb";
        displayName="[Solid Olive] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Olive_co.paa),
            QPATHTOF(data\g_combat_Solid_Olive_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_Solid_Olive_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_Solid_Olive_lite_G_Balaclava_lowprofile_Solid_Olive: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[Solid Olive] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Olive_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_Solid_Olive_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class acp_Solid_Olive_lite_G_Combat_Solid_Olive: G_Combat {
        author="Seb";
        displayName="[Solid Olive] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_Olive_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_Solid_Olive_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class acp_Solid_Olive_lite_G_Balaclava_TI_G_Solid_Olive_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[Solid Olive] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Olive_F_co.paa),
            QPATHTOF(data\g_combat_Solid_Olive_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_Solid_Olive_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class acp_Solid_Olive_lite_G_Balaclava_TI_Solid_Olive_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[Solid Olive] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Olive_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_Solid_Olive_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class ghostb_US_Tigerstripe_lite_G_Balaclava_US_Tigerstripe: G_Balaclava_blk {
        author="Seb";
        displayName="[US Tigerstripe] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_US_Tigerstripe_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_G_Balaclava_combat_US_Tigerstripe: G_Balaclava_combat {
        author="Seb";
        displayName="[US Tigerstripe] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_Tigerstripe_co.paa),
            QPATHTOF(data\g_combat_US_Tigerstripe_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_US_Tigerstripe_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_G_Balaclava_lowprofile_US_Tigerstripe: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[US Tigerstripe] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_US_Tigerstripe_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_US_Tigerstripe_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_G_Combat_US_Tigerstripe: G_Combat {
        author="Seb";
        displayName="[US Tigerstripe] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_US_Tigerstripe_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_US_Tigerstripe_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class ghostb_US_Tigerstripe_lite_G_Balaclava_TI_G_US_Tigerstripe_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[US Tigerstripe] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_Tigerstripe_F_co.paa),
            QPATHTOF(data\g_combat_US_Tigerstripe_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_US_Tigerstripe_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class ghostb_US_Tigerstripe_lite_G_Balaclava_TI_US_Tigerstripe_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[US Tigerstripe] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_US_Tigerstripe_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_US_Tigerstripe_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class ghostb_Solid_Ranger_Green_lite_G_Balaclava_Solid_Ranger_Green: G_Balaclava_blk {
        author="Seb";
        displayName="[Solid Ranger Green] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_Solid_Ranger_Green_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Ranger_Green_lite_G_Balaclava_combat_Solid_Ranger_Green: G_Balaclava_combat {
        author="Seb";
        displayName="[Solid Ranger Green] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Ranger_Green_co.paa),
            QPATHTOF(data\g_combat_Solid_Ranger_Green_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_Solid_Ranger_Green_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Ranger_Green_lite_G_Balaclava_lowprofile_Solid_Ranger_Green: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[Solid Ranger Green] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Ranger_Green_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_Solid_Ranger_Green_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Ranger_Green_lite_G_Combat_Solid_Ranger_Green: G_Combat {
        author="Seb";
        displayName="[Solid Ranger Green] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_Ranger_Green_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_Solid_Ranger_Green_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class ghostb_Solid_Ranger_Green_lite_G_Balaclava_TI_G_Solid_Ranger_Green_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[Solid Ranger Green] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Ranger_Green_F_co.paa),
            QPATHTOF(data\g_combat_Solid_Ranger_Green_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_Solid_Ranger_Green_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class ghostb_Solid_Ranger_Green_lite_G_Balaclava_TI_Solid_Ranger_Green_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[Solid Ranger Green] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Ranger_Green_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_Solid_Ranger_Green_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class ghostb_Solid_CoyoteBrown_lite_G_Balaclava_Solid_CoyoteBrown: G_Balaclava_blk {
        author="Seb";
        displayName="[Solid CoyoteBrown] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_Solid_CoyoteBrown_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_CoyoteBrown_lite_G_Balaclava_combat_Solid_CoyoteBrown: G_Balaclava_combat {
        author="Seb";
        displayName="[Solid CoyoteBrown] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_CoyoteBrown_co.paa),
            QPATHTOF(data\g_combat_Solid_CoyoteBrown_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_Solid_CoyoteBrown_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_CoyoteBrown_lite_G_Balaclava_lowprofile_Solid_CoyoteBrown: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[Solid CoyoteBrown] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_CoyoteBrown_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_Solid_CoyoteBrown_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_CoyoteBrown_lite_G_Combat_Solid_CoyoteBrown: G_Combat {
        author="Seb";
        displayName="[Solid CoyoteBrown] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_CoyoteBrown_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_Solid_CoyoteBrown_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class ghostb_Solid_CoyoteBrown_lite_G_Balaclava_TI_G_Solid_CoyoteBrown_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[Solid CoyoteBrown] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_CoyoteBrown_F_co.paa),
            QPATHTOF(data\g_combat_Solid_CoyoteBrown_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_Solid_CoyoteBrown_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class ghostb_Solid_CoyoteBrown_lite_G_Balaclava_TI_Solid_CoyoteBrown_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[Solid CoyoteBrown] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_CoyoteBrown_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_Solid_CoyoteBrown_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class ghostb_Solid_Black_lite_G_Balaclava_Solid_Black: G_Balaclava_blk {
        author="Seb";
        displayName="[Solid Black] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_Solid_Black_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Black_lite_G_Balaclava_combat_Solid_Black: G_Balaclava_combat {
        author="Seb";
        displayName="[Solid Black] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Black_co.paa),
            QPATHTOF(data\g_combat_Solid_Black_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_Solid_Black_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Black_lite_G_Balaclava_lowprofile_Solid_Black: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[Solid Black] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Solid_Black_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_Solid_Black_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Black_lite_G_Combat_Solid_Black: G_Combat {
        author="Seb";
        displayName="[Solid Black] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Solid_Black_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_Solid_Black_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class ghostb_Solid_Black_lite_G_Balaclava_TI_G_Solid_Black_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[Solid Black] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Black_F_co.paa),
            QPATHTOF(data\g_combat_Solid_Black_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_Solid_Black_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class ghostb_Solid_Black_lite_G_Balaclava_TI_Solid_Black_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[Solid Black] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Solid_Black_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_Solid_Black_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class ghostb_Multicam_Woodland_lite_G_Balaclava_Multicam_Woodland: G_Balaclava_blk {
        author="Seb";
        displayName="[Multicam Woodland] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_Multicam_Woodland_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Woodland_lite_G_Balaclava_combat_Multicam_Woodland: G_Balaclava_combat {
        author="Seb";
        displayName="[Multicam Woodland] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Woodland_co.paa),
            QPATHTOF(data\g_combat_Multicam_Woodland_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_Multicam_Woodland_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Woodland_lite_G_Balaclava_lowprofile_Multicam_Woodland: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[Multicam Woodland] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_Woodland_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_Multicam_Woodland_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Woodland_lite_G_Combat_Multicam_Woodland: G_Combat {
        author="Seb";
        displayName="[Multicam Woodland] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Multicam_Woodland_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_Multicam_Woodland_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class ghostb_Multicam_Woodland_lite_G_Balaclava_TI_G_Multicam_Woodland_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[Multicam Woodland] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_Woodland_F_co.paa),
            QPATHTOF(data\g_combat_Multicam_Woodland_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_Multicam_Woodland_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class ghostb_Multicam_Woodland_lite_G_Balaclava_TI_Multicam_Woodland_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[Multicam Woodland] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_Woodland_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_Multicam_Woodland_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
    class ghostb_Multicam_lite_G_Balaclava_Multicam: G_Balaclava_blk {
        author="Seb";
        displayName="[Multicam] Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_Multicam_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_lite_G_Balaclava_combat_Multicam: G_Balaclava_combat {
        author="Seb";
        displayName="[Multicam] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_co.paa),
            QPATHTOF(data\g_combat_Multicam_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_combat_Multicam_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_lite_G_Balaclava_lowprofile_Multicam: G_Balaclava_lowprofile {
        author="Seb";
        displayName="[Multicam] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\headgear_balaclava_Multicam_co.paa),
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_lowprofile_Multicam_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_lite_G_Combat_Multicam: G_Combat {
        author="Seb";
        displayName="[Multicam] Combat Goggles";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\g_combat_Multicam_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_g_combat_Multicam_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class ghostb_Multicam_lite_G_Balaclava_TI_G_Multicam_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="[Multicam] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_F_co.paa),
            QPATHTOF(data\g_combat_Multicam_ca.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_G_Multicam_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class ghostb_Multicam_lite_G_Balaclava_TI_Multicam_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="[Multicam] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\G_Balaclava_TI_Multicam_F_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_G_Balaclava_TI_Multicam_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
};
