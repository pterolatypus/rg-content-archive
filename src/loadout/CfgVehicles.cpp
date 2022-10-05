class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Combo;
            class Checkbox;
            class Edit;
        };
    };

    //TODO: can't remember how to get this to show up in zeus
    class GVAR(module_setStartingLoadout): Module_F {
        scope = 1;
        scopeCurator = 2;

        category = "RG_Modules";
        displayName = "Reset Starting Loadout";

        function = QFUNC(module_setStartingLoadout);
        
        isGlobal = 0; //server only
        curatorCost = 0;
    };
};