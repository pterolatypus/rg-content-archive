class CfgVehicles {
  class CUP_B_AAV_Unarmed_USMC;
  class CLASSCOMP(UNARMED): CUP_B_AAV_Unarmed_USMC {
    displayName="AAVP7/A1 (Unarmed)";
    faction = QCLASS(TaskForce);
    editorSubcategory = QCLASS(SCAT_AMPH);
		crew = QCLASS(SupportCom_MTP);
    typicalCargo[] = {
			QCLASS(SupportCrew_MTP),
			QCLASS(SupportCrew_MTP),
			QCLASS(SupportCrew_MTP)
		};
  };
  class CUP_B_AAV_USMC;
  class CLASSCOMP(GMG): CUP_B_AAV_USMC {
    faction = QCLASS(TaskForce);
    editorSubcategory = QCLASS(SCAT_AMPH);
		crew = QCLASS(SupportCom_MTP);
    typicalCargo[] = {
			QCLASS(SupportCrew_MTP),
			QCLASS(SupportCrew_MTP),
			QCLASS(SupportCrew_MTP)
		};
  };
};
