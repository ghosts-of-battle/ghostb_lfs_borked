class CfgPatches {
    class ghostb_US_Tigerstripe_lite {
        name="US_Tigerstripe_lite";
        units[]={};
        weapons[]={};
        requiredVersion=1.88;
        requiredAddons[]= {
            "ghostb_main"
        };
        author="Seb";
        version="2.4.1.0";
        versionStr="2.4.1.0";
        versionAr[]={2,4,1,0};
    };
};
#include "CfgEventHandlers.hpp"

class CfgWeapons {
    class H_HelmetHBK_F;
    class H_HelmetHBK_headset_F;
    class H_HelmetHBK_ear_F;
    class H_HelmetHBK_chops_F;
    class H_Booniehat_khk;
    class H_Booniehat_khk_hs;
    class H_Cap_oli;
    class H_Cap_oli_hs;
    class H_HelmetB;
    class H_HelmetSpecB;
    class ghostb_main_H_HelmetB_light_base;
    class ghostb_main_H_HelmetB_light_basic_base;
    class H_HelmetB_camo;
    class H_HelmetLeaderO_ocamo;
    class H_HelmetO_ocamo;
    class H_HelmetSpecO_ocamo;
    class ghostb_main_H_HelmetEAST_base_F;
    class ghostb_main_H_HelmetEAST_Cover_base_F;
    class ghostb_main_H_HelmetEAST_Headset_F;
    class H_HelmetIA;
    class ghostb_main_H_HelmetSpecter_base_F;
    class ghostb_main_H_HelmetSpecter_headset_base_F;
    class ghostb_main_H_HelmetSpecter_cover_base_F;
    class ghostb_main_LBT_G3_base;
    class ghostb_main_LBT_G3_NB_base;
    class ghostb_main_Crye_AVS_1_base;
    class ghostb_main_Crye_AVS_1_1_base;
    class ghostb_main_Crye_AVS_1_2_base;
    class ghostb_main_Crye_AVS_1_3_base;
    class ghostb_main_Crye_AVS_2_base;
    class V_PlateCarrierSpec_blk;
    class V_PlateCarrierGL_blk;
    class V_PlateCarrier1_blk;
    class V_PlateCarrier2_blk;
    class V_BandollierB_blk;
    class Vest_NoCamo_Base;
    class V_Rangemaster_belt: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class ghostb_main_V_CF_CarrierRig_base_F;
    class ghostb_main_V_CF_CarrierRig_Lite_base_F;
    class ghostb_main_V_CF_CarrierRig_MG_base_F;
    class V_HarnessOGL_ghex_F;
    class V_HarnessO_ghex_F;
    class V_TacVestIR_blk: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_heavy_Olive_F;
    class V_CarrierRigKBT_01_light_Olive_F;
    class V_CarrierRigKBT_01_Olive_F;
    class ghostb_main_V_CarrierRigBW_F;
    class ghostb_main_V_CarrierRigBW_CQB_F;
    class ghostb_main_V_CarrierRigBW_GL_F;
    class ghostb_main_V_CarrierRigBW_Lite_F;
    class Uniform_Base;
    class U_I_CombatUniform: Uniform_Base {
        class ItemInfo;
    };
    class U_I_CombatUniform_shortsleeve: Uniform_Base {
        class ItemInfo;
    };
    class U_I_E_Uniform_01_F: Uniform_Base {
        class ItemInfo;
    };
    class U_I_E_Uniform_01_shortsleeve_F: Uniform_Base {
        class ItemInfo;
    };
    class U_I_OfficerUniform: Uniform_Base {
        class ItemInfo;
    };
    class U_B_CombatUniform_mcam: Uniform_Base {
        class ItemInfo;
    };
    class U_B_CombatUniform_mcam_vest: Uniform_Base {
        class ItemInfo;
    };
    class U_O_CombatUniform_ocamo: Uniform_Base {
        class ItemInfo;
    };
    class U_B_CTRG_Soldier_F: Uniform_Base {
        class ItemInfo;
    };
    class U_B_CTRG_Soldier_3_F: Uniform_Base {
        class ItemInfo;
    };
    class U_O_officer_noInsignia_hex_F: Uniform_Base {
        class ItemInfo;
    };
    class ghostb_main_U_Aegis_O_Soldier_03_base: U_O_officer_noInsignia_hex_F {
        class ItemInfo;
    };
    class ghostb_main_U_Aegis_O_Soldier_04_base: U_O_officer_noInsignia_hex_F {
        class ItemInfo;
    };
    class ghostb_US_Tigerstripe_lite_LBT_G3_US_Tigerstripe: ghostb_main_LBT_G3_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] LBT G3";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\6094G3_PC_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\6094G3_Cumberbund_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\6094G3_KangarooPanel_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Belt556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_LBTG3_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_LBT_G3_NB_US_Tigerstripe: ghostb_main_LBT_G3_NB_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] LBT G3 NB";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\6094G3_PC_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\6094G3_Cumberbund_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\6094G3_KangarooPanel_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Belt556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_LBTG3_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Crye_AVS_1_US_Tigerstripe: ghostb_main_Crye_AVS_1_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Crye AVS Assaulter 1";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Vest_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_AVSPouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Belt556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Cumberbands_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_GPpouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Radio_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_pouch556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Sideplate_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_S20_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_AVS_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Crye_AVS_1_US_Tigerstripe_insignia: ghostb_main_Crye_AVS_1_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Crye AVS Assaulter 1 (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Vest_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_AVSPouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Belt556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Cumberbands_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_GPpouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Radio_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_pouch556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Sideplate_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_S20_US_Tigerstripe_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_AVS_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Crye_AVS_1_1_US_Tigerstripe: ghostb_main_Crye_AVS_1_1_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Crye AVS Assaulter 2";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Vest_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Belt556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Cumberbands_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_GPpouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Radio_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Kangaroo_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_pouch556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Sideplate_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_S20_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_AVS_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Crye_AVS_1_1_US_Tigerstripe_insignia: ghostb_main_Crye_AVS_1_1_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Crye AVS Assaulter 2 (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Vest_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Belt556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Cumberbands_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_GPpouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Radio_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Kangaroo_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_pouch556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Sideplate_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_S20_US_Tigerstripe_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_AVS_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Crye_AVS_1_2_US_Tigerstripe: ghostb_main_Crye_AVS_1_2_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Crye AVS Assaulter 3";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Vest_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Mk4_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Belt556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Cumberbands_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_GPpouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Radio_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_pouch556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Sideplate_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_S20_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_AVS_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Crye_AVS_1_2_US_Tigerstripe_insignia: ghostb_main_Crye_AVS_1_2_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Crye AVS Assaulter 3 (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Vest_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Mk4_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Belt556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Cumberbands_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_GPpouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Radio_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_pouch556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Sideplate_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_S20_US_Tigerstripe_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_AVS_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Crye_AVS_1_3_US_Tigerstripe: ghostb_main_Crye_AVS_1_3_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Crye AVS Assaulter 4";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Vest_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_AVSPouchT_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Belt556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Cumberbands_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_GPpouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Radio_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_pouch556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Sideplate_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_S20_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_AVS_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Crye_AVS_1_3_US_Tigerstripe_insignia: ghostb_main_Crye_AVS_1_3_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Crye AVS Assaulter 4 (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Vest_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_AVSPouchT_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Belt556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Cumberbands_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_GPpouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Radio_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_pouch556_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Sideplate_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_S20_US_Tigerstripe_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_AVS_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Crye_AVS_2_US_Tigerstripe: ghostb_main_Crye_AVS_2_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Crye AVS Gunner";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Vest_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_AVSPouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Cumberbands_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Radio_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_LMGpouches_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Sideplate_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_S20_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_AVS_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Crye_AVS_2_US_Tigerstripe_insignia: ghostb_main_Crye_AVS_2_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Crye AVS Gunner (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Vest_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_AVSPouch_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BluforMed_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Cumberbands_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_BeltGBRS_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Radio_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_LMGpouches_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_glockMags_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_SFL_Holster_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_Sideplate_US_Tigerstripe.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\AVS_S20_US_Tigerstripe_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_AVS_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrierSpec_US_Tigerstripe: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\carrier_gl_rig_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_carrier_spec_rig_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrierGL_US_Tigerstripe: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\carrier_gl_rig_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_carrier_gl_rig_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrierSpec_US_Tigerstripe_insignia: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Carrier Special Rig (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\carrier_gl_rig_US_Tigerstripe_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_carrier_spec_rig_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrierGL_US_Tigerstripe_insignia: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Carrier GL Rig (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\carrier_gl_rig_US_Tigerstripe_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_carrier_gl_rig_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrier1_US_Tigerstripe: V_PlateCarrier1_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Carrier Lite";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\vests_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_plate_carrier_1_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrier2_US_Tigerstripe: V_PlateCarrier2_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Carrier Rig";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\vests_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_plate_carrier_2_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_BandollierB_US_Tigerstripe: V_BandollierB_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\vests_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_bandollierB_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Rangemaster_belt_US_Tigerstripe: V_Rangemaster_belt {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\vests_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_Rangemaster_belt_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]=
            {
                "camo"
            };
        };
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrier_Kerry_US_Tigerstripe: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\vests_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_plate_carrier_1_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]=
            {
                "camo"
            };
        };
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrier1_US_Tigerstripe_insignia: V_PlateCarrier1_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Carrier Lite (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\vests_US_Tigerstripe_co_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_plate_carrier_1_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrier2_US_Tigerstripe_insignia: V_PlateCarrier2_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Carrier Rig (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\vests_US_Tigerstripe_co_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_plate_carrier_2_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrier_Kerry_US_Tigerstripe_insignia: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Carrier Lite (No belt, flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\vests_US_Tigerstripe_co_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_plate_carrier_1_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]=
            {
                "camo"
            };
        };
    };
    class ghostb_US_Tigerstripe_lite_V_CF_CarrierRig_US_Tigerstripe: ghostb_main_V_CF_CarrierRig_base_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Defender Rig";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\V_CF_CarrierRig_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_CF_CarrierRig_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_CF_CarrierRig_lite_US_Tigerstripe: ghostb_main_V_CF_CarrierRig_Lite_base_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Defender Rig Lite";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\V_CF_CarrierRig_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\V_CF_CarrierRig_Pouches_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_CF_CarrierRig_lite_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_CF_CarrierRig_MG_US_Tigerstripe: ghostb_main_V_CF_CarrierRig_MG_base_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Defender Rig MG";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\V_CF_CarrierRig_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\V_CF_CarrierRig_Pouches_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_CF_CarrierRig_MG_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_HarnessOGL_US_Tigerstripe_F: V_HarnessOGL_ghex_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] LBV Grenadier Harness";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\tech_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_HarnessOGL_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_HarnessO_US_Tigerstripe_F: V_HarnessO_ghex_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] LBV Harness";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\tech_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_HarnessO_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_TacVestIR_US_Tigerstripe: V_TacVestIR_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Raven Vest";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\tech_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_TacVestIR_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo1",
            "camo2"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]=
            {
                "camo1",
                "camo2"
            };
        };
    };
    class ghostb_US_Tigerstripe_lite_V_CarrierRigKBT_01_heavy_US_Tigerstripe_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigKBT_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_CarrierRigKBT_01_heavy_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_CarrierRigKBT_01_light_US_Tigerstripe_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigKBT_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_CarrierRigKBT_01_light_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_CarrierRigKBT_01_US_Tigerstripe_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigKBT_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_CarrierRigKBT_01_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_CarrierRigBW_US_Tigerstripe: ghostb_main_V_CarrierRigBW_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Odin Rig";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigBW_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_CarrierRigBW_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_CarrierRigBW_CQB_US_Tigerstripe: ghostb_main_V_CarrierRigBW_CQB_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Odin Rig CQB";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigBW_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigBW_Pouches_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigBW_GL_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_CarrierRigBW_CQB_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_CarrierRigBW_GL_US_Tigerstripe: ghostb_main_V_CarrierRigBW_GL_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Odin Rig GL";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigBW_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigBW_Pouches_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigBW_GL_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_CarrierRigBW_GL_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_CarrierRigBW_Lite_US_Tigerstripe: ghostb_main_V_CarrierRigBW_Lite_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Odin Rig Lite";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigBW_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\CarrierRigBW_Pouches_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_V_CarrierRigBW_Lite_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetHBK_F_US_Tigerstripe: H_HelmetHBK_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Advanced Modular Helmet";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetHBK_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetHBK_F_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetHBK_headset_F_US_Tigerstripe: H_HelmetHBK_headset_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Advanced Modular Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetHBK_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetHBK_headset_F_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetHBK_ear_F_US_Tigerstripe: H_HelmetHBK_ear_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Advanced Modular Helmet (Ear Protectors)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetHBK_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetHBK_ear_F_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetHBK_chops_F_US_Tigerstripe: H_HelmetHBK_chops_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Advanced Modular Helmet (Chops)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetHBK_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetHBK_chops_F_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_Booniehat_US_Tigerstripe: H_Booniehat_khk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Booniehat ";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\booniehat_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_booniehat_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_Booniehat_US_Tigerstripe_hs: H_Booniehat_khk_hs {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Booniehat (Headset)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\booniehat_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_Booniehat_US_Tigerstripe_hs_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_Cap_US_Tigerstripe: H_Cap_oli {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Cap";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\capb_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_Cap_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_Cap_US_Tigerstripe_hs: H_Cap_oli_hs {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Cap (Headset)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\capb_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_Cap_US_Tigerstripe_hs_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetB_US_Tigerstripe: H_HelmetB {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Helmet";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\equip1_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetB_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetSpecB_US_Tigerstripe: H_HelmetSpecB {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Enhanced Combat Helmet";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\equip1_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetSpecB_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetB_light_US_Tigerstripe: ghostb_main_H_HelmetB_light_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Light Combat Helmet (Enhanced)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\equip1_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetB_light_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetB_light_basic_US_Tigerstripe: ghostb_main_H_HelmetB_light_basic_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Light Combat Helmet";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\equip1_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetB_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetB_camo_US_Tigerstripe: H_HelmetB_camo {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Helmet (Camo)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\equip1_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\ghillie_2_US_Tigerstripe_ca.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetB_camo_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetSpecB_US_Tigerstripe_insignia: H_HelmetSpecB {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Enhanced Combat Helmet (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\equip1_US_Tigerstripe_co_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetSpecB_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetB_light_US_Tigerstripe_insignia: ghostb_main_H_HelmetB_light_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Light Combat Helmet (Enhanced, flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\equip1_US_Tigerstripe_co_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetB_light_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetLeaderO_US_Tigerstripe: H_HelmetLeaderO_ocamo {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Defender Helmet";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\tech_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetLeaderO_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetO_US_Tigerstripe: H_HelmetO_ocamo {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Protector Helmet";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\tech_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetO_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetSpecO_US_Tigerstripe: H_HelmetSpecO_ocamo {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Assassin Helmet";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\tech_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetO_spec_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetEAST_US_Tigerstripe_F: ghostb_main_H_HelmetEAST_base_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Luchnik Helmet";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetEAST_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetEAST_US_Tigerstripe_F.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetEAST_Cover_US_Tigerstripe_F: ghostb_main_H_HelmetEAST_Cover_base_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Luchnik Helmet (Cover)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetEAST_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetEAST_Cover_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetSpecter_01_cover_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetEAST_Cover_US_Tigerstripe_F.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetEAST_Headset_US_Tigerstripe_F: ghostb_main_H_HelmetEAST_Headset_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Luchnik Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetEAST_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetSpecter_01_cover_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetEAST_Headset_US_Tigerstripe_F.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetIA_US_Tigerstripe: H_HelmetIA {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Modular Helmet";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\headgear_helmet_canvas_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_I_Helmet_canvas_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetSpecter_US_Tigerstripe_F: ghostb_main_H_HelmetSpecter_base_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Raven Helmet";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetSpecter_01_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetSpecter_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetSpecter_headset_US_Tigerstripe_F: ghostb_main_H_HelmetSpecter_headset_base_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Raven Helmet (Headset)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetSpecter_01_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetSpecter_01_cover_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetSpecter_paint_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_H_HelmetSpecter_cover_US_Tigerstripe_F: ghostb_main_H_HelmetSpecter_cover_base_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Raven Helmet (Cover)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetSpecter_01_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\H_HelmetSpecter_01_cover_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_H_HelmetSpecter_cover_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_U_I_CombatUniform_US_Tigerstripe: U_I_CombatUniform {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [AAF]";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_I_CombatUniform_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_I_CombatUniform_US_Tigerstripe";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_I_CombatUniform_shortsleeve_US_Tigerstripe: U_I_CombatUniform_shortsleeve {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [AAF] (Rolled-up)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_I_CombatUniform_shortsleeve_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_I_CombatUniform_shortsleeve_US_Tigerstripe";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_I_CombatUniform_US_Tigerstripe_insignia: U_I_CombatUniform {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [AAF] (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_I_CombatUniform_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_I_CombatUniform_US_Tigerstripe_insignia";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_I_CombatUniform_shortsleeve_US_Tigerstripe_insignia: U_I_CombatUniform_shortsleeve {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [AAF] (Rolled-up, flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_I_CombatUniform_shortsleeve_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_I_CombatUniform_shortsleeve_US_Tigerstripe_insignia";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_I_E_Uniform_US_Tigerstripe_01_F: U_I_E_Uniform_01_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [LDF]";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_E_Soldier_01_gloves_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_US_Tigerstripe_01_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_I_E_Uniform_shortsleeve_US_Tigerstripe_01_F: U_I_E_Uniform_01_shortsleeve_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [LDF] (Rolled-up)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_shortsleeve_US_Tigerstripe_01_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_I_E_Uniform_OfficerUniformNoInsignia_US_Tigerstripe_F: U_I_OfficerUniform {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Light Combat Fatigues";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_US_Tigerstripe_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_I_E_Uniform_shortsleeve_US_Tigerstripe_01_F_flag: U_I_E_Uniform_01_shortsleeve_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [LDF] (Rolled-up, flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO_flag.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_shortsleeve_US_Tigerstripe_01_F_flag";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_I_E_Uniform_OfficerUniformNoInsignia_US_Tigerstripe_F_flag: U_I_OfficerUniform {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Light Combat Fatigues (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO_flag.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_US_Tigerstripe_F_flag";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_I_E_Uniform_US_Tigerstripe_01_F_insignia: U_I_E_Uniform_01_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [LDF] (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO_flag.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_E_Soldier_01_gloves_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_US_Tigerstripe_01_F_insignia";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_B_CombatUniform_US_Tigerstripe: U_B_CombatUniform_mcam {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [NATO]";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing1_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_uniform_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_B_CombatUniform_US_Tigerstripe";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_B_CombatUniform_vest_US_Tigerstripe: U_B_CombatUniform_mcam_vest {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [NATO] (Rolled-up)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing1_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_vest_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_B_CombatUniform_vest_US_Tigerstripe";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_B_CombatUniform_US_Tigerstripe_insignia: U_B_CombatUniform_mcam {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [NATO] (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing1_US_Tigerstripe_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_uniform_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_B_CombatUniform_US_Tigerstripe_insignia";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_B_CombatUniform_vest_US_Tigerstripe_insignia: U_B_CombatUniform_mcam_vest {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Fatigues [NATO] (Rolled-up, flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing1_US_Tigerstripe_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_vest_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_B_CombatUniform_vest_US_Tigerstripe_insignia";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_O_CombatUniform_US_Tigerstripe: U_O_CombatUniform_ocamo {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Fatigues [CSAT]";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\tech_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_O_R_CombatUniform_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_O_CombatUniform_US_Tigerstripe";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_B_CTRG_Soldier_US_Tigerstripe_F: U_B_CTRG_Soldier_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\U_B_CTRG_Soldier_US_Tigerstripe_F_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_uniform_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_B_CTRG_Soldier_US_Tigerstripe_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_B_CTRG_Soldier_3_US_Tigerstripe_F: U_B_CTRG_Soldier_3_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\U_B_CTRG_Soldier_US_Tigerstripe_F_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_vest_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_B_CTRG_Soldier_3_US_Tigerstripe_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_B_CTRG_Soldier_US_Tigerstripe_F_insignia: U_B_CTRG_Soldier_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] CTRG Stealth Uniform (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\U_B_CTRG_Soldier_US_Tigerstripe_F_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_uniform_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_B_CTRG_Soldier_US_Tigerstripe_F_insignia";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_B_CTRG_Soldier_3_US_Tigerstripe_F_insignia: U_B_CTRG_Soldier_3_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] CTRG Stealth Uniform (Rolled-up, flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\U_B_CTRG_Soldier_US_Tigerstripe_F_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_vest_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_B_CTRG_Soldier_3_US_Tigerstripe_F_insignia";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_O_officer_noInsignia_US_Tigerstripe_F: U_O_officer_noInsignia_hex_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Light Fatigues";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_O_R_officer_noInsignia_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_O_officer_noInsignia_US_Tigerstripe_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_O_officer_noInsignia_US_Tigerstripe_F_insignia: U_O_officer_noInsignia_hex_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Light Fatigues (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_O_R_officer_noInsignia_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_O_officer_noInsignia_US_Tigerstripe_F_insignia";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_Aegis_O_Soldier_03_US_Tigerstripe: ghostb_main_U_Aegis_O_Soldier_03_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Luchnik Fatigues";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing2_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\TacGloves_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_Aegis_O_Soldier_03_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_Aegis_O_Soldier_03_US_Tigerstripe";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_Aegis_O_Soldier_04_US_Tigerstripe: ghostb_main_U_Aegis_O_Soldier_04_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Luchnik Fatigues (Rolled-up)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing2_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\TacGloves_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_Aegis_O_Soldier_04_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_Aegis_O_Soldier_04_US_Tigerstripe";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_Aegis_O_Soldier_03_US_Tigerstripe_insignia: ghostb_main_U_Aegis_O_Soldier_03_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Luchnik Fatigues (Flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing2_US_Tigerstripe_CO_flag.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\TacGloves_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_Aegis_O_Soldier_03_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_Aegis_O_Soldier_03_US_Tigerstripe_insignia";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_lite_U_Aegis_O_Soldier_04_US_Tigerstripe_insignia: ghostb_main_U_Aegis_O_Soldier_04_base {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Luchnik Fatigues (Rolled-up, flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing2_US_Tigerstripe_CO_flag.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\TacGloves_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_Aegis_O_Soldier_04_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_lite_Soldier_U_Aegis_O_Soldier_04_US_Tigerstripe_insignia";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
};
class CfgVehicles {
    class B_AssaultPack_rgr;
    class B_AssaultPack_Kerry;
    class B_Carryall_cbr;
    class B_Kitbag_rgr;
    class B_TacticalPack_blk;
    class I_Soldier_F;
    class I_Soldier_lite_F;
    class I_E_Uniform_01_F;
    class I_E_Uniform_01_shortsleeve_F;
    class I_Officer_F;
    class B_Soldier_F;
    class B_Soldier_SL_F;
    class O_Soldier_F;
    class B_CTRG_Soldier_F;
    class B_CTRG_Soldier_3_F;
    class ghostb_main_O_A_officer_F;
    class ghostb_main_Aegis_O_Soldier_03_base;
    class ghostb_main_Aegis_O_Soldier_04_base;
    class ghostb_US_Tigerstripe_lite_Soldier_U_I_CombatUniform_US_Tigerstripe: I_Soldier_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [AAF]";
        uniformClass="ghostb_US_Tigerstripe_lite_U_I_CombatUniform_US_Tigerstripe";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_I_CombatUniform_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_I_CombatUniform_shortsleeve_US_Tigerstripe: I_Soldier_lite_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [AAF] (Rolled-up)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_I_CombatUniform_shortsleeve_US_Tigerstripe";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_I_CombatUniform_shortsleeve_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_I_CombatUniform_US_Tigerstripe_insignia: I_Soldier_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [AAF] (Flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_I_CombatUniform_US_Tigerstripe_insignia";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_I_CombatUniform_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_I_CombatUniform_shortsleeve_US_Tigerstripe_insignia: I_Soldier_lite_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [AAF] (Rolled-up, flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_I_CombatUniform_shortsleeve_US_Tigerstripe_insignia";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_I_CombatUniform_shortsleeve_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_US_Tigerstripe_01_F: I_E_Uniform_01_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [LDF]";
        uniformClass="ghostb_US_Tigerstripe_lite_U_I_E_Uniform_US_Tigerstripe_01_F";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_E_Soldier_01_gloves_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_US_Tigerstripe_F_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_shortsleeve_US_Tigerstripe_01_F: I_E_Uniform_01_shortsleeve_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [LDF] (Rolled-up)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_I_E_Uniform_shortsleeve_US_Tigerstripe_01_F";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_Tigerstripe_F_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_US_Tigerstripe_F: I_Officer_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Light Combat Fatigues";
        uniformClass="ghostb_US_Tigerstripe_lite_U_I_E_Uniform_OfficerUniformNoInsignia_US_Tigerstripe_F";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_Tigerstripe_F_ca.paa";
        scope=1;
        scopeCurator=0;
        hiddenSelections[]= {
            "camo1",
            "camo2",
            "insignia"
        };
        hiddenSelectionsMaterials[]= {
            "\z\ghostb\addons\main\uniforms\data\officer_noinsignia.rvmat",
            "a3\characters_f_beta\INDEP\Data\ia_soldier_01_clothing.rvmat"
        };
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_shortsleeve_US_Tigerstripe_01_F_flag: I_E_Uniform_01_shortsleeve_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [LDF] (Rolled-up, flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_I_E_Uniform_shortsleeve_US_Tigerstripe_01_F_flag";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO_flag.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_Tigerstripe_F_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_US_Tigerstripe_F_flag: I_Officer_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Light Combat Fatigues (Flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_I_E_Uniform_OfficerUniformNoInsignia_US_Tigerstripe_F_flag";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO_flag.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_US_Tigerstripe_F_ca.paa";
        scope=1;
        scopeCurator=0;
        hiddenSelections[]= {
            "camo1",
            "camo2",
            "insignia"
        };
        hiddenSelectionsMaterials[]= {
            "\z\ghostb\addons\main\uniforms\data\officer_noinsignia.rvmat",
            "a3\characters_f_beta\INDEP\Data\ia_soldier_01_clothing.rvmat"
        };
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_I_E_Uniform_US_Tigerstripe_01_F_insignia: I_E_Uniform_01_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [LDF] (Flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_I_E_Uniform_US_Tigerstripe_01_F_insignia";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_I_Soldier_01_US_Tigerstripe_CO_flag.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\I_E_Soldier_01_gloves_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_I_E_Uniform_01_US_Tigerstripe_F_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_B_CombatUniform_US_Tigerstripe: B_Soldier_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [NATO]";
        uniformClass="ghostb_US_Tigerstripe_lite_U_B_CombatUniform_US_Tigerstripe";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing1_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_uniform_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_B_CombatUniform_vest_US_Tigerstripe: B_Soldier_SL_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [NATO] (Rolled-up)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_B_CombatUniform_vest_US_Tigerstripe";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing1_US_Tigerstripe.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_vest_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_B_CombatUniform_US_Tigerstripe_insignia: B_Soldier_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [NATO] (Flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_B_CombatUniform_US_Tigerstripe_insignia";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing1_US_Tigerstripe_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_uniform_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_B_CombatUniform_vest_US_Tigerstripe_insignia: B_Soldier_SL_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Combat Fatigues [NATO] (Rolled-up, flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_B_CombatUniform_vest_US_Tigerstripe_insignia";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing1_US_Tigerstripe_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_vest_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_O_CombatUniform_US_Tigerstripe: O_Soldier_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Fatigues [CSAT]";
        uniformClass="ghostb_US_Tigerstripe_lite_U_O_CombatUniform_US_Tigerstripe";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\tech_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_O_R_CombatUniform_US_Tigerstripe_F_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_B_CTRG_Soldier_US_Tigerstripe_F: B_CTRG_Soldier_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] CTRG Stealth Uniform";
        uniformClass="ghostb_US_Tigerstripe_lite_U_B_CTRG_Soldier_US_Tigerstripe_F";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\U_B_CTRG_Soldier_US_Tigerstripe_F_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_uniform_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_B_CTRG_Soldier_3_US_Tigerstripe_F: B_CTRG_Soldier_3_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] CTRG Stealth Uniform (Rolled-up)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_B_CTRG_Soldier_3_US_Tigerstripe_F";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\U_B_CTRG_Soldier_US_Tigerstripe_F_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_vest_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_B_CTRG_Soldier_US_Tigerstripe_F_insignia: B_CTRG_Soldier_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] CTRG Stealth Uniform (Flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_B_CTRG_Soldier_US_Tigerstripe_F_insignia";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\U_B_CTRG_Soldier_US_Tigerstripe_F_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_uniform_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_B_CTRG_Soldier_3_US_Tigerstripe_F_insignia: B_CTRG_Soldier_3_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] CTRG Stealth Uniform (Rolled-up, flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_B_CTRG_Soldier_3_US_Tigerstripe_F_insignia";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\U_B_CTRG_Soldier_US_Tigerstripe_F_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\Icon_U_B_CTRG_vest_US_Tigerstripe_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_O_officer_noInsignia_US_Tigerstripe_F: ghostb_main_O_A_officer_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Light Fatigues";
        uniformClass="ghostb_US_Tigerstripe_lite_U_O_officer_noInsignia_US_Tigerstripe_F";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_O_R_officer_noInsignia_US_Tigerstripe_F_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_O_officer_noInsignia_US_Tigerstripe_F_insignia: ghostb_main_O_A_officer_F {
        author="Seb";
        displayName="Unit [US Tigerstripe] Light Fatigues (Flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_O_officer_noInsignia_US_Tigerstripe_F_insignia";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\Officer_noInsignia_US_Tigerstripe_CO_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_O_R_officer_noInsignia_US_Tigerstripe_F_ca.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_Aegis_O_Soldier_03_US_Tigerstripe: ghostb_main_Aegis_O_Soldier_03_base {
        author="Seb";
        displayName="Unit [US Tigerstripe] Luchnik Fatigues";
        uniformClass="ghostb_US_Tigerstripe_lite_U_Aegis_O_Soldier_03_US_Tigerstripe";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing2_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\TacGloves_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_Aegis_O_Soldier_03_US_Tigerstripe.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_Aegis_O_Soldier_04_US_Tigerstripe: ghostb_main_Aegis_O_Soldier_04_base {
        author="Seb";
        displayName="Unit [US Tigerstripe] Luchnik Fatigues (Rolled-up)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_Aegis_O_Soldier_04_US_Tigerstripe";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing2_US_Tigerstripe_CO.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\TacGloves_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_Aegis_O_Soldier_04_US_Tigerstripe.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_Aegis_O_Soldier_03_US_Tigerstripe_insignia: ghostb_main_Aegis_O_Soldier_03_base {
        author="Seb";
        displayName="Unit [US Tigerstripe] Luchnik Fatigues (Flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_Aegis_O_Soldier_03_US_Tigerstripe_insignia";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing2_US_Tigerstripe_CO_flag.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\TacGloves_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_Aegis_O_Soldier_03_US_Tigerstripe.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_Soldier_U_Aegis_O_Soldier_04_US_Tigerstripe_insignia: ghostb_main_Aegis_O_Soldier_04_base {
        author="Seb";
        displayName="Unit [US Tigerstripe] Luchnik Fatigues (Rolled-up, flag)";
        uniformClass="ghostb_US_Tigerstripe_lite_U_Aegis_O_Soldier_04_US_Tigerstripe_insignia";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing2_US_Tigerstripe_CO_flag.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\TacGloves_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\clothing_US_Tigerstripe_CO.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_U_Aegis_O_Soldier_04_US_Tigerstripe.paa";
        scope=1;
        scopeCurator=0;
    };
    class ghostb_US_Tigerstripe_lite_B_AssaultPack_US_Tigerstripe: B_AssaultPack_rgr {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Assault Pack";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\backpack_compact_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_B_AssaultPack_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_B_AssaultPackEnhanced_US_Tigerstripe: B_AssaultPack_Kerry {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Assault Pack (Enhanced)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\backpack_compact_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\vests_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_B_AssaultPack_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_US_Tigerstripe_lite_B_AssaultPackEnhanced_US_Tigerstripe_insignia: B_AssaultPack_Kerry {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Assault Pack (Enhanced, flag)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\backpack_compact_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\vests_US_Tigerstripe_co_flag.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_B_AssaultPack_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
    };
    class ghostb_US_Tigerstripe_lite_B_Carryall_US_Tigerstripe: B_Carryall_cbr {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Carryall Backpack";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\backpack_tortila_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_B_C_Tortila_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_B_Kitbag_rgr_US_Tigerstripe: B_Kitbag_rgr {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Kitbag";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\backpack_fast_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_B_C_Kitbag_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_B_TacticalPack_US_Tigerstripe: B_TacticalPack_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Tactical Backpack";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\backpack_small_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_B_C_Small_US_Tigerstripe.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
};
class CfgGlasses {
    class G_Balaclava_blk;
    class G_Balaclava_combat;
    class G_Balaclava_lowprofile;
    class G_Combat;
    class G_Balaclava_TI_G_blk_F;
    class G_Balaclava_TI_blk_F;
    class ghostb_US_Tigerstripe_lite_G_Balaclava_US_Tigerstripe: G_Balaclava_blk {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Balaclava";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\headgear_balaclava_US_Tigerstripe_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_G_Balaclava_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_G_Balaclava_combat_US_Tigerstripe: G_Balaclava_combat {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Balaclava (Combat Goggles)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\headgear_balaclava_US_Tigerstripe_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\g_combat_US_Tigerstripe_ca.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_G_Balaclava_combat_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_G_Balaclava_lowprofile_US_Tigerstripe: G_Balaclava_lowprofile {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Balaclava (Low Profile Goggles)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\headgear_balaclava_US_Tigerstripe_co.paa",
            "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_G_Balaclava_lowprofile_US_Tigerstripe_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_G_Combat_US_Tigerstripe: G_Combat {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Combat Goggles";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\g_combat_US_Tigerstripe_ca.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_g_combat_US_Tigerstripe_CA.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
    };
    class ghostb_US_Tigerstripe_lite_G_Balaclava_TI_G_US_Tigerstripe_F: G_Balaclava_TI_G_blk_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Stealth Balaclava (Goggles)";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\G_Balaclava_TI_US_Tigerstripe_F_co.paa",
            "\z\ghostb\addons\US_Tigerstripe_lite\data\g_combat_US_Tigerstripe_ca.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_G_Balaclava_TI_G_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    };
    class ghostb_US_Tigerstripe_lite_G_Balaclava_TI_US_Tigerstripe_F: G_Balaclava_TI_blk_F {
        author="Seb";
        displayName="(GHOST)[US Tigerstripe] Stealth Balaclava";
        hiddenSelectionsTextures[]= {
            "\z\ghostb\addons\US_Tigerstripe_lite\data\G_Balaclava_TI_US_Tigerstripe_F_co.paa"
        };
        picture="\z\ghostb\addons\US_Tigerstripe_lite\data\UI\icon_G_Balaclava_TI_US_Tigerstripe_F_ca.paa";
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    };
};
