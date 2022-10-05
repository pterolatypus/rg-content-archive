#include "..\common_defs.hpp"

class CfgVehicles {
  class CLASS(SoldierBase);
  class CLASS(Highroller_Base): CLASS(SoldierBase) {
    faction = QCLASS(TaskForce_MTP);
    editorSubcategory = QCLASS(Company);
    nakedUniform = QCLASS(Underwear_H);
    uniformClass = QCLASS(U_RolledUniform_MTP);
  };
#include "unit_LTC.cpp"
};
