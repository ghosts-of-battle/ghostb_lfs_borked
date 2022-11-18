class CfgPatches
{
	class ghostb_Solid_Ranger_Green_lite
	{
		name="Solid_Ranger_Green_lite";
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
	class ghostb_Solid_Ranger_Green_lite
	{
		init="call compile preprocessFileLineNumbers '\z\ghostb\addons\Solid_Ranger_Green_lite\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ghostb_Solid_Ranger_Green_lite
	{
		init="call compile preprocessFileLineNumbers '\z\ghostb\addons\Solid_Ranger_Green_lite\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ghostb_Solid_Ranger_Green_lite
	{
		init="call compile preprocessFileLineNumbers '\z\ghostb\addons\Solid_Ranger_Green_lite\XEH_postInit.sqf'";
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
	class ghostb_Solid_Ranger_Green_lite_LBT_G3_Solid_Ranger_Green: ghostb_main_LBT_G3_base
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] LBT G3";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\6094G3_PC_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\6094G3_Cumberbund_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\6094G3_KangarooPanel_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BeltGBRS_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BluforMed_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Belt556_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_glockMags_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_SFL_Holster_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_LBTG3_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_LBT_G3_NB_Solid_Ranger_Green: ghostb_main_LBT_G3_NB_base
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] LBT G3 NB";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\6094G3_PC_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\6094G3_Cumberbund_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\6094G3_KangarooPanel_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BeltGBRS_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BluforMed_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Belt556_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_glockMags_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_SFL_Holster_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_LBTG3_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_Crye_AVS_1_Solid_Ranger_Green: ghostb_main_Crye_AVS_1_base
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Crye AVS Assaulter 1";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Vest_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_AVSPouch_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Belt556_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BluforMed_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Cumberbands_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BeltGBRS_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_GPpouch_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Radio_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_glockMags_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_pouch556_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_SFL_Holster_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Sideplate_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_S20_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_AVS_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_Crye_AVS_1_1_Solid_Ranger_Green: ghostb_main_Crye_AVS_1_1_base
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Crye AVS Assaulter 2";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Vest_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Belt556_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BluforMed_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Cumberbands_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BeltGBRS_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_GPpouch_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Radio_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Kangaroo_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_glockMags_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_pouch556_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_SFL_Holster_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Sideplate_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_S20_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_AVS_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_Crye_AVS_1_2_Solid_Ranger_Green: ghostb_main_Crye_AVS_1_2_base
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Crye AVS Assaulter 3";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Vest_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Mk4_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Belt556_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BluforMed_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Cumberbands_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BeltGBRS_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_GPpouch_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Radio_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_glockMags_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_pouch556_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_SFL_Holster_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Sideplate_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_S20_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_AVS_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_Crye_AVS_1_3_Solid_Ranger_Green: ghostb_main_Crye_AVS_1_3_base
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Crye AVS Assaulter 4";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Vest_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_AVSPouchT_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Belt556_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BluforMed_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Cumberbands_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BeltGBRS_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_GPpouch_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Radio_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_glockMags_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_pouch556_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_SFL_Holster_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Sideplate_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_S20_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_AVS_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_Crye_AVS_2_Solid_Ranger_Green: ghostb_main_Crye_AVS_2_base
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Crye AVS Gunner";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Vest_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_AVSPouch_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BluforMed_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Cumberbands_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_BeltGBRS_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Radio_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_LMGpouches_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_glockMags_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_SFL_Holster_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_Sideplate_Solid_Ranger_Green.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\AVS_S20_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_AVS_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_PlateCarrierSpec_Solid_Ranger_Green: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\carrier_gl_rig_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_carrier_spec_rig_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_PlateCarrierGL_Solid_Ranger_Green: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\carrier_gl_rig_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_carrier_gl_rig_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_PlateCarrier1_Solid_Ranger_Green: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\vests_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_plate_carrier_1_Solid_Ranger_Green_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_PlateCarrier2_Solid_Ranger_Green: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\vests_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_plate_carrier_2_Solid_Ranger_Green_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_BandollierB_Solid_Ranger_Green: V_BandollierB_blk
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\vests_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_bandollierB_Solid_Ranger_Green_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_Rangemaster_belt_Solid_Ranger_Green: V_Rangemaster_belt
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\vests_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_Rangemaster_belt_Solid_Ranger_Green_ca.paa";
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
	class ghostb_Solid_Ranger_Green_lite_V_PlateCarrier_Kerry_Solid_Ranger_Green: V_PlateCarrier_Kerry
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Carrier Lite (No belt)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\vests_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_plate_carrier_1_Solid_Ranger_Green_CA.paa";
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
	class ghostb_Solid_Ranger_Green_lite_V_CF_CarrierRig_Solid_Ranger_Green: ghostb_main_V_CF_CarrierRig_base_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Defender Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\V_CF_CarrierRig_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_CF_CarrierRig_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_CF_CarrierRig_lite_Solid_Ranger_Green: ghostb_main_V_CF_CarrierRig_Lite_base_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Defender Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\V_CF_CarrierRig_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\V_CF_CarrierRig_Pouches_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_CF_CarrierRig_lite_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_CF_CarrierRig_MG_Solid_Ranger_Green: ghostb_main_V_CF_CarrierRig_MG_base_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Defender Rig MG";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\V_CF_CarrierRig_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\V_CF_CarrierRig_Pouches_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_CF_CarrierRig_MG_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_HarnessOGL_Solid_Ranger_Green_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\tech_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_HarnessOGL_Solid_Ranger_Green_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_HarnessO_Solid_Ranger_Green_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\tech_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_HarnessO_Solid_Ranger_Green_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_TacVestIR_Solid_Ranger_Green: V_TacVestIR_blk
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\tech_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_TacVestIR_Solid_Ranger_Green_CA.paa";
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
	class ghostb_Solid_Ranger_Green_lite_V_CarrierRigKBT_01_heavy_Solid_Ranger_Green_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigKBT_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_CarrierRigKBT_01_heavy_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_CarrierRigKBT_01_light_Solid_Ranger_Green_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigKBT_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_CarrierRigKBT_01_light_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_CarrierRigKBT_01_Solid_Ranger_Green_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigKBT_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_CarrierRigKBT_01_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_CarrierRigBW_Solid_Ranger_Green: ghostb_main_V_CarrierRigBW_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Odin Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigBW_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_CarrierRigBW_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_CarrierRigBW_CQB_Solid_Ranger_Green: ghostb_main_V_CarrierRigBW_CQB_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Odin Rig CQB";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigBW_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigBW_Pouches_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigBW_GL_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_CarrierRigBW_CQB_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_CarrierRigBW_GL_Solid_Ranger_Green: ghostb_main_V_CarrierRigBW_GL_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Odin Rig GL";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigBW_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigBW_Pouches_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigBW_GL_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_CarrierRigBW_GL_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_V_CarrierRigBW_Lite_Solid_Ranger_Green: ghostb_main_V_CarrierRigBW_Lite_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Odin Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigBW_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\CarrierRigBW_Pouches_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_V_CarrierRigBW_Lite_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetHBK_F_Solid_Ranger_Green: H_HelmetHBK_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetHBK_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetHBK_F_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetHBK_headset_F_Solid_Ranger_Green: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetHBK_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetHBK_headset_F_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetHBK_ear_F_Solid_Ranger_Green: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetHBK_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetHBK_ear_F_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetHBK_chops_F_Solid_Ranger_Green: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetHBK_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetHBK_chops_F_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_Booniehat_Solid_Ranger_Green: H_Booniehat_khk
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\booniehat_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_booniehat_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_Booniehat_Solid_Ranger_Green_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\booniehat_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_Booniehat_Solid_Ranger_Green_hs_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_Cap_Solid_Ranger_Green: H_Cap_oli
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\capb_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_Cap_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_Cap_Solid_Ranger_Green_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\capb_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_Cap_Solid_Ranger_Green_hs_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetB_Solid_Ranger_Green: H_HelmetB
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\equip1_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetB_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetSpecB_Solid_Ranger_Green: H_HelmetSpecB
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\equip1_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetSpecB_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetB_light_Solid_Ranger_Green: ghostb_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\equip1_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetB_light_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetB_light_basic_Solid_Ranger_Green: ghostb_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\equip1_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetB_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetB_camo_Solid_Ranger_Green: H_HelmetB_camo
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\equip1_Solid_Ranger_Green_co.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\ghillie_2_Solid_Ranger_Green_ca.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetB_camo_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetLeaderO_Solid_Ranger_Green: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\tech_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetLeaderO_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetO_Solid_Ranger_Green: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\tech_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetO_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetSpecO_Solid_Ranger_Green: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\tech_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetO_spec_Solid_Ranger_Green_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetEAST_Solid_Ranger_Green_F: ghostb_main_H_HelmetEAST_base_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Luchnik Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetEAST_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetEAST_Solid_Ranger_Green_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetEAST_Cover_Solid_Ranger_Green_F: ghostb_main_H_HelmetEAST_Cover_base_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Luchnik Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetEAST_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetEAST_Cover_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetSpecter_01_cover_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetEAST_Cover_Solid_Ranger_Green_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetEAST_Headset_Solid_Ranger_Green_F: ghostb_main_H_HelmetEAST_Headset_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Luchnik Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetEAST_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetSpecter_01_cover_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetEAST_Headset_Solid_Ranger_Green_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetIA_Solid_Ranger_Green: H_HelmetIA
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\headgear_helmet_canvas_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_I_Helmet_canvas_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetSpecter_Solid_Ranger_Green_F: ghostb_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetSpecter_01_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetSpecter_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetSpecter_headset_Solid_Ranger_Green_F: ghostb_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetSpecter_01_Solid_Ranger_Green_co.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetSpecter_01_cover_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetSpecter_paint_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_H_HelmetSpecter_cover_Solid_Ranger_Green_F: ghostb_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetSpecter_01_Solid_Ranger_Green_co.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\H_HelmetSpecter_01_cover_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_H_HelmetSpecter_cover_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_U_I_CombatUniform_Solid_Ranger_Green: U_I_CombatUniform
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_I_Soldier_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_I_I_CombatUniform_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_I_CombatUniform_Solid_Ranger_Green";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_I_CombatUniform_shortsleeve_Solid_Ranger_Green: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_I_Soldier_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_I_I_CombatUniform_shortsleeve_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_I_CombatUniform_shortsleeve_Solid_Ranger_Green";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_I_E_Uniform_Solid_Ranger_Green_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\Officer_noInsignia_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_I_Soldier_01_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_E_Soldier_01_gloves_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_I_E_Uniform_01_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_I_E_Uniform_Solid_Ranger_Green_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_I_E_Uniform_shortsleeve_Solid_Ranger_Green_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\Officer_noInsignia_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_I_Soldier_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_I_E_Uniform_shortsleeve_Solid_Ranger_Green_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_I_E_Uniform_OfficerUniformNoInsignia_Solid_Ranger_Green_F: U_I_OfficerUniform
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Light Combat Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\Officer_noInsignia_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_I_Soldier_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_Solid_Ranger_Green_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_B_CombatUniform_Solid_Ranger_Green: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Combat Fatigues [NATO]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing1_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\Icon_U_B_CTRG_uniform_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_B_CombatUniform_Solid_Ranger_Green";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_B_CombatUniform_vest_Solid_Ranger_Green: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Combat Fatigues [NATO] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing1_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\Icon_U_B_CTRG_vest_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_B_CombatUniform_vest_Solid_Ranger_Green";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_O_CombatUniform_Solid_Ranger_Green: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\tech_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_O_R_CombatUniform_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_O_CombatUniform_Solid_Ranger_Green";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_B_CTRG_Soldier_Solid_Ranger_Green_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\U_B_CTRG_Soldier_Solid_Ranger_Green_F_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\Icon_U_B_CTRG_uniform_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_B_CTRG_Soldier_Solid_Ranger_Green_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_B_CTRG_Soldier_3_Solid_Ranger_Green_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\U_B_CTRG_Soldier_Solid_Ranger_Green_F_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\Icon_U_B_CTRG_vest_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_B_CTRG_Soldier_3_Solid_Ranger_Green_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_O_officer_noInsignia_Solid_Ranger_Green_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\Officer_noInsignia_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_O_R_officer_noInsignia_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_O_officer_noInsignia_Solid_Ranger_Green_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_Aegis_O_Soldier_03_Solid_Ranger_Green: ghostb_main_U_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Luchnik Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing2_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\TacGloves_Solid_Ranger_Green_co.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_Aegis_O_Soldier_03_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_Aegis_O_Soldier_03_Solid_Ranger_Green";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Solid_Ranger_Green_lite_U_Aegis_O_Soldier_04_Solid_Ranger_Green: ghostb_main_U_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Luchnik Fatigues (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing2_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\TacGloves_Solid_Ranger_Green_co.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_Aegis_O_Soldier_04_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Solid_Ranger_Green_lite_Soldier_U_Aegis_O_Soldier_04_Solid_Ranger_Green";
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
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_I_CombatUniform_Solid_Ranger_Green: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] Combat Fatigues [AAF]";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_I_CombatUniform_Solid_Ranger_Green";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_I_Soldier_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_I_I_CombatUniform_Solid_Ranger_Green_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_I_CombatUniform_shortsleeve_Solid_Ranger_Green: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_I_CombatUniform_shortsleeve_Solid_Ranger_Green";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_I_Soldier_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_I_I_CombatUniform_shortsleeve_Solid_Ranger_Green_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_I_E_Uniform_Solid_Ranger_Green_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] Combat Fatigues [LDF]";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_I_E_Uniform_Solid_Ranger_Green_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\Officer_noInsignia_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_I_Soldier_01_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_E_Soldier_01_gloves_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_I_E_Uniform_01_Solid_Ranger_Green_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_I_E_Uniform_shortsleeve_Solid_Ranger_Green_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_I_E_Uniform_shortsleeve_Solid_Ranger_Green_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\Officer_noInsignia_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_I_Soldier_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Solid_Ranger_Green_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_Solid_Ranger_Green_F: I_Officer_F
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] Light Combat Fatigues";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_I_E_Uniform_OfficerUniformNoInsignia_Solid_Ranger_Green_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\Officer_noInsignia_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\I_I_Soldier_01_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Solid_Ranger_Green_F_ca.paa";
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
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_B_CombatUniform_Solid_Ranger_Green: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] Combat Fatigues [NATO]";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_B_CombatUniform_Solid_Ranger_Green";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing1_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\Icon_U_B_CTRG_uniform_Solid_Ranger_Green_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_B_CombatUniform_vest_Solid_Ranger_Green: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] Combat Fatigues [NATO] (Rolled-up)";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_B_CombatUniform_vest_Solid_Ranger_Green";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing1_Solid_Ranger_Green.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\Icon_U_B_CTRG_vest_Solid_Ranger_Green_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_O_CombatUniform_Solid_Ranger_Green: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] Fatigues [CSAT]";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_O_CombatUniform_Solid_Ranger_Green";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\tech_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_O_R_CombatUniform_Solid_Ranger_Green_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_B_CTRG_Soldier_Solid_Ranger_Green_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] CTRG Stealth Uniform";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_B_CTRG_Soldier_Solid_Ranger_Green_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\U_B_CTRG_Soldier_Solid_Ranger_Green_F_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\Icon_U_B_CTRG_uniform_Solid_Ranger_Green_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_B_CTRG_Soldier_3_Solid_Ranger_Green_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_B_CTRG_Soldier_3_Solid_Ranger_Green_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\U_B_CTRG_Soldier_Solid_Ranger_Green_F_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\Icon_U_B_CTRG_vest_Solid_Ranger_Green_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_O_officer_noInsignia_Solid_Ranger_Green_F: ghostb_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] Light Fatigues";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_O_officer_noInsignia_Solid_Ranger_Green_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\Officer_noInsignia_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_O_R_officer_noInsignia_Solid_Ranger_Green_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_Aegis_O_Soldier_03_Solid_Ranger_Green: ghostb_main_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] Luchnik Fatigues";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_Aegis_O_Soldier_03_Solid_Ranger_Green";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing2_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\TacGloves_Solid_Ranger_Green_co.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_Aegis_O_Soldier_03_Solid_Ranger_Green.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_Soldier_U_Aegis_O_Soldier_04_Solid_Ranger_Green: ghostb_main_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="Unit [Solid Ranger Green] Luchnik Fatigues (Rolled-up)";
		uniformClass="ghostb_Solid_Ranger_Green_lite_U_Aegis_O_Soldier_04_Solid_Ranger_Green";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing2_Solid_Ranger_Green_CO.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\TacGloves_Solid_Ranger_Green_co.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\clothing_Solid_Ranger_Green_CO.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_U_Aegis_O_Soldier_04_Solid_Ranger_Green.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Solid_Ranger_Green_lite_B_AssaultPack_Solid_Ranger_Green: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\backpack_compact_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_B_AssaultPack_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_B_AssaultPackEnhanced_Solid_Ranger_Green: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\backpack_compact_Solid_Ranger_Green_co.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\vests_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_B_AssaultPack_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class ghostb_Solid_Ranger_Green_lite_B_Carryall_Solid_Ranger_Green: B_Carryall_cbr
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\backpack_tortila_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_B_C_Tortila_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_B_Kitbag_rgr_Solid_Ranger_Green: B_Kitbag_rgr
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\backpack_fast_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_B_C_Kitbag_Solid_Ranger_Green.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_B_TacticalPack_Solid_Ranger_Green: B_TacticalPack_blk
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\backpack_small_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_B_C_Small_Solid_Ranger_Green.paa";
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
	class ghostb_Solid_Ranger_Green_lite_G_Balaclava_Solid_Ranger_Green: G_Balaclava_blk
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\headgear_balaclava_Solid_Ranger_Green_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_G_Balaclava_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_G_Balaclava_combat_Solid_Ranger_Green: G_Balaclava_combat
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\headgear_balaclava_Solid_Ranger_Green_co.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\g_combat_Solid_Ranger_Green_ca.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_G_Balaclava_combat_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_G_Balaclava_lowprofile_Solid_Ranger_Green: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\headgear_balaclava_Solid_Ranger_Green_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_G_Balaclava_lowprofile_Solid_Ranger_Green_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Solid_Ranger_Green_lite_G_Combat_Solid_Ranger_Green: G_Combat
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\g_combat_Solid_Ranger_Green_ca.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_g_combat_Solid_Ranger_Green_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class ghostb_Solid_Ranger_Green_lite_G_Balaclava_TI_G_Solid_Ranger_Green_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\G_Balaclava_TI_Solid_Ranger_Green_F_co.paa",
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\g_combat_Solid_Ranger_Green_ca.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_G_Balaclava_TI_G_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class ghostb_Solid_Ranger_Green_lite_G_Balaclava_TI_Solid_Ranger_Green_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="(GHOST)[Solid Ranger Green] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Solid_Ranger_Green_lite\data\G_Balaclava_TI_Solid_Ranger_Green_F_co.paa"
		};
		picture="\z\ghostb\addons\Solid_Ranger_Green_lite\data\UI\icon_G_Balaclava_TI_Solid_Ranger_Green_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
