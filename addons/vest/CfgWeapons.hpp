#include "script_component.hpp"
class CfgWeapons {
    class V_PlateCarrierSpec_blk;
    class V_PlateCarrierGL_blk;
    class V_PlateCarrier1_blk;
    class V_PlateCarrier2_blk;
    class V_PlateCarrier2_rgr;
    class V_BandollierB_blk;
    class Vest_NoCamo_Base;
    class V_PlateCarrier1_rgr;
    class V_Rangemaster_belt: Vest_NoCamo_Base {
        class ItemInfo;
    };
    class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class V_CarrierRigKBT_01_heavy_Olive_F;
    class V_CarrierRigKBT_01_light_Olive_F;
    class V_CarrierRigKBT_01_Olive_F;


    class ghostb_Multicam_lite_V_PlateCarrierSpec_Multicam: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST Multicam] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_Multicam.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_lite_V_PlateCarrierGL_Multicam: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST Multicam] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_Multicam.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_lite_V_PlateCarrier1_Multicam: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST Multicam] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Multicam_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_lite_V_PlateCarrier2_Multicam: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST Multicam] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_Multicam_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_lite_V_BandollierB_Multicam: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST Multicam] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_Multicam_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_lite_V_Rangemaster_belt_Multicam: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST Multicam] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_Multicam_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Multicam_lite_V_PlateCarrier_Kerry_Multicam: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST Multicam] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Multicam_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Multicam_Snow_lite_V_PlateCarrierSpec_Multicam_Snow: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST Multicam Snow] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_Multicam_Snow.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Snow_lite_V_PlateCarrierGL_Multicam_Snow: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST Multicam Snow] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam_Snow.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_Multicam_Snow.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Snow_lite_V_PlateCarrier1_Multicam_Snow: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST Multicam Snow] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Multicam_Snow_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Snow_lite_V_PlateCarrier2_Multicam_Snow: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST Multicam Snow] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_Multicam_Snow_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Snow_lite_V_BandollierB_Multicam_Snow: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST Multicam Snow] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_Multicam_Snow_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Snow_lite_V_Rangemaster_belt_Multicam_Snow: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST Multicam Snow] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_Multicam_Snow_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Multicam_Snow_lite_V_PlateCarrier_Kerry_Multicam_Snow: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST Multicam Snow] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Snow_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Multicam_Snow_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Multicam_Woodland_lite_V_PlateCarrierSpec_Multicam_Woodland: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST Multicam Woodland] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_Multicam_Woodland.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Woodland_lite_V_PlateCarrierGL_Multicam_Woodland: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST Multicam Woodland] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Multicam_Woodland.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_Multicam_Woodland.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Woodland_lite_V_PlateCarrier1_Multicam_Woodland: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST Multicam Woodland] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Multicam_Woodland_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Woodland_lite_V_PlateCarrier2_Multicam_Woodland: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST Multicam Woodland] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_Multicam_Woodland_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Woodland_lite_V_BandollierB_Multicam_Woodland: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST Multicam Woodland] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_Multicam_Woodland_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Woodland_lite_V_Rangemaster_belt_Multicam_Woodland: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST Multicam Woodland] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_Multicam_Woodland_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Multicam_Woodland_lite_V_PlateCarrier_Kerry_Multicam_Woodland: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST Multicam Woodland] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Multicam_Woodland_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Multicam_Woodland_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_Black_lite_V_PlateCarrierSpec_Solid_Black: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST Solid Black] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Black.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_Solid_Black.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Black_lite_V_PlateCarrierGL_Solid_Black: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST Solid Black] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Black.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_Solid_Black.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Black_lite_V_PlateCarrier1_Solid_Black: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST Solid Black] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_Black_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Black_lite_V_PlateCarrier2_Solid_Black: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST Solid Black] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_Solid_Black_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Black_lite_V_BandollierB_Solid_Black: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST Solid Black] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_Solid_Black_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Black_lite_V_Rangemaster_belt_Solid_Black: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST Solid Black] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_Solid_Black_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_Black_lite_V_PlateCarrier_Kerry_Solid_Black: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST Solid Black] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Black_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_Black_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_CoyoteBrown_lite_V_PlateCarrierSpec_Solid_CoyoteBrown: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST Solid CoyoteBrown] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_Solid_CoyoteBrown.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_CoyoteBrown_lite_V_PlateCarrierGL_Solid_CoyoteBrown: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST Solid CoyoteBrown] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_CoyoteBrown.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_Solid_CoyoteBrown.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_CoyoteBrown_lite_V_PlateCarrier1_Solid_CoyoteBrown: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST Solid CoyoteBrown] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_CoyoteBrown_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_CoyoteBrown_lite_V_PlateCarrier2_Solid_CoyoteBrown: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST Solid CoyoteBrown] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_Solid_CoyoteBrown_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_CoyoteBrown_lite_V_BandollierB_Solid_CoyoteBrown: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST Solid CoyoteBrown] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_Solid_CoyoteBrown_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_CoyoteBrown_lite_V_Rangemaster_belt_Solid_CoyoteBrown: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST Solid CoyoteBrown] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_Solid_CoyoteBrown_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_CoyoteBrown_lite_V_PlateCarrier_Kerry_Solid_CoyoteBrown: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST Solid CoyoteBrown] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_CoyoteBrown_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_CoyoteBrown_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_Ranger_Green_lite_V_PlateCarrierSpec_Solid_Ranger_Green: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST Solid Ranger Green] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_Solid_Ranger_Green.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Ranger_Green_lite_V_PlateCarrierGL_Solid_Ranger_Green: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST Solid Ranger Green] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Ranger_Green.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_Solid_Ranger_Green.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Ranger_Green_lite_V_PlateCarrier1_Solid_Ranger_Green: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST Solid Ranger Green] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_Ranger_Green_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Ranger_Green_lite_V_PlateCarrier2_Solid_Ranger_Green: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST Solid Ranger Green] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_Solid_Ranger_Green_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Ranger_Green_lite_V_BandollierB_Solid_Ranger_Green: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST Solid Ranger Green] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_Solid_Ranger_Green_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Ranger_Green_lite_V_Rangemaster_belt_Solid_Ranger_Green: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST Solid Ranger Green] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_Solid_Ranger_Green_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_Ranger_Green_lite_V_PlateCarrier_Kerry_Solid_Ranger_Green: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST Solid Ranger Green] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Ranger_Green_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_Ranger_Green_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrierSpec_US_Tigerstripe: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST Tigerstripe] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_US_Tigerstripe.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrierGL_US_Tigerstripe: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST Tigerstripe] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_Tigerstripe.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_US_Tigerstripe.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrierSpec_US_Tigerstripe_insignia: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST Tigerstripe] Carrier Special Rig (Flag)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_Tigerstripe_flag.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_US_Tigerstripe.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrierGL_US_Tigerstripe_insignia: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST Tigerstripe] Carrier GL Rig (Flag)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_Tigerstripe_flag.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_US_Tigerstripe.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrier1_US_Tigerstripe: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST Tigerstripe] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_US_Tigerstripe_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrier2_US_Tigerstripe: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST Tigerstripe] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_US_Tigerstripe_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_BandollierB_US_Tigerstripe: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST Tigerstripe] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_US_Tigerstripe_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_Rangemaster_belt_US_Tigerstripe: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST Tigerstripe] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_US_Tigerstripe_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_US_Tigerstripe_lite_V_PlateCarrier_Kerry_US_Tigerstripe: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST Tigerstripe] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_Tigerstripe_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_US_Tigerstripe_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_Olive_lite_V_PlateCarrierSpec_Solid_Olive: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST Solid Olive] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_Solid_Olive.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Olive_lite_V_PlateCarrierGL_Solid_Olive: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST Solid Olive] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Olive.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_Solid_Olive.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Olive_lite_V_PlateCarrier1_Solid_Olive: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST Solid Olive] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_Olive_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Olive_lite_V_PlateCarrier2_Solid_Olive: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST Solid Olive] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_Solid_Olive_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Olive_lite_V_BandollierB_Solid_Olive: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST Solid Olive] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_Solid_Olive_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Olive_lite_V_Rangemaster_belt_Solid_Olive: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST Solid Olive] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_Solid_Olive_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_Olive_lite_V_PlateCarrier_Kerry_Solid_Olive: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST Solid Olive] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Olive_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_Olive_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_Tan_lite_V_PlateCarrierSpec_Solid_Tan: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST Solid Tan] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_Solid_Tan.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Tan_lite_V_PlateCarrierGL_Solid_Tan: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST Solid Tan] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_Tan.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_Solid_Tan.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Tan_lite_V_PlateCarrier1_Solid_Tan: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST Solid Tan] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_Tan_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Tan_lite_V_PlateCarrier2_Solid_Tan: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST Solid Tan] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_Solid_Tan_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Tan_lite_V_BandollierB_Solid_Tan: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST Solid Tan] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_Solid_Tan_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Tan_lite_V_Rangemaster_belt_Solid_Tan: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST Solid Tan] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_Solid_Tan_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_Tan_lite_V_PlateCarrier_Kerry_Solid_Tan: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST Solid Tan] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_Tan_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_Tan_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_White_lite_V_PlateCarrierSpec_Solid_White: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST Solid White] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_White.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_Solid_White.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_White_lite_V_PlateCarrierGL_Solid_White: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST Solid White] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_Solid_White.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_Solid_White.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_White_lite_V_PlateCarrier1_Solid_White: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST Solid White] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_White_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_White_lite_V_PlateCarrier2_Solid_White: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST Solid White] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_Solid_White_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_White_lite_V_BandollierB_Solid_White: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST Solid White] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_Solid_White_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_White_lite_V_Rangemaster_belt_Solid_White: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST Solid White] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_Solid_White_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Solid_White_lite_V_PlateCarrier_Kerry_Solid_White: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST Solid White] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_Solid_White_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_Solid_White_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_US_DCU_lite_V_PlateCarrierSpec_US_DCU: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST DCU] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_DCU.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_US_DCU.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_DCU_lite_V_PlateCarrierGL_US_DCU: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST DCU] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_DCU.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_US_DCU.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_DCU_lite_V_PlateCarrierSpec_US_DCU_insignia: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST DCU] Carrier Special Rig (Flag)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_DCU_flag.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_US_DCU.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_DCU_lite_V_PlateCarrierGL_US_DCU_insignia: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST DCU] Carrier GL Rig (Flag)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_DCU_flag.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_US_DCU.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_DCU_lite_V_PlateCarrier1_US_DCU: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST DCU] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_US_DCU_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_DCU_lite_V_PlateCarrier2_US_DCU: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST DCU] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_US_DCU_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_DCU_lite_V_BandollierB_US_DCU: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST DCU] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_US_DCU_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_DCU_lite_V_Rangemaster_belt_US_DCU: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST DCU] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_US_DCU_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_US_DCU_lite_V_PlateCarrier_Kerry_US_DCU: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST DCU] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_DCU_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_US_DCU_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_US_M81_lite_V_PlateCarrierSpec_US_M81: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST M81] Carrier Special Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_M81.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_US_M81.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_M81_lite_V_PlateCarrierGL_US_M81: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST M81] Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_M81.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_US_M81.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_M81_lite_V_PlateCarrierSpec_US_M81_insignia: V_PlateCarrierSpec_blk {
        author="Seb";
        displayName="[GHOST M81] Carrier Special Rig (Flag)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_M81_flag.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_spec_rig_US_M81.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_M81_lite_V_PlateCarrierGL_US_M81_insignia: V_PlateCarrierGL_blk {
        author="Seb";
        displayName="[GHOST M81] Carrier GL Rig (Flag)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\carrier_gl_rig_US_M81_flag.paa)
        };
        picture=QPATHTOF(data\UI\icon_carrier_gl_rig_US_M81.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_M81_lite_V_PlateCarrier1_US_M81: V_PlateCarrier1_blk {
        author="Seb";
        displayName="[GHOST M81] Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_M81_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_US_M81_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_M81_lite_V_PlateCarrier2_US_M81: V_PlateCarrier2_blk {
        author="Seb";
        displayName="[GHOST M81] Carrier Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_M81_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_2_US_M81_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_M81_lite_V_BandollierB_US_M81: V_BandollierB_blk {
        author="Seb";
        displayName="[GHOST M81] Slash Bandolier";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_M81_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_bandollierB_US_M81_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_M81_lite_V_Rangemaster_belt_US_M81: V_Rangemaster_belt {
        author="Seb";
        displayName="[GHOST M81] Rangemaster Belt";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_M81_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_Rangemaster_belt_US_M81_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_US_M81_lite_V_PlateCarrier_Kerry_US_M81: V_PlateCarrier_Kerry {
        author="Seb";
        displayName="[GHOST M81] Carrier Lite (No belt)";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\vests_US_M81_co.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_plate_carrier_1_US_M81_CA.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
        hiddenSelections[]= {
            "camo"
        };
        class ItemInfo: ItemInfo {
            hiddenSelections[]= {
                "camo"
            };
        };
    };
    class ghostb_Multicam_lite_V_CarrierRigKBT_01_heavy_Multicam_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST Multicam] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_Multicam_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_lite_V_CarrierRigKBT_01_light_Multicam_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST Multicam] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_Multicam_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_lite_V_CarrierRigKBT_01_Multicam_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST Multicam] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_Multicam_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Snow_lite_V_CarrierRigKBT_01_heavy_Multicam_Snow_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST Multicam Snow] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Snow_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_Multicam_Snow_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Snow_lite_V_CarrierRigKBT_01_light_Multicam_Snow_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST Multicam Snow] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Snow_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_Multicam_Snow_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Snow_lite_V_CarrierRigKBT_01_Multicam_Snow_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST Multicam Snow] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Snow_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_Multicam_Snow_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Woodland_lite_V_CarrierRigKBT_01_heavy_Multicam_Woodland_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST Multicam Woodland] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Woodland_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_Multicam_Woodland_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Woodland_lite_V_CarrierRigKBT_01_light_Multicam_Woodland_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST Multicam Woodland] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Woodland_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_Multicam_Woodland_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Multicam_Woodland_lite_V_CarrierRigKBT_01_Multicam_Woodland_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST Multicam Woodland] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Multicam_Woodland_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_Multicam_Woodland_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Black_lite_V_CarrierRigKBT_01_heavy_Solid_Black_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Black] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Black_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_Solid_Black_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Black_lite_V_CarrierRigKBT_01_light_Solid_Black_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Black] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Black_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_Solid_Black_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Black_lite_V_CarrierRigKBT_01_Solid_Black_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Black] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Black_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_Solid_Black_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_CoyoteBrown_lite_V_CarrierRigKBT_01_heavy_Solid_CoyoteBrown_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST Solid CoyoteBrown] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_CoyoteBrown_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_Solid_CoyoteBrown_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_CoyoteBrown_lite_V_CarrierRigKBT_01_light_Solid_CoyoteBrown_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST Solid CoyoteBrown] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_CoyoteBrown_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_Solid_CoyoteBrown_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_CoyoteBrown_lite_V_CarrierRigKBT_01_Solid_CoyoteBrown_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST Solid CoyoteBrown] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_CoyoteBrown_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_Solid_CoyoteBrown_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Ranger_Green_lite_V_CarrierRigKBT_01_heavy_Solid_Ranger_Green_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Ranger Green] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Ranger_Green_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_Solid_Ranger_Green_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Ranger_Green_lite_V_CarrierRigKBT_01_light_Solid_Ranger_Green_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Ranger Green] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Ranger_Green_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_Solid_Ranger_Green_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Ranger_Green_lite_V_CarrierRigKBT_01_Solid_Ranger_Green_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Ranger Green] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Ranger_Green_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_Solid_Ranger_Green_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_CarrierRigKBT_01_heavy_US_Tigerstripe_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST Tigerstripe] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_Tigerstripe_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_US_Tigerstripe_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_CarrierRigKBT_01_light_US_Tigerstripe_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST Tigerstripe] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_Tigerstripe_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_US_Tigerstripe_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_Tigerstripe_lite_V_CarrierRigKBT_01_US_Tigerstripe_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST Tigerstripe] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_Tigerstripe_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_US_Tigerstripe_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Olive_lite_V_CarrierRigKBT_01_heavy_Solid_Olive_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Olive] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Olive_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_Solid_Olive_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Olive_lite_V_CarrierRigKBT_01_light_Solid_Olive_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Olive] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Olive_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_Solid_Olive_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Olive_lite_V_CarrierRigKBT_01_Solid_Olive_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Olive] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Olive_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_Solid_Olive_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Tan_lite_V_CarrierRigKBT_01_heavy_Solid_Tan_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Tan] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Tan_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_Solid_Tan_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Tan_lite_V_CarrierRigKBT_01_light_Solid_Tan_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Tan] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Tan_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_Solid_Tan_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_Tan_lite_V_CarrierRigKBT_01_Solid_Tan_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST Solid Tan] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_Tan_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_Solid_Tan_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_White_lite_V_CarrierRigKBT_01_heavy_Solid_White_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST Solid White] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_White_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_Solid_White_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_White_lite_V_CarrierRigKBT_01_light_Solid_White_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST Solid White] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_White_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_Solid_White_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_Solid_White_lite_V_CarrierRigKBT_01_Solid_White_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST Solid White] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_Solid_White_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_Solid_White_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_DCU_lite_V_CarrierRigKBT_01_heavy_US_DCU_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST DCU] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_DCU_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_US_DCU_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_DCU_lite_V_CarrierRigKBT_01_light_US_DCU_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST DCU] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_DCU_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_US_DCU_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_DCU_lite_V_CarrierRigKBT_01_US_DCU_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST DCU] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_DCU_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_US_DCU_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_M81_lite_V_CarrierRigKBT_01_heavy_US_M81_F: V_CarrierRigKBT_01_heavy_Olive_F {
        author="Seb";
        displayName="[GHOST M81] Modular Carrier GL Rig";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_M81_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_heavy_US_M81_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_M81_lite_V_CarrierRigKBT_01_light_US_M81_F: V_CarrierRigKBT_01_light_Olive_F {
        author="Seb";
        displayName="[GHOST M81] Modular Carrier Lite";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_M81_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_light_US_M81_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class ghostb_US_M81_lite_V_CarrierRigKBT_01_US_M81_F: V_CarrierRigKBT_01_Olive_F {
        author="Seb";
        displayName="[GHOST M81] Modular Carrier Vest";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\CarrierRigKBT_01_US_M81_CO.paa)
        };
        picture=QPATHTOF(data\UI\icon_V_CarrierRigKBT_01_US_M81_F_ca.paa);
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;
    };
    class GVAR(PlateCarrier2_brnyonv ): V_PlateCarrier2_rgr {
        author = QAUTHOR;
        displayName = "[GHOST] Carrier Rig YonV(Brown)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vest_brown_yonv.paa)
        };
        scope=2;
        scopeArsenal=2;
        scopeCurator=2;        
    };
};
