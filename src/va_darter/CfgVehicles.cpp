class CfgVehicles {
  class ITC_Land_B_UAV_AR2i;
  class CLASSCOMP(vegas): ITC_Land_B_UAV_AR2i {
    author = AUTHOR;
		displayName = "AR-2i Darter 2 (Vegas)";
    editorPreview = QPATHTOF(data\ui\preview\RG_Vegas_AR2.jpg);
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction = QCLASS(TaskForce);
    editorSubcategory = QCLASS(SCAT_DRONES);
    itc_land_PacksTo = QCLASSCOMP(vegas_packed);
    crew = "B_UAV_AI";
    typicalCargo[] = {
      "B_UAV_AI"
    };
    accuracy=0.5;
    hiddenSelectionsTextures[] = {
      QPATHTOF(data\textures\VEGAS_AR2.paa)
    };
  };
};
