#include "script_component.hpp"
class CfgWeapons {
    class Uniform_Base;
    class U_B_CTRG_Soldier_F: Uniform_Base {
        class ItemInfo;
    };
    class U_B_CTRG_Soldier_3_F: Uniform_Base {
        class ItemInfo;
    };
    
    class ghostb_Multicam_Snow_U_B_CTRG_Soldier_Multicam_Snow_F: U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST Multicam Snow] CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_Multicam_Snow_F_CO.paa)
        };
        picture = QPATHTOF(data\UI\Icon_U_B_CTRG_uniform_Multicam_Snow_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_Multicam_Snow_Soldier_U_B_CTRG_Soldier_Multicam_Snow_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_Multicam_Snow_U_B_CTRG_Soldier_3_Multicam_Snow_F: U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST Multicam Snow] CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_Multicam_Snow_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_vest_Multicam_Snow_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_Multicam_Snow_Soldier_U_B_CTRG_Soldier_3_Multicam_Snow_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_Multicam_U_B_CTRG_Soldier_Multicam_F: U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST Multicam] CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_Multicam_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_uniform_Multicam_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_Multicam_Soldier_U_B_CTRG_Soldier_Multicam_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_Multicam_U_B_CTRG_Soldier_3_Multicam_F: U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST Multicam] CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_Multicam_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_vest_Multicam_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_Multicam_Soldier_U_B_CTRG_Soldier_3_Multicam_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_Multicam_Woodland_U_B_CTRG_Soldier_Multicam_Woodland_F: U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST Multicam Woodland] CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_Multicam_Woodland_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_uniform_Multicam_Woodland_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_Multicam_Woodland_Soldier_U_B_CTRG_Soldier_Multicam_Woodland_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_Multicam_Woodland_U_B_CTRG_Soldier_3_Multicam_Woodland_F: U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST Multicam Woodland] CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_Multicam_Woodland_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_vest_Multicam_Woodland_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_Multicam_Woodland_Soldier_U_B_CTRG_Soldier_3_Multicam_Woodland_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_Solid_Black_U_B_CTRG_Soldier_Solid_Black_F: U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[Solid Black] CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_Solid_Black_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_uniform_Solid_Black_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_Solid_Black_Soldier_U_B_CTRG_Soldier_Solid_Black_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_Solid_Black_U_B_CTRG_Soldier_3_Solid_Black_F: U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[Solid Black] CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_Solid_Black_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_vest_Solid_Black_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_Solid_Black_Soldier_U_B_CTRG_Soldier_3_Solid_Black_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_U_B_CTRG_Soldier_US_Tigerstripe_F: U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST Tigerstripe] CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_US_Tigerstripe_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_uniform_US_Tigerstripe_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_Soldier_U_B_CTRG_Soldier_US_Tigerstripe_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_Tigerstripe_U_B_CTRG_Soldier_3_US_Tigerstripe_F: U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST Tigerstripe] CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_US_Tigerstripe_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_vest_US_Tigerstripe_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_Tigerstripe_Soldier_U_B_CTRG_Soldier_3_US_Tigerstripe_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_DCU_U_B_CTRG_Soldier_US_DCU_F: U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST DCU] CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_US_DCU_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_uniform_US_DCU_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_DCU_Soldier_U_B_CTRG_Soldier_US_DCU_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_DCU_U_B_CTRG_Soldier_3_US_DCU_F: U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST DCU] CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_US_DCU_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_vest_US_DCU_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_DCU_Soldier_U_B_CTRG_Soldier_3_US_DCU_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_M81_U_B_CTRG_Soldier_US_M81_F: U_B_CTRG_Soldier_F {
        author = QAUTHOR;
        displayName="[GHOST M81] CTRG Stealth Uniform";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_US_M81_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_uniform_US_M81_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_M81_Soldier_U_B_CTRG_Soldier_US_M81_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    class ghostb_US_M81_U_B_CTRG_Soldier_3_US_M81_F: U_B_CTRG_Soldier_3_F {
        author = QAUTHOR;
        displayName="[GHOST M81] CTRG Stealth Uniform (Rolled-up)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\U_B_CTRG_Soldier_US_M81_F_CO.paa)
        };
        picture=QPATHTOF(data\UI\Icon_U_B_CTRG_vest_US_M81_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        class ItemInfo: ItemInfo {
            uniformClass="ghostb_US_M81_Soldier_U_B_CTRG_Soldier_3_US_M81_F";
            modelSides[]={0,1,2,3,4,5,6,7};
        };
    };
    
    
};
