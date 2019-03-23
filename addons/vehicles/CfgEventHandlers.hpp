
class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

class Extended_Engine_EventHandlers {
    class Car {
        class ACE_EngineStartDelay {
            clientEngine = QUOTE(if (local driver (_this select 0)) then {_this call FUNC(startEngine)};);
        };
    };
};

class Extended_GetOut_EventHandlers {
    class AllVehicles {
        class GVAR(KeepEngineRunning) {
            getOut = QUOTE(_this call FUNC(keepEngineRunning));
        };
    };
};

class Extended_Init_EventHandlers {
    class StaticWeapon {
        class ACE_FixMass {
            init = QUOTE(if (local (_this select 0)) then {(_this select 0) setMass (getMass (_this select 0) max 250)};);
            exclude[] = {"TargetSoldierBase","Static_Designator_01_base_F","Static_Designator_02_base_F","Pod_Heli_Transport_04_base_F"};
        };
    };
};

class Extended_InitPost_EventHandlers {
    class AllVehicles {
        class GVAR(EngineState) {
            init = QUOTE(_this call FUNC(addEngineStateEH));
        };
    };
};
