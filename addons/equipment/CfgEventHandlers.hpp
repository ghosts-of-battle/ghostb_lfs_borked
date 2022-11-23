
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
        disableModuload = true;
    };
};

class Extended_InitPost_EventHandlers {
    class ReammoBox_F {
        class Storage_MedicalSupplies {
            init = "[_this select 0] call GHOSTB_fnc_MedicalSupplies";
        };
        class Storage_Ammobox {
            init = "[_this select 0] call GHOSTB_fnc_Ammobox";
        };
    };
    class Car {
        class Car_MedicalSupplies {
            init = "[_this select 0] call GHOSTB_fnc_MedicalSupplies";
        };
        class Car_Ammobox {
            init = "[_this select 0] call GHOSTB_fnc_Ammobox";
        };
    };
    class Tank {
        class Tank_MedicalSupplies {
            init = "[_this select 0] call GHOSTB_fnc_MedicalSupplies";
        };
        class Tank_Ammobox {
            init = "[_this select 0] call GHOSTB_fnc_Ammobox";
        };
    };
    class Motorcycle {
        class Motorcycle_MedicalSupplies {
            init = "[_this select 0] call GHOSTB_fnc_MedicalSupplies";
        };
        class Motorcycle_Ammobox {
            init = "[_this select 0] call GHOSTB_fnc_Ammobox";
        };
    };
    class Helicopter {
        class Helicopter_MedicalSupplies {
            init = "[_this select 0] call GHOSTB_fnc_MedicalSupplies";
        };
        class Helicopter_Ammobox {
            init = "[_this select 0] call GHOSTB_fnc_Ammobox";
        };
    };
    class Plane {
        class Plane_MedicalSupplies {
            init = "[_this select 0] call GHOSTB_fnc_MedicalSupplies";
        };
        class Plane_Ammobox {
            init = "[_this select 0] call GHOSTB_fnc_Ammobox";
        };
    };
    class Ship_F {
        class Ship_MedicalSupplies {
            init = "[_this select 0] call GHOSTB_fnc_MedicalSupplies";
        };
        class Ship_Ammobox {
            init = "[_this select 0] call GHOSTB_fnc_Ammobox";
        };
    };
};