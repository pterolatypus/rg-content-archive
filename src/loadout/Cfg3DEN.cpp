class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class ADDON {
                displayName = "RG Loadout Framework";
                collapsed = 1;
                class Attributes {
                    class GVAR(attr_action) {
                        displayName = "On mission start";
                        tooltip = "Action to take on mission start";
                        property = QGVAR(attr_action);
                        control = "Combo";
                        defaultValue = "0";
                        typeName = "NUMBER";
                        class values {
                            class none {name = "None"; value = 0};
                            class save {name = "Save Loadout"; value = 1};
                            class load {name = "Load Loadout"; value = 2};
                        };
						expression = "_this setVariable ['%s',_value];";
                        condition = "objectControllable";
                    };
                    class GVAR(attr_loadoutName) {
                        displayName = "Loadout Name";
                        tooltip = "Name of the loadout to save or load.";
                        property = QGVAR(attr_loadoutName);
                        control = "Edit";
                        defaultValue = "''";
						expression = "_this setVariable ['%s',_value];";
                        condition = "objectControllable";
                    };
                    class GVAR(attr_collectionName) {
                        displayName = "Collection Name";
                        tooltip = "Name of the collection to store or retrieve loadout from. If empty, will use the groupId of the unit's group.";
                        property = QGVAR(attr_collectionName);
                        control = "Edit";
                        defaultValue = "''";
						expression = "_this setVariable ['%s',_value];";
                        condition = "objectControllable";
                    };
                    class GVAR(attr_deleteUnit) {
                        displayName = "Delete Unit";
                        tooltip = "Check this to delete the unit after saving its loadout. Player-controlled units are not deleted.";
                        property = QGVAR(attr_deleteUnit);
                        control = "Checkbox";
                        defaultValue = "false";
						expression = "_this setVariable ['%s',_value];";
                        condition = "objectControllable";
                    };
                };
            };
        };
    };
};