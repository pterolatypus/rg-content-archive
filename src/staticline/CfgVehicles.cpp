class CfgVehicles {
  class Air;
  class Plane: Air {
    class ACE_SelfActions {
      #include "RG_StaticLine_Actions.cpp"
    };
  };
  class Helicopter: Air {
    class ACE_SelfActions {
      #include "RG_StaticLine_Actions.cpp"
    };
  };
};
