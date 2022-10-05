class CfgFactionClasses {
    class RG_Modules {
        author=AUTHOR;
        displayName="[RG] Modules";
        icon=QPATHTOF(UI\cfgFactionClasses_RG_ca.paa);
        flag=QPATHTOF(ui\flag_rg.paa);
        priority=9;
        side=7;
    };
    class RG_TaskForce {
        author=AUTHOR;
        displayName="[RG] Task Force";
        icon=QPATHTOF(UI\cfgFactionClasses_RG_ca.paa);
        flag=QPATHTOF(ui\flag_rg.paa);
        priority=9;
        side=1;
    };
    class RG_TaskForce_DS: RG_TaskForce {
        displayName="[RG] Task Force DS";
        priority=8;
    };
    class RG_TaskForce_WD: RG_TaskForce {
        displayName="[RG] Task Force WD";
        priority=7;
    };
    class RG_TaskForce_JN: RG_TaskForce {
        displayName = "[RG] Task Force JN";
        priority    = 6;
    };
    class RG_TaskForce_SN: RG_TaskForce {
        displayName = "[RG] Task Force SN";
        priority    = 5;
    };
    class RG_TaskForce_MTP: RG_TaskForce {
        displayName = "[RG] Task Force MTP";
        priority    = 4;
    };
};
