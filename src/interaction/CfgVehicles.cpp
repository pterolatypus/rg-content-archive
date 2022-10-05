class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class ACE_SelfActions {
            class ACE_Passengers {
                condition = "true";//QUOTE(alive _target);
            };
        };
    };
    class Tank: LandVehicle {
        class ACE_SelfActions {
            class ACE_Passengers {
                condition = "true";//QUOTE(alive _target);
            };
        };
    };
    class Motorcycle: LandVehicle {
        class ACE_SelfActions {
            class ACE_Passengers {
                condition = "true";//QUOTE(alive _target);
            };
        };
    };

    class Air;
    class Helicopter: Air {
        class ACE_SelfActions {
            class ACE_Passengers {
                condition = "true";//QUOTE(alive _target);
            };
        };
    };

    class Plane: Air {
        class ACE_SelfActions {
            class ACE_Passengers {
                condition = "true";//QUOTE(alive _target);
            };
        };
    };

    class Ship;
    class Ship_F: Ship {
        class ACE_SelfActions {
            class ACE_Passengers {
                condition = "true";//QUOTE(alive _target);
            };
        };
    };

    class StaticWeapon: LandVehicle {
        class ACE_SelfActions {
            class ACE_Passengers {
                condition = "true";//QUOTE(alive _target);
            };
        };
    };
};
