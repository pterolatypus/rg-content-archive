class CfgVehicles {
  class JS_JC_FA18E;
  class CLASS(FA18E): JS_JC_FA18E {
    scope = 2;
    side = 1;
    faction = QCLASS(TaskForce);
    editorSubcategory = QCLASS(VEHICLES_JETS);
    crew = QCLASS(SupportJet_MTP);
    typicalCargo[] = {QCLASS(SupportJet_MTP)};
  };

  class FIR_A10C;
  class CLASS(A10C_F): FIR_A10C {
    scope = 2;
    side = 1;
    faction = QCLASS(TaskForce);
    editorSubcategory = QCLASS(VEHICLES_JETS);
    crew = QCLASS(SupportJet_MTP);
  };
};
