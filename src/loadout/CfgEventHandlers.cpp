class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_Respawn_EventHandlers {
    class CAManBase {
        class ADDON {
            respawn = QUOTE(call FUNC(onRespawn));
        };
    };
};

class Extended_InitPost_EventHandlers {
    class CAManBase {
        class ADDON {
            // if we don't include the delay the loadout gets wiped... for some reason
            serverInit = QUOTE([ARR_3({_this call FUNC(onUnitInitServer)}, _this, 2)] call CBA_fnc_waitAndExecute);
        };
    };
};
