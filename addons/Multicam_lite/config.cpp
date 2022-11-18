class CfgPatches
{
	class ghostb_Multicam_lite
	{
		name="Multicam_lite";
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
	class ghostb_Multicam_lite
	{
		init="call compile preprocessFileLineNumbers '\z\ghostb\addons\Multicam_lite\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ghostb_Multicam_lite
	{
		init="call compile preprocessFileLineNumbers '\z\ghostb\addons\Multicam_lite\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ghostb_Multicam_lite
	{
		init="call compile preprocessFileLineNumbers '\z\ghostb\addons\Multicam_lite\XEH_postInit.sqf'";
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
	class ghostb_Multicam_lite_LBT_G3_Multicam: ghostb_main_LBT_G3_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam] LBT G3";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\6094G3_PC_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\6094G3_Cumberbund_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\6094G3_KangarooPanel_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BeltGBRS_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BluforMed_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Belt556_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_glockMags_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_SFL_Holster_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_LBTG3_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_LBT_G3_NB_Multicam: ghostb_main_LBT_G3_NB_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam] LBT G3 NB";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\6094G3_PC_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\6094G3_Cumberbund_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\6094G3_KangarooPanel_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BeltGBRS_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BluforMed_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Belt556_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_glockMags_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_SFL_Holster_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_LBTG3_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_Crye_AVS_1_Multicam: ghostb_main_Crye_AVS_1_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Crye AVS Assaulter 1";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\AVS_Vest_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_AVSPouch_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Belt556_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BluforMed_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Cumberbands_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BeltGBRS_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_GPpouch_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Radio_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_glockMags_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_pouch556_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_SFL_Holster_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Sideplate_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_S20_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_AVS_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_Crye_AVS_1_1_Multicam: ghostb_main_Crye_AVS_1_1_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Crye AVS Assaulter 2";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\AVS_Vest_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Belt556_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BluforMed_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Cumberbands_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BeltGBRS_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_GPpouch_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Radio_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Kangaroo_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_glockMags_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_pouch556_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_SFL_Holster_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Sideplate_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_S20_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_AVS_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_Crye_AVS_1_2_Multicam: ghostb_main_Crye_AVS_1_2_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Crye AVS Assaulter 3";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\AVS_Vest_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Mk4_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Belt556_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BluforMed_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Cumberbands_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BeltGBRS_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_GPpouch_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Radio_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_glockMags_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_pouch556_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_SFL_Holster_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Sideplate_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_S20_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_AVS_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_Crye_AVS_1_3_Multicam: ghostb_main_Crye_AVS_1_3_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Crye AVS Assaulter 4";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\AVS_Vest_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_AVSPouchT_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Belt556_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BluforMed_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Cumberbands_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BeltGBRS_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_GPpouch_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Radio_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_glockMags_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_pouch556_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_SFL_Holster_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Sideplate_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_S20_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_AVS_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_Crye_AVS_2_Multicam: ghostb_main_Crye_AVS_2_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Crye AVS Gunner";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\AVS_Vest_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_AVSPouch_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BluforMed_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Cumberbands_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_BeltGBRS_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Radio_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_LMGpouches_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_glockMags_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_SFL_Holster_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_Sideplate_Multicam.paa",
			"\z\ghostb\addons\Multicam_lite\data\AVS_S20_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_AVS_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_PlateCarrierSpec_Multicam: V_PlateCarrierSpec_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Carrier Special Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\carrier_gl_rig_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_carrier_spec_rig_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_PlateCarrierGL_Multicam: V_PlateCarrierGL_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\carrier_gl_rig_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_carrier_gl_rig_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_PlateCarrier1_Multicam: V_PlateCarrier1_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\vests_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_plate_carrier_1_Multicam_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_PlateCarrier2_Multicam: V_PlateCarrier2_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Carrier Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\vests_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_plate_carrier_2_Multicam_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_BandollierB_Multicam: V_BandollierB_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Slash Bandolier";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\vests_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_bandollierB_Multicam_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_Rangemaster_belt_Multicam: V_Rangemaster_belt
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Rangemaster Belt";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\vests_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_Rangemaster_belt_Multicam_ca.paa";
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
	class ghostb_Multicam_lite_V_PlateCarrier_Kerry_Multicam: V_PlateCarrier_Kerry
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Carrier Lite (No belt)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\vests_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_plate_carrier_1_Multicam_CA.paa";
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
	class ghostb_Multicam_lite_V_CF_CarrierRig_Multicam: ghostb_main_V_CF_CarrierRig_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Defender Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\V_CF_CarrierRig_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_CF_CarrierRig_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_CF_CarrierRig_lite_Multicam: ghostb_main_V_CF_CarrierRig_Lite_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Defender Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\V_CF_CarrierRig_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\V_CF_CarrierRig_Pouches_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_CF_CarrierRig_lite_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_CF_CarrierRig_MG_Multicam: ghostb_main_V_CF_CarrierRig_MG_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Defender Rig MG";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\V_CF_CarrierRig_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\V_CF_CarrierRig_Pouches_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_CF_CarrierRig_MG_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_HarnessOGL_Multicam_F: V_HarnessOGL_ghex_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] LBV Grenadier Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\tech_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_HarnessOGL_Multicam_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_HarnessO_Multicam_F: V_HarnessO_ghex_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] LBV Harness";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\tech_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_HarnessO_Multicam_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_TacVestIR_Multicam: V_TacVestIR_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Raven Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\tech_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_TacVestIR_Multicam_CA.paa";
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
	class ghostb_Multicam_lite_V_CarrierRigKBT_01_heavy_Multicam_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Modular Carrier GL Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigKBT_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_CarrierRigKBT_01_heavy_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_CarrierRigKBT_01_light_Multicam_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Modular Carrier Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigKBT_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_CarrierRigKBT_01_light_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_CarrierRigKBT_01_Multicam_F: V_CarrierRigKBT_01_Olive_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Modular Carrier Vest";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigKBT_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_CarrierRigKBT_01_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_CarrierRigBW_Multicam: ghostb_main_V_CarrierRigBW_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Odin Rig";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigBW_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_CarrierRigBW_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_CarrierRigBW_CQB_Multicam: ghostb_main_V_CarrierRigBW_CQB_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Odin Rig CQB";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigBW_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigBW_Pouches_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigBW_GL_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_CarrierRigBW_CQB_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_CarrierRigBW_GL_Multicam: ghostb_main_V_CarrierRigBW_GL_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Odin Rig GL";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigBW_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigBW_Pouches_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigBW_GL_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_CarrierRigBW_GL_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_V_CarrierRigBW_Lite_Multicam: ghostb_main_V_CarrierRigBW_Lite_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Odin Rig Lite";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigBW_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\CarrierRigBW_Pouches_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_V_CarrierRigBW_Lite_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetHBK_F_Multicam: H_HelmetHBK_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Advanced Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetHBK_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetHBK_F_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetHBK_headset_F_Multicam: H_HelmetHBK_headset_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Advanced Modular Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetHBK_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetHBK_headset_F_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetHBK_ear_F_Multicam: H_HelmetHBK_ear_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Advanced Modular Helmet (Ear Protectors)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetHBK_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetHBK_ear_F_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetHBK_chops_F_Multicam: H_HelmetHBK_chops_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Advanced Modular Helmet (Chops)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetHBK_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetHBK_chops_F_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_Booniehat_Multicam: H_Booniehat_khk
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Booniehat ";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\booniehat_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_booniehat_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_Booniehat_Multicam_hs: H_Booniehat_khk_hs
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Booniehat (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\booniehat_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_Booniehat_Multicam_hs_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_Cap_Multicam: H_Cap_oli
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Cap";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\capb_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_Cap_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_Cap_Multicam_hs: H_Cap_oli_hs
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Cap (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\capb_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_Cap_Multicam_hs_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetB_Multicam: H_HelmetB
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\equip1_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetB_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetSpecB_Multicam: H_HelmetSpecB
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Enhanced Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\equip1_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetSpecB_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetB_light_Multicam: ghostb_main_H_HelmetB_light_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Light Combat Helmet (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\equip1_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetB_light_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetB_light_basic_Multicam: ghostb_main_H_HelmetB_light_basic_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Light Combat Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\equip1_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetB_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetB_camo_Multicam: H_HelmetB_camo
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Combat Helmet (Camo)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\equip1_Multicam_co.paa",
			"\z\ghostb\addons\Multicam_lite\data\ghillie_2_Multicam_ca.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetB_camo_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetLeaderO_Multicam: H_HelmetLeaderO_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Defender Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\tech_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetLeaderO_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetO_Multicam: H_HelmetO_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Protector Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\tech_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetO_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetSpecO_Multicam: H_HelmetSpecO_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Assassin Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\tech_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetO_spec_Multicam_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetEAST_Multicam_F: ghostb_main_H_HelmetEAST_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Luchnik Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetEAST_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetEAST_Multicam_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetEAST_Cover_Multicam_F: ghostb_main_H_HelmetEAST_Cover_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Luchnik Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetEAST_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetEAST_Cover_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetSpecter_01_cover_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetEAST_Cover_Multicam_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetEAST_Headset_Multicam_F: ghostb_main_H_HelmetEAST_Headset_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Luchnik Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetEAST_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetSpecter_01_cover_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetEAST_Headset_Multicam_F.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetIA_Multicam: H_HelmetIA
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Modular Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\headgear_helmet_canvas_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_I_Helmet_canvas_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetSpecter_Multicam_F: ghostb_main_H_HelmetSpecter_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Raven Helmet";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetSpecter_01_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetSpecter_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetSpecter_headset_Multicam_F: ghostb_main_H_HelmetSpecter_headset_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Raven Helmet (Headset)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetSpecter_01_Multicam_co.paa",
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetSpecter_01_cover_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetSpecter_paint_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_H_HelmetSpecter_cover_Multicam_F: ghostb_main_H_HelmetSpecter_cover_base_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Raven Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetSpecter_01_Multicam_co.paa",
			"\z\ghostb\addons\Multicam_lite\data\H_HelmetSpecter_01_cover_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_H_HelmetSpecter_cover_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_U_I_CombatUniform_Multicam: U_I_CombatUniform
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Combat Fatigues [AAF]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\I_I_Soldier_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_I_I_CombatUniform_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_I_CombatUniform_Multicam";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_I_CombatUniform_shortsleeve_Multicam: U_I_CombatUniform_shortsleeve
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Combat Fatigues [AAF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\I_I_Soldier_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_I_I_CombatUniform_shortsleeve_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_I_CombatUniform_shortsleeve_Multicam";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_I_E_Uniform_Multicam_01_F: U_I_E_Uniform_01_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Combat Fatigues [LDF]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\Officer_noInsignia_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\I_I_Soldier_01_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\I_E_Soldier_01_gloves_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_I_E_Uniform_01_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_I_E_Uniform_Multicam_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_I_E_Uniform_shortsleeve_Multicam_01_F: U_I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Combat Fatigues [LDF] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\Officer_noInsignia_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\I_I_Soldier_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_I_E_Uniform_shortsleeve_Multicam_01_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_I_E_Uniform_OfficerUniformNoInsignia_Multicam_F: U_I_OfficerUniform
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Light Combat Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\Officer_noInsignia_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\I_I_Soldier_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_Multicam_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_B_CombatUniform_Multicam: U_B_CombatUniform_mcam
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Combat Fatigues [NATO]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing1_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\Icon_U_B_CTRG_uniform_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_B_CombatUniform_Multicam";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_B_CombatUniform_vest_Multicam: U_B_CombatUniform_mcam_vest
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Combat Fatigues [NATO] (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing1_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\Icon_U_B_CTRG_vest_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_B_CombatUniform_vest_Multicam";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_O_CombatUniform_Multicam: U_O_CombatUniform_ocamo
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Fatigues [CSAT]";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\tech_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_O_R_CombatUniform_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_O_CombatUniform_Multicam";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_B_CTRG_Soldier_Multicam_F: U_B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] CTRG Stealth Uniform";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\U_B_CTRG_Soldier_Multicam_F_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\Icon_U_B_CTRG_uniform_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_B_CTRG_Soldier_Multicam_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_B_CTRG_Soldier_3_Multicam_F: U_B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] CTRG Stealth Uniform (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\U_B_CTRG_Soldier_Multicam_F_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\Icon_U_B_CTRG_vest_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_B_CTRG_Soldier_3_Multicam_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_O_officer_noInsignia_Multicam_F: U_O_officer_noInsignia_hex_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Light Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\Officer_noInsignia_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_O_R_officer_noInsignia_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_O_officer_noInsignia_Multicam_F";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_Aegis_O_Soldier_03_Multicam: ghostb_main_U_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Luchnik Fatigues";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing2_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\TacGloves_Multicam_co.paa",
			"\z\ghostb\addons\Multicam_lite\data\clothing_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_Aegis_O_Soldier_03_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_Aegis_O_Soldier_03_Multicam";
			modelSides[]={0,1,2,3,4,5,6,7};
		};
	};
	class ghostb_Multicam_lite_U_Aegis_O_Soldier_04_Multicam: ghostb_main_U_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Luchnik Fatigues (Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing2_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\TacGloves_Multicam_co.paa",
			"\z\ghostb\addons\Multicam_lite\data\clothing_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_Aegis_O_Soldier_04_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="ghostb_Multicam_lite_Soldier_U_Aegis_O_Soldier_04_Multicam";
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
	class ghostb_Multicam_lite_Soldier_U_I_CombatUniform_Multicam: I_Soldier_F
	{
		author="Seb";
		displayName="Unit [Multicam] Combat Fatigues [AAF]";
		uniformClass="ghostb_Multicam_lite_U_I_CombatUniform_Multicam";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\I_I_Soldier_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_I_I_CombatUniform_Multicam_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_Soldier_U_I_CombatUniform_shortsleeve_Multicam: I_Soldier_lite_F
	{
		author="Seb";
		displayName="Unit [Multicam] Combat Fatigues [AAF] (Rolled-up)";
		uniformClass="ghostb_Multicam_lite_U_I_CombatUniform_shortsleeve_Multicam";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\I_I_Soldier_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_I_I_CombatUniform_shortsleeve_Multicam_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_Soldier_U_I_E_Uniform_Multicam_01_F: I_E_Uniform_01_F
	{
		author="Seb";
		displayName="Unit [Multicam] Combat Fatigues [LDF]";
		uniformClass="ghostb_Multicam_lite_U_I_E_Uniform_Multicam_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\Officer_noInsignia_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\I_I_Soldier_01_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\I_E_Soldier_01_gloves_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_I_E_Uniform_01_Multicam_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_Soldier_U_I_E_Uniform_shortsleeve_Multicam_01_F: I_E_Uniform_01_shortsleeve_F
	{
		author="Seb";
		displayName="Unit [Multicam] Combat Fatigues [LDF] (Rolled-up)";
		uniformClass="ghostb_Multicam_lite_U_I_E_Uniform_shortsleeve_Multicam_01_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\Officer_noInsignia_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\I_I_Soldier_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Multicam_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_Soldier_U_I_E_Uniform_OfficerUniformNoInsignia_Multicam_F: I_Officer_F
	{
		author="Seb";
		displayName="Unit [Multicam] Light Combat Fatigues";
		uniformClass="ghostb_Multicam_lite_U_I_E_Uniform_OfficerUniformNoInsignia_Multicam_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\Officer_noInsignia_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\I_I_Soldier_01_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_I_E_Uniform_01_shortsleeve_Multicam_F_ca.paa";
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
	class ghostb_Multicam_lite_Soldier_U_B_CombatUniform_Multicam: B_Soldier_F
	{
		author="Seb";
		displayName="Unit [Multicam] Combat Fatigues [NATO]";
		uniformClass="ghostb_Multicam_lite_U_B_CombatUniform_Multicam";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing1_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\Icon_U_B_CTRG_uniform_Multicam_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_Soldier_U_B_CombatUniform_vest_Multicam: B_Soldier_SL_F
	{
		author="Seb";
		displayName="Unit [Multicam] Combat Fatigues [NATO] (Rolled-up)";
		uniformClass="ghostb_Multicam_lite_U_B_CombatUniform_vest_Multicam";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing1_Multicam.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\Icon_U_B_CTRG_vest_Multicam_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_Soldier_U_O_CombatUniform_Multicam: O_Soldier_F
	{
		author="Seb";
		displayName="Unit [Multicam] Fatigues [CSAT]";
		uniformClass="ghostb_Multicam_lite_U_O_CombatUniform_Multicam";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\tech_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_O_R_CombatUniform_Multicam_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_Soldier_U_B_CTRG_Soldier_Multicam_F: B_CTRG_Soldier_F
	{
		author="Seb";
		displayName="Unit [Multicam] CTRG Stealth Uniform";
		uniformClass="ghostb_Multicam_lite_U_B_CTRG_Soldier_Multicam_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\U_B_CTRG_Soldier_Multicam_F_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\Icon_U_B_CTRG_uniform_Multicam_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_Soldier_U_B_CTRG_Soldier_3_Multicam_F: B_CTRG_Soldier_3_F
	{
		author="Seb";
		displayName="Unit [Multicam] CTRG Stealth Uniform (Rolled-up)";
		uniformClass="ghostb_Multicam_lite_U_B_CTRG_Soldier_3_Multicam_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\U_B_CTRG_Soldier_Multicam_F_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\Icon_U_B_CTRG_vest_Multicam_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_Soldier_U_O_officer_noInsignia_Multicam_F: ghostb_main_O_A_officer_F
	{
		author="Seb";
		displayName="Unit [Multicam] Light Fatigues";
		uniformClass="ghostb_Multicam_lite_U_O_officer_noInsignia_Multicam_F";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\Officer_noInsignia_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_O_R_officer_noInsignia_Multicam_F_ca.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_Soldier_U_Aegis_O_Soldier_03_Multicam: ghostb_main_Aegis_O_Soldier_03_base
	{
		author="Seb";
		displayName="Unit [Multicam] Luchnik Fatigues";
		uniformClass="ghostb_Multicam_lite_U_Aegis_O_Soldier_03_Multicam";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing2_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\TacGloves_Multicam_co.paa",
			"\z\ghostb\addons\Multicam_lite\data\clothing_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_Aegis_O_Soldier_03_Multicam.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_Soldier_U_Aegis_O_Soldier_04_Multicam: ghostb_main_Aegis_O_Soldier_04_base
	{
		author="Seb";
		displayName="Unit [Multicam] Luchnik Fatigues (Rolled-up)";
		uniformClass="ghostb_Multicam_lite_U_Aegis_O_Soldier_04_Multicam";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\clothing2_Multicam_CO.paa",
			"\z\ghostb\addons\Multicam_lite\data\TacGloves_Multicam_co.paa",
			"\z\ghostb\addons\Multicam_lite\data\clothing_Multicam_CO.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_U_Aegis_O_Soldier_04_Multicam.paa";
		scope=1;
		scopeCurator=0;
	};
	class ghostb_Multicam_lite_B_AssaultPack_Multicam: B_AssaultPack_rgr
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Assault Pack";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\backpack_compact_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_B_AssaultPack_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_B_AssaultPackEnhanced_Multicam: B_AssaultPack_Kerry
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Assault Pack (Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\backpack_compact_Multicam_co.paa",
			"\z\ghostb\addons\Multicam_lite\data\vests_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_B_AssaultPack_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
	};
	class ghostb_Multicam_lite_B_Carryall_Multicam: B_Carryall_cbr
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Carryall Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\backpack_tortila_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_B_C_Tortila_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_B_Kitbag_rgr_Multicam: B_Kitbag_rgr
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Kitbag";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\backpack_fast_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_B_C_Kitbag_Multicam.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_B_TacticalPack_Multicam: B_TacticalPack_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Tactical Backpack";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\backpack_small_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_B_C_Small_Multicam.paa";
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
	class ghostb_Multicam_lite_G_Balaclava_Multicam: G_Balaclava_blk
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\headgear_balaclava_Multicam_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_G_Balaclava_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_G_Balaclava_combat_Multicam: G_Balaclava_combat
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Balaclava (Combat Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\headgear_balaclava_Multicam_co.paa",
			"\z\ghostb\addons\Multicam_lite\data\g_combat_Multicam_ca.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_G_Balaclava_combat_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_G_Balaclava_lowprofile_Multicam: G_Balaclava_lowprofile
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Balaclava (Low Profile Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\headgear_balaclava_Multicam_co.paa",
			"\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_G_Balaclava_lowprofile_Multicam_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class ghostb_Multicam_lite_G_Combat_Multicam: G_Combat
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Combat Goggles";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\g_combat_Multicam_ca.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_g_combat_Multicam_CA.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\characters_f_beta\heads\glasses\g_combat.p3d";
	};
	class ghostb_Multicam_lite_G_Balaclava_TI_G_Multicam_F: G_Balaclava_TI_G_blk_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Stealth Balaclava (Goggles)";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\G_Balaclava_TI_Multicam_F_co.paa",
			"\z\ghostb\addons\Multicam_lite\data\g_combat_Multicam_ca.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_G_Balaclava_TI_G_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
	};
	class ghostb_Multicam_lite_G_Balaclava_TI_Multicam_F: G_Balaclava_TI_blk_F
	{
		author="Seb";
		displayName="(GHOST)[Multicam] Stealth Balaclava";
		hiddenSelectionsTextures[]=
		{
			"\z\ghostb\addons\Multicam_lite\data\G_Balaclava_TI_Multicam_F_co.paa"
		};
		picture="\z\ghostb\addons\Multicam_lite\data\UI\icon_G_Balaclava_TI_Multicam_F_ca.paa";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
	};
};
