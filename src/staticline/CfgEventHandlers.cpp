class Extended_PostInit_EventHandlers {
    class ADDON {
        init = "call compile preprocessFileLineNumbers '\x\rg\addons\staticline\XEH_postInit.sqf'";
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = "call compile preprocessFileLineNumbers '\x\rg\addons\staticline\XEH_preInit.sqf'";
    };
};

class Extended_PreStart_EventHandlers {
    class ADDON {
        init = "call compile preprocessFileLineNumbers '\x\rg\addons\staticline\XEH_preStart.sqf'";
    };
};
