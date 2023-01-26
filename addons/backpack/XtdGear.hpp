#include "script_component.hpp"
class XtdGearmodels {
    class CfgVehicles {
        class RadioBag {
            options[] = { "base"  };
            label = "Radio Bag";
            class base {
                label = "Camo";
                alwaysselectable = 1;
                values[] = {  "MTP", "BLK", "MCT", "WD" };
                class MTP {
                    label = "MTP";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class WD {
                    label = "WD";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class BLK {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class MCT {
                    label = "MCT";
                    image = "z\aceax\addons\gearinfo\data\camo\mct.paa";
                };
            };
        };

        class talon {
            options[] = {
                "base"
            };
            label = "Talon Radio Bag";
            class base {
                label = "Camo";
                alwaysselectable = 1;
                values[] = {
                    "COY", "ALP", "KHK", "BLK"
                };
                class COY {
                    label = "COY";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class ALP {
                    label = "ALP";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class KHK {
                    label = "KHK";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class BLK {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
            };
        };

        class AssaultPack {
            options[] = { "camo" };
            label = "Assult Pack";
            class camo {
                alwaysSelectable = 1;
                values[] = { "Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_Black", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_White", "US_DCU", "US_M81", "US_Tigerstripe" };
                class Solid_Black {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Multicam {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow {
                    label = "MCA";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Solid_CoyoteBrown {
                    label = "BRN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Solid_Olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class Solid_Ranger_Green {
                    label = "Ranger";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class Solid_White {
                    label = "White";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class US_DCU {
                    label = "DCU";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class US_M81 {
                    label = "M81";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class US_Tigerstripe {
                    label = "Tiger";
                    image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
        };

        class AssaultPackEnhanced {
            options[] = { "camo" };
            label = "Enhanceed Assult Pack";
            class camo {
                alwaysSelectable = 1;
                values[] = { "Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_Black", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_White", "US_DCU", "US_M81", "US_Tigerstripe" };
                class Solid_Black {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Multicam {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow {
                    label = "MCA";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Solid_CoyoteBrown {
                    label = "BRN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Solid_Olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class Solid_Ranger_Green {
                    label = "Ranger";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class Solid_White {
                    label = "White";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class US_DCU {
                    label = "DCU";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class US_M81 {
                    label = "M81";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class US_Tigerstripe {
                    label = "Tiger";
                    image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
        };

        class Carryall {
            options[] = { "camo" };
            label = "Carryall";
            class camo {
                alwaysSelectable = 1;
                values[] = { "Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_Black", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_White", "US_DCU", "US_M81", "US_Tigerstripe" };
                class Solid_Black {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Multicam {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow {
                    label = "MCA";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Solid_CoyoteBrown {
                    label = "BRN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Solid_Olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class Solid_Ranger_Green {
                    label = "Ranger";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class Solid_White {
                    label = "White";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class US_DCU {
                    label = "DCU";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class US_M81 {
                    label = "M81";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class US_Tigerstripe {
                    label = "Tiger";
                    image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
        };

        class Kitbag {
            options[] = { "camo" };
            label = "Kitbag";
            class camo {
                alwaysSelectable = 1;
                values[] = { "Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_Black", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_White", "US_DCU", "US_M81", "US_Tigerstripe" };
                class Solid_Black {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Multicam {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow {
                    label = "MCA";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Solid_CoyoteBrown {
                    label = "BRN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Solid_Olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class Solid_Ranger_Green {
                    label = "Ranger";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class Solid_White {
                    label = "White";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class US_DCU {
                    label = "DCU";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class US_M81 {
                    label = "M81";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class US_Tigerstripe {
                    label = "Tiger";
                    image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
        };

        class TacticalPack {
            options[] = { "camo" };
            label = "Tactical Pack";
            class camo {
                alwaysSelectable = 1;
                values[] = { "Multicam", "Multicam_Snow", "Multicam_Woodland", "Solid_Black", "Solid_CoyoteBrown", "Solid_Olive", "Solid_Ranger_Green", "Solid_White", "US_DCU", "US_M81", "US_Tigerstripe" };
                class Solid_Black {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class Multicam {
                    label = "MC";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class Multicam_Snow {
                    label = "MCA";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class Multicam_Woodland {
                    label = "MCW";
                    image = "z\aceax\addons\gearinfo\data\camo\mcw.paa";
                };
                class Solid_CoyoteBrown {
                    label = "BRN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class Solid_Olive {
                    label = "Olive";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class Solid_Ranger_Green {
                    label = "Ranger";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class Solid_White {
                    label = "White";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class US_DCU {
                    label = "DCU";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class US_M81 {
                    label = "M81";
                    image = "z\aceax\addons\gearinfo\data\camo\m81.paa";
                };
                class US_Tigerstripe {
                    label = "Tiger";
                    image = "z\aceax\addons\gearinfo\data\camo\tsw.paa";
                };
            };
        };

        class Backpack_Kitbag_Medic {
            options[] = { "camo" };
            label = "Medic Kitbag";
            class camo {
                alwaysSelectable = 1;
                values[] = { "MTP", "WHT", "COY", "BLK", "GRN", "RGR", "SAGE", "TAN"};
                class BLK {
                    label = "BLK";
                    image = "z\aceax\addons\gearinfo\data\camo\blk.paa";
                };
                class MTP {
                    label = "MTP";
                    image = "z\aceax\addons\gearinfo\data\camo\mc.paa";
                };
                class COY {
                    label = "COY";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
                class RGR {
                    label = "Ranger";
                    image = "z\aceax\addons\gearinfo\data\camo\rgr.paa";
                };
                class WHT {
                    label = "WHT";
                    image = "z\aceax\addons\gearinfo\data\camo\wht.paa";
                };
                class GRN {
                    label = "GRN";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class SAGE {
                    label = "SAGE";
                    image = "z\aceax\addons\gearinfo\data\camo\sage.paa";
                };
                class TAN {
                    label = "TAN";
                    image = "z\aceax\addons\gearinfo\data\camo\khk.paa";
                };
            };
        };
    };
};

class XtdGearinfos {
    class CfgVehicles {
        class GVAR(RadioBag_01_BLACK) {
            model = "RadioBag";
            base = "BLK";
        };
        class GVAR(RadioBag_01_MTP) {
            model = "RadioBag";
            base = "MTP";
        };
        class GVAR(RadioBag_01_TROPIC) {
            model = "RadioBag";
            base = "MCT";
        };
        class GVAR(RadioBag_01_WDL) {
            model = "RadioBag";
            base = "WD";
        };
        class GVAR(kitbag_coyote_west) {
            model = "talon";
            base = "COY";
        };
        class GVAR(kitbag_winter_west) {
            model = "talon";
            base = "ALP";
        };
        class GVAR(kitbag_khaki_west) {
            model = "talon";
            base = "KHK";
        };
        class GVAR(kitbag_black_west) {
            model = "talon";
            base = "BLK";
        };
        class GVAR(AssaultPack_Multicam) {
            model = "AssaultPack";
            camo = "Multicam";
        };
        class GVAR(AssaultPack_Multicam_Snow) {
            model = "AssaultPack";
            camo = "Multicam_Snow";
        };
        class GVAR(AssaultPack_Multicam_Woodland) {
            model = "AssaultPack";
            camo = "Multicam_Woodland";
        };
        class GVAR(AssaultPack_Solid_Black) {
            model = "AssaultPack";
            camo = "Solid_Black";
        };
        class GVAR(AssaultPack_Solid_CoyoteBrown) {
            model = "AssaultPack";
            camo = "Solid_CoyoteBrown";
        };
        class GVAR(AssaultPack_Solid_Olive) {
            model = "AssaultPack";
            camo = "Solid_Olive";
        };
        class GVAR(AssaultPack_Solid_Ranger_Green) {
            model = "AssaultPack";
            camo = "Solid_Ranger_Green";
        };
        class GVAR(AssaultPack_Solid_White) {
            model = "AssaultPack";
            camo = "Solid_White";
        };
        class GVAR(AssaultPack_US_DCU) {
            model = "AssaultPack";
            camo = "US_DCU";
        };
        class GVAR(AssaultPack_US_M81) {
            model = "AssaultPack";
            camo = "US_M81";
        };
        class GVAR(AssaultPack_US_Tigerstripe) {
            model = "AssaultPack";
            camo = "US_Tigerstripe";
        };
        //
        class GVAR(AssaultPackEnhanced_Multicam) {
            model = "AssaultPackEnhanced";
            camo = "Multicam";
        };
        class GVAR(AssaultPackEnhanced_Multicam_Snow) {
            model = "AssaultPackEnhanced";
            camo = "Multicam_Snow";
        };
        class GVAR(AssaultPackEnhanced_Multicam_Woodland) {
            model = "AssaultPackEnhanced";
            camo = "Multicam_Woodland";
        };
        class GVAR(AssaultPackEnhanced_Solid_Black) {
            model = "AssaultPackEnhanced";
            camo = "Solid_Black";
        };
        class GVAR(AssaultPackEnhanced_Solid_CoyoteBrown) {
            model = "AssaultPackEnhanced";
            camo = "Solid_CoyoteBrown";
        };
        class GVAR(AssaultPackEnhanced_Solid_Olive) {
            model = "AssaultPackEnhanced";
            camo = "Solid_Olive";
        };
        class GVAR(AssaultPackEnhanced_Solid_Ranger_Green) {
            model = "AssaultPackEnhanced";
            camo = "Solid_Ranger_Green";
        };
        class GVAR(AssaultPackEnhanced_Solid_White) {
            model = "AssaultPackEnhanced";
            camo = "Solid_White";
        };
        class GVAR(AssaultPackEnhanced_US_DCU) {
            model = "AssaultPackEnhanced";
            camo = "US_DCU";
        };
        class GVAR(AssaultPackEnhanced_US_M81) {
            model = "AssaultPackEnhanced";
            camo = "US_M81";
        };
        class GVAR(AssaultPackEnhanced_US_Tigerstripe) {
            model = "AssaultPackEnhanced";
            camo = "US_Tigerstripe";
        };
        class GVAR(Carryall_Multicam) {
            model = "Carryall";
            camo = "Multicam";
        };
        class GVAR(Carryall_Multicam_Snow) {
            model = "Carryall";
            camo = "Multicam_Snow";
        };
        class GVAR(Carryall_Multicam_Woodland) {
            model = "Carryall";
            camo = "Multicam_Woodland";
        };
        class GVAR(Carryall_Solid_Black) {
            model = "Carryall";
            camo = "Solid_Black";
        };
        class GVAR(Carryall_Solid_CoyoteBrown) {
            model = "Carryall";
            camo = "Solid_CoyoteBrown";
        };
        class GVAR(Carryall_Solid_Olive) {
            model = "Carryall";
            camo = "Solid_Olive";
        };
        class GVAR(Carryall_Solid_Ranger_Green) {
            model = "Carryall";
            camo = "Solid_Ranger_Green";
        };
        class GVAR(Carryall_Solid_White) {
            model = "Carryall";
            camo = "Solid_White";
        };
        class GVAR(Carryall_US_DCU) {
            model = "Carryall";
            camo = "US_DCU";
        };
        class GVAR(Carryall_US_M81) {
            model = "Carryall";
            camo = "US_M81";
        };
        class GVAR(Carryall_US_Tigerstripe) {
            model = "Carryall";
            camo = "US_Tigerstripe";
        };
        class GVAR(TacticalPack_Multicam) {
            model = "TacticalPack";
            camo = "Multicam";
        };
        class GVAR(TacticalPack_Multicam_Snow) {
            model = "TacticalPack";
            camo = "Multicam_Snow";
        };
        class GVAR(TacticalPack_Multicam_Woodland) {
            model = "TacticalPack";
            camo = "Multicam_Woodland";
        };
        class GVAR(TacticalPack_Solid_Black) {
            model = "TacticalPack";
            camo = "Solid_Black";
        };
        class GVAR(TacticalPack_Solid_CoyoteBrown) {
            model = "TacticalPack";
            camo = "Solid_CoyoteBrown";
        };
        class GVAR(TacticalPack_Solid_Olive) {
            model = "TacticalPack";
            camo = "Solid_Olive";
        };
        class GVAR(TacticalPack_Solid_Ranger_Green) {
            model = "TacticalPack";
            camo = "Solid_Ranger_Green";
        };
        class GVAR(TacticalPack_Solid_White) {
            model = "TacticalPack";
            camo = "Solid_White";
        };
        class GVAR(TacticalPack_US_DCU) {
            model = "TacticalPack";
            camo = "US_DCU";
        };
        class GVAR(TacticalPack_US_M81) {
            model = "TacticalPack";
            camo = "US_M81";
        };
        class GVAR(TacticalPack_US_Tigerstripe) {
            model = "TacticalPack";
            camo = "US_Tigerstripe";
        };
        class GVAR(Kitbag_Multicam) {
            model = "Kitbag";
            camo = "Multicam";
        };
        class GVAR(Kitbag_Multicam_Snow) {
            model = "Kitbag";
            camo = "Multicam_Snow";
        };
        class GVAR(Kitbag_Multicam_Woodland) {
            model = "Kitbag";
            camo = "Multicam_Woodland";
        };
        class GVAR(Kitbag_Solid_Black) {
            model = "Kitbag";
            camo = "Solid_Black";
        };
        class GVAR(Kitbag_Solid_CoyoteBrown) {
            model = "Kitbag";
            camo = "Solid_CoyoteBrown";
        };
        class GVAR(Kitbag_Solid_Olive) {
            model = "Kitbag";
            camo = "Solid_Olive";
        };
        class GVAR(Kitbag_Solid_Ranger_Green) {
            model = "Kitbag";
            camo = "Solid_Ranger_Green";
        };
        class GVAR(Kitbag_Solid_White) {
            model = "Kitbag";
            camo = "Solid_White";
        };
        class GVAR(Kitbag_US_DCU) {
            model = "Kitbag";
            camo = "US_DCU";
        };
        class GVAR(Kitbag_US_M81) {
            model = "Kitbag";
            camo = "US_M81";
        };
        class GVAR(Kitbag_US_Tigerstripe) {
            model = "Kitbag";
            camo = "US_Tigerstripe";
        };
        class GVAR(Backpack_Kitbag_Medic_Black) {
            model = "Backpack_Kitbag_Medic";
            camo = "BLK";
        };
        class GVAR(Backpack_Kitbag_Medic_Coyote) {
            model = "Backpack_Kitbag_Medic";
            camo = "COY";
        };
        class GVAR(Backpack_Kitbag_Medic_Green) {
            model = "Backpack_Kitbag_Medic";
            camo = "GRN";
        };
        class GVAR(Backpack_Kitbag_Medic_MTP) {
            model = "Backpack_Kitbag_Medic";
            camo = "MTP";
        };
        class GVAR(Backpack_Kitbag_Medic_RGR) {
            model = "Backpack_Kitbag_Medic";
            camo = "RGR";
        };
        class GVAR(Backpack_Kitbag_Medic_Sage) {
            model = "Backpack_Kitbag_Medic";
            camo = "SAGE";
        };
        class GVAR(Backpack_Kitbag_Medic_Tan) {
            model = "Backpack_Kitbag_Medic";
            camo = "TAN";
        };
        class GVAR(Backpack_Kitbag_Medic_White) {
            model = "Backpack_Kitbag_Medic";
            camo = "WHT";
        };
    };
};
