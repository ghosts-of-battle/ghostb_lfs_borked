class CfgPatches
{
	class ghostb_Multicam_Woodland_lite
	{
		name="Multicam_Woodland_lite";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"ghostb_main"
		};
		author="Seb";
		version="2.4.1.0";
		versionStr="2.4.1.0";
		versionAr[]={2,4,1,0};
	};
};
class Extended_PreStart_EventHandlers
{
	class ghostb_Multicam_Woodland_lite
	{
		init="call compile preprocessFileLineNumbers '\z\ghostb\addons\Multicam_Woodland_lite\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ghostb_Multicam_Woodland_lite
	{
		init="call compile preprocessFileLineNumbers '\z\ghostb\addons\Multicam_Woodland_lite\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ghostb_Multicam_Woodland_lite
	{
		init="call compile preprocessFileLineNumbers '\z\ghostb\addons\Multicam_Woodland_lite\XEH_postInit.sqf'";
	};
};
class CfgWeapons
{
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
	class V_Rangemaster_belt: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class V_PlateCarrier1_rgr;
	class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr
	{
		class ItemInfo;
	};
	class ghostb_main_V_CF_CarrierRig_base_F;
	class ghostb_main_V_CF_CarrierRig_Lite_base_F;
	class ghostb_main_V_CF_CarrierRig_MG_base_F;
	class V_HarnessOGL_ghex_F;
	class V_HarnessO_ghex_F;
	class V_TacVestIR_blk: Vest_NoCamo_Base
	{
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
	class U_I_CombatUniform: Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_CombatUniform_shortsleeve: Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_E_Uniform_01_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_E_Uniform_01_shortsleeve_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_I_OfficerUniform: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_CombatUniform_mcam: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_CombatUniform_mcam_vest: Uniform_Base
	{
		class ItemInfo;
	};
	class U_O_CombatUniform_ocamo: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_CTRG_Soldier_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_B_CTRG_Soldier_3_F: Uniform_Base
	{
		class ItemInfo;
	};
	class U_O_officer_noInsignia_hex_F: Uniform_Base
	{
		class ItemInfo;
	};
	class ghostb_main_U_Aegis_O_Soldier_03_base: U_O_officer_noInsignia_hex_F
	{
		class ItemInfo;
	};
	class ghostb_main_U_Aegis_O_Soldier_04_base: U_O_officer_noInsignia_hex_F
	{
		class ItemInfo;
	};
	class ghostb_Multicam_Woodland_lite_LBT_G3_Multicam_Woodland: ghostb_main_LBT_G3_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] LBT G3";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\6094G3_PC_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\6094G3_Cumberbund_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\6094G3_KangarooPanel_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BeltGBRS_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BluforMed_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Belt556_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_glockMags_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_SFL_Holster_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_LBTG3_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_LBT_G3_NB_Multicam_Woodland: ghostb_main_LBT_G3_NB_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] LBT G3 NB";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\6094G3_PC_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\6094G3_Cumberbund_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\6094G3_KangarooPanel_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BeltGBRS_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BluforMed_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Belt556_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_glockMags_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_SFL_Holster_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_LBTG3_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_Crye_AVS_1_Multicam_Woodland: ghostb_main_Crye_AVS_1_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Crye AVS Assaulter 1";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Vest_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_AVSPouch_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Belt556_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BluforMed_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Cumberbands_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BeltGBRS_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_GPpouch_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Radio_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_glockMags_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_pouch556_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_SFL_Holster_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Sideplate_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_S20_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_AVS_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_Crye_AVS_1_1_Multicam_Woodland: ghostb_main_Crye_AVS_1_1_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Crye AVS Assaulter 2";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Vest_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Belt556_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BluforMed_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Cumberbands_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BeltGBRS_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_GPpouch_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Radio_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Kangaroo_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_glockMags_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_pouch556_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_SFL_Holster_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Sideplate_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_S20_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_AVS_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_Crye_AVS_1_2_Multicam_Woodland: ghostb_main_Crye_AVS_1_2_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Crye AVS Assaulter 3";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Vest_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Mk4_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Belt556_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BluforMed_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Cumberbands_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BeltGBRS_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_GPpouch_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Radio_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_glockMags_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_pouch556_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_SFL_Holster_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Sideplate_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_S20_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_AVS_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_Crye_AVS_1_3_Multicam_Woodland: ghostb_main_Crye_AVS_1_3_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Crye AVS Assaulter 4";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Vest_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_AVSPouchT_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Belt556_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BluforMed_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Cumberbands_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BeltGBRS_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_GPpouch_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Radio_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_glockMags_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_pouch556_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_SFL_Holster_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Sideplate_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_S20_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_AVS_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_Crye_AVS_2_Multicam_Woodland: ghostb_main_Crye_AVS_2_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Crye AVS Gunner";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Vest_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_AVSPouch_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BluforMed_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Cumberbands_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_BeltGBRS_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Radio_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_LMGpouches_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_glockMags_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_SFL_Holster_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_Sideplate_Multicam_Woodland.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\AVS_S20_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_AVS_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_PlateCarrierSpec_Multicam_Woodland: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\carrier_gl_rig_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_carrier_spec_rig_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_PlateCarrierGL_Multicam_Woodland: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\carrier_gl_rig_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_carrier_gl_rig_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_PlateCarrier1_Multicam_Woodland: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\vests_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_plate_carrier_1_Multicam_Woodland_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_PlateCarrier2_Multicam_Woodland: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\vests_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_plate_carrier_2_Multicam_Woodland_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_BandollierB_Multicam_Woodland: V_BandollierB_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\vests_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_bandollierB_Multicam_Woodland_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_Rangemaster_belt_Multicam_Woodland: V_Rangemaster_belt
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\vests_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_Rangemaster_belt_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class ghostb_Multicam_Woodland_lite_V_PlateCarrier_Kerry_Multicam_Woodland: V_PlateCarrier_Kerry
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Carrier Lite (No belt)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\vests_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_plate_carrier_1_Multicam_Woodland_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class ghostb_Multicam_Woodland_lite_V_CF_CarrierRig_Multicam_Woodland: ghostb_main_V_CF_CarrierRig_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Defender Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\V_CF_CarrierRig_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_CF_CarrierRig_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_CF_CarrierRig_lite_Multicam_Woodland: ghostb_main_V_CF_CarrierRig_Lite_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Defender Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\V_CF_CarrierRig_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\V_CF_CarrierRig_Pouches_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_CF_CarrierRig_lite_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_CF_CarrierRig_MG_Multicam_Woodland: ghostb_main_V_CF_CarrierRig_MG_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Defender Rig MG";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\V_CF_CarrierRig_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\V_CF_CarrierRig_Pouches_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_CF_CarrierRig_MG_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_HarnessOGL_Multicam_Woodland_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\tech_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_HarnessOGL_Multicam_Woodland_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_HarnessO_Multicam_Woodland_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\tech_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_HarnessO_Multicam_Woodland_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_TacVestIR_Multicam_Woodland: V_TacVestIR_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\tech_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_TacVestIR_Multicam_Woodland_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class ghostb_Multicam_Woodland_lite_V_CarrierRigKBT_01_heavy_Multicam_Woodland_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigKBT_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_CarrierRigKBT_01_heavy_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_CarrierRigKBT_01_light_Multicam_Woodland_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigKBT_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_CarrierRigKBT_01_light_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_CarrierRigKBT_01_Multicam_Woodland_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigKBT_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_CarrierRigKBT_01_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_CarrierRigBW_Multicam_Woodland: ghostb_main_V_CarrierRigBW_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Odin Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigBW_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_CarrierRigBW_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_CarrierRigBW_CQB_Multicam_Woodland: ghostb_main_V_CarrierRigBW_CQB_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Odin Rig CQB";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigBW_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigBW_Pouches_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigBW_GL_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_CarrierRigBW_CQB_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_CarrierRigBW_GL_Multicam_Woodland: ghostb_main_V_CarrierRigBW_GL_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Odin Rig GL";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigBW_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigBW_Pouches_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigBW_GL_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_CarrierRigBW_GL_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_V_CarrierRigBW_Lite_Multicam_Woodland: ghostb_main_V_CarrierRigBW_Lite_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Odin Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigBW_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\CarrierRigBW_Pouches_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_V_CarrierRigBW_Lite_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetHBK_F_Multicam_Woodland: H_HelmetHBK_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetHBK_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetHBK_F_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetHBK_headset_F_Multicam_Woodland: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetHBK_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetHBK_headset_F_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetHBK_ear_F_Multicam_Woodland: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetHBK_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetHBK_ear_F_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetHBK_chops_F_Multicam_Woodland: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetHBK_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetHBK_chops_F_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_Booniehat_Multicam_Woodland: H_Booniehat_khk
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\booniehat_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_booniehat_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_Booniehat_Multicam_Woodland_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\booniehat_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_Booniehat_Multicam_Woodland_hs_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_Cap_Multicam_Woodland: H_Cap_oli
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\capb_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_Cap_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_Cap_Multicam_Woodland_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\capb_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_Cap_Multicam_Woodland_hs_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetB_Multicam_Woodland: H_HelmetB
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\equip1_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetB_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetSpecB_Multicam_Woodland: H_HelmetSpecB
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\equip1_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetSpecB_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetB_light_Multicam_Woodland: ghostb_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\equip1_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetB_light_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetB_light_basic_Multicam_Woodland: ghostb_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\equip1_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetB_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetB_camo_Multicam_Woodland: H_HelmetB_camo
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\equip1_Multicam_Woodland_co.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\ghillie_2_Multicam_Woodland_ca.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetB_camo_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetLeaderO_Multicam_Woodland: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\tech_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetLeaderO_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetO_Multicam_Woodland: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\tech_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetO_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetSpecO_Multicam_Woodland: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\tech_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetO_spec_Multicam_Woodland_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetEAST_Multicam_Woodland_F: ghostb_main_H_HelmetEAST_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Luchnik Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetEAST_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetEAST_Multicam_Woodland_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetEAST_Cover_Multicam_Woodland_F: ghostb_main_H_HelmetEAST_Cover_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Luchnik Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetEAST_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetEAST_Cover_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetSpecter_01_cover_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetEAST_Cover_Multicam_Woodland_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetEAST_Headset_Multicam_Woodland_F: ghostb_main_H_HelmetEAST_Headset_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Luchnik Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetEAST_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetSpecter_01_cover_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetEAST_Headset_Multicam_Woodland_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetIA_Multicam_Woodland: H_HelmetIA
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\headgear_helmet_canvas_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_I_Helmet_canvas_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetSpecter_Multicam_Woodland_F: ghostb_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetSpecter_01_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetSpecter_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetSpecter_headset_Multicam_Woodland_F: ghostb_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetSpecter_01_Multicam_Woodland_co.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetSpecter_01_cover_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetSpecter_paint_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_H_HelmetSpecter_cover_Multicam_Woodland_F: ghostb_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetSpecter_01_Multicam_Woodland_co.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\H_HelmetSpecter_01_cover_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_H_HelmetSpecter_cover_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_U_I_CombatUniform_Multicam_Woodland: U_I_CombatUniform
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_I_Soldier_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_I_I_CombatUniform_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_I_CombatUniform_Multicam_Woodland";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_I_CombatUniform_shortsleeve_Multicam_Woodland: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_I_Soldier_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_I_I_CombatUniform_shortsleeve_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_I_CombatUniform_shortsleeve_Multicam_Woodland";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_I_E_Uniform_Multicam_Woodland_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\Officer_noInsignia_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_I_Soldier_01_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_E_Soldier_01_gloves_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_I_E_Uniform_01_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_I_E_Uniform_Multicam_Woodland_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_I_E_Uniform_shortsleeve_Multicam_Woodland_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\Officer_noInsignia_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_I_Soldier_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_I_E_Uniform_shortsleeve_Multicam_Woodland_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_I_E_Uniform_OfficerUniformNoInsignia_Multicam_Woodland_F: U_I_OfficerUniform
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Light Combat Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\Officer_noInsignia_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_I_Soldier_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_Multicam_Woodland_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_B_CombatUniform_Multicam_Woodland: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Combat Fatigues [NATO]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing1_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\Icon_U_B_CTRG_uniform_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_B_CombatUniform_Multicam_Woodland";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_B_CombatUniform_vest_Multicam_Woodland: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Combat Fatigues [NATO] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing1_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\Icon_U_B_CTRG_vest_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_B_CombatUniform_vest_Multicam_Woodland";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_O_CombatUniform_Multicam_Woodland: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\tech_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_O_R_CombatUniform_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_O_CombatUniform_Multicam_Woodland";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_B_CTRG_Soldier_Multicam_Woodland_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\U_B_CTRG_Soldier_Multicam_Woodland_F_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\Icon_U_B_CTRG_uniform_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_B_CTRG_Soldier_Multicam_Woodland_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_B_CTRG_Soldier_3_Multicam_Woodland_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\U_B_CTRG_Soldier_Multicam_Woodland_F_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\Icon_U_B_CTRG_vest_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_B_CTRG_Soldier_3_Multicam_Woodland_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_O_officer_noInsignia_Multicam_Woodland_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\Officer_noInsignia_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_O_R_officer_noInsignia_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_O_officer_noInsignia_Multicam_Woodland_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_Aegis_O_Soldier_03_Multicam_Woodland: ghostb_main_U_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Luchnik Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing2_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\TacGloves_Multicam_Woodland_co.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_Aegis_O_Soldier_03_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_Aegis_O_Soldier_03_Multicam_Woodland";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_Woodland_lite_U_Aegis_O_Soldier_04_Multicam_Woodland: ghostb_main_U_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Luchnik Fatigues (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing2_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\TacGloves_Multicam_Woodland_co.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_Aegis_O_Soldier_04_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_Woodland_lite_Soldier_U_Aegis_O_Soldier_04_Multicam_Woodland";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
};
class CfgVehicles
{
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
	class ghostb_Multicam_Woodland_lite_Soldier_U_I_CombatUniform_Multicam_Woodland: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] Combat Fatigues [AAF]";
		uniformClass="ghostb_Multicam_Woodland_lite_U_I_CombatUniform_Multicam_Woodland";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_I_Soldier_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_I_I_CombatUniform_Multicam_Woodland_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_I_CombatUniform_shortsleeve_Multicam_Woodland: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="ghostb_Multicam_Woodland_lite_U_I_CombatUniform_shortsleeve_Multicam_Woodland";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_I_Soldier_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_I_I_CombatUniform_shortsleeve_Multicam_Woodland_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_I_E_Uniform_Multicam_Woodland_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] Combat Fatigues [LDF]";
		uniformClass="ghostb_Multicam_Woodland_lite_U_I_E_Uniform_Multicam_Woodland_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\Officer_noInsignia_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_I_Soldier_01_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_E_Soldier_01_gloves_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_I_E_Uniform_01_Multicam_Woodland_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_I_E_Uniform_shortsleeve_Multicam_Woodland_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="ghostb_Multicam_Woodland_lite_U_I_E_Uniform_shortsleeve_Multicam_Woodland_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\Officer_noInsignia_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_I_Soldier_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Multicam_Woodland_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_Multicam_Woodland_F: I_Officer_F
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] Light Combat Fatigues";
		uniformClass="ghostb_Multicam_Woodland_lite_U_I_E_Uniform_OfficerUniformNoInsignia_Multicam_Woodland_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\Officer_noInsignia_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\I_I_Soldier_01_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Multicam_Woodland_F_ca.paa";
		scope=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsMaterials[]=
		{
			"\z\ghostb\addons\main\uniforms\data\officer_noinsignia.rvmat",
			"a3\characters_f_beta\INDEP\Data\ia_soldier_01_clothing.rvmat"
		};
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_B_CombatUniform_Multicam_Woodland: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] Combat Fatigues [NATO]";
		uniformClass="ghostb_Multicam_Woodland_lite_U_B_CombatUniform_Multicam_Woodland";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing1_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\Icon_U_B_CTRG_uniform_Multicam_Woodland_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_B_CombatUniform_vest_Multicam_Woodland: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] Combat Fatigues [NATO] (Rolled-up)";
		uniformClass="ghostb_Multicam_Woodland_lite_U_B_CombatUniform_vest_Multicam_Woodland";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing1_Multicam_Woodland.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\Icon_U_B_CTRG_vest_Multicam_Woodland_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_O_CombatUniform_Multicam_Woodland: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] Fatigues [CSAT]";
		uniformClass="ghostb_Multicam_Woodland_lite_U_O_CombatUniform_Multicam_Woodland";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\tech_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_O_R_CombatUniform_Multicam_Woodland_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_B_CTRG_Soldier_Multicam_Woodland_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] CTRG Stealth Uniform";
		uniformClass="ghostb_Multicam_Woodland_lite_U_B_CTRG_Soldier_Multicam_Woodland_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\U_B_CTRG_Soldier_Multicam_Woodland_F_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\Icon_U_B_CTRG_uniform_Multicam_Woodland_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_B_CTRG_Soldier_3_Multicam_Woodland_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="ghostb_Multicam_Woodland_lite_U_B_CTRG_Soldier_3_Multicam_Woodland_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\U_B_CTRG_Soldier_Multicam_Woodland_F_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\Icon_U_B_CTRG_vest_Multicam_Woodland_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_O_officer_noInsignia_Multicam_Woodland_F: ghostb_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] Light Fatigues";
		uniformClass="ghostb_Multicam_Woodland_lite_U_O_officer_noInsignia_Multicam_Woodland_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\Officer_noInsignia_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_O_R_officer_noInsignia_Multicam_Woodland_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_Aegis_O_Soldier_03_Multicam_Woodland: ghostb_main_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] Luchnik Fatigues";
		uniformClass="ghostb_Multicam_Woodland_lite_U_Aegis_O_Soldier_03_Multicam_Woodland";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing2_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\TacGloves_Multicam_Woodland_co.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_Aegis_O_Soldier_03_Multicam_Woodland.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_Soldier_U_Aegis_O_Soldier_04_Multicam_Woodland: ghostb_main_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="Unit [Multicam Woodland] Luchnik Fatigues (Rolled-up)";
		uniformClass="ghostb_Multicam_Woodland_lite_U_Aegis_O_Soldier_04_Multicam_Woodland";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing2_Multicam_Woodland_CO.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\TacGloves_Multicam_Woodland_co.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\clothing_Multicam_Woodland_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_U_Aegis_O_Soldier_04_Multicam_Woodland.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_Woodland_lite_B_AssaultPack_Multicam_Woodland: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\backpack_compact_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_B_AssaultPack_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_B_AssaultPackEnhanced_Multicam_Woodland: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\backpack_compact_Multicam_Woodland_co.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\vests_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_B_AssaultPack_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class ghostb_Multicam_Woodland_lite_B_Carryall_Multicam_Woodland: B_Carryall_cbr
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\backpack_tortila_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_B_C_Tortila_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_B_Kitbag_rgr_Multicam_Woodland: B_Kitbag_rgr
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\backpack_fast_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_B_C_Kitbag_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_B_TacticalPack_Multicam_Woodland: B_TacticalPack_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\backpack_small_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_B_C_Small_Multicam_Woodland.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
};
class CfgGlasses
{
	class G_Balaclava_blk;
	class G_Balaclava_combat;
	class G_Balaclava_lowprofile;
	class G_Combat;
	class G_Balaclava_TI_G_blk_F;
	class G_Balaclava_TI_blk_F;
	class ghostb_Multicam_Woodland_lite_G_Balaclava_Multicam_Woodland: G_Balaclava_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\headgear_balaclava_Multicam_Woodland_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_G_Balaclava_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_G_Balaclava_combat_Multicam_Woodland: G_Balaclava_combat
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\headgear_balaclava_Multicam_Woodland_co.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\g_combat_Multicam_Woodland_ca.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_G_Balaclava_combat_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_G_Balaclava_lowprofile_Multicam_Woodland: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\headgear_balaclava_Multicam_Woodland_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_G_Balaclava_lowprofile_Multicam_Woodland_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_Woodland_lite_G_Combat_Multicam_Woodland: G_Combat
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\g_combat_Multicam_Woodland_ca.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_g_combat_Multicam_Woodland_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class ghostb_Multicam_Woodland_lite_G_Balaclava_TI_G_Multicam_Woodland_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\G_Balaclava_TI_Multicam_Woodland_F_co.paa",
			"\z\ghostb\addons\Multicam_Woodland_lite\data\g_combat_Multicam_Woodland_ca.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_G_Balaclava_TI_G_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class ghostb_Multicam_Woodland_lite_G_Balaclava_TI_Multicam_Woodland_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam Woodland] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_Woodland_lite\data\G_Balaclava_TI_Multicam_Woodland_F_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_Woodland_lite\data\UI\icon_G_Balaclava_TI_Multicam_Woodland_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
