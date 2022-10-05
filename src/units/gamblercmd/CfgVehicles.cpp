#include "..\common_defs.hpp"

//Gambler PltCmd Unit Defs
class CfgVehicles {
  class CLASS(SoldierBase);
  class CLASS(GamblerCO_Base): CLASS(SoldierBase) {
      faction           = QCLASS(TaskForce_MTP);
      editorSubcategory = QCLASS(Platoon);
      nakedUniform      = QCLASS(Underwear_G);
      uniformClass      = QCLASS(U_CombatUniform_MTP);
  };
  #include "unit_PCO.cpp"
  #include "unit_PXO.cpp"
  #include "unit_FSG.cpp"
};
