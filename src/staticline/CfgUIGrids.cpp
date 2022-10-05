class CfgUIGrids {
    class IGUI {
        class Presets {
            class Arma3 {
                class Variables {
                    GVAR(jumplist)[] = {
                        {
                            "(safezoneX + 2 * (((safezoneW / safezoneH) min 1.2) / 40))",
                            "(safezoneY + 0.5 * safezoneH - 10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))",
                            "(10 * (((safezoneW / safezoneH) min 1.2) / 40))",
                            "(20 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))"
                        },
                        "(((safezoneW / safezoneH) min 1.2) / 40)",
                        "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"
                    };
                };
            };
        };

        class Variables {
            class GVAR(jumplist) {
                displayName = CSTRING(ui_jumplist_name);
                description = CSTRING(ui_jumplist_desc);
                preview = "#(argb,8,8,3)color(0,0,0,0.25)";
                saveToProfile[] = {0,1,2,3};
                canResize = 1;
            };
        };
    };
};