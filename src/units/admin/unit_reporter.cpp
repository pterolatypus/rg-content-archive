//----RG Reporter

//--Reporter MTP
class CLASS(Reporter_MTP): CLASS(SoldierBase) {
  scope = 2;
  cost = 1;
  threat[] = {0,0,0};
  displayName = "Reporter MTP";
  faction=QCLASS(TaskForce_MTP);
  editorSubcategory=QCLASS(Administration);
  editorPreview = QPATHTOF(admin\UI\preview\RG_Reporter_MTP.jpg);
  icon="iconMan";
  uniformClass="U_C_Mechanic_01_F";
  nakedUniform=QCLASS(Underwear);
  backpack = "B_Kitbag_sgg";
  Items[] = {
    "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
    "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
    "ACE_tourniquet","ACE_tourniquet",
    "ACE_morphine",
    "ACE_EarPlugs",
    "ACE_Flashlight_MX991",
    "ACE_microDAGR",
    "ACRE_PRC148",
    "ACRE_PRC343",
    "rhsusf_ANPVS_15",
    "ACE_canteen",
    "ACE_canteen"
  };
  RespawnItems[] = {
    "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
    "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
    "ACE_tourniquet","ACE_tourniquet",
    "ACE_morphine",
    "ACE_EarPlugs",
    "ACE_Flashlight_MX991",
    "ACE_microDAGR",
    "ACRE_PRC148",
    "ACRE_PRC343",
    "rhsusf_ANPVS_15",
    "ACE_canteen",
    "ACE_canteen"
  };
  LinkedItems[] = {
    "ItemMap",
    "ItemCompass",
    "ItemWatch",
    "V_Press_F",
    "rhsgref_helmet_pasgt_press",
    "G_Spectacles"
  };
  RespawnLinkedItems[] = {
    "ItemMap",
    "ItemCompass",
    "ItemWatch",
    "V_Press_F",
    "rhsgref_helmet_pasgt_press",
    "G_Spectacles"
  };
  Weapons[] = {
    "Throw",
    "Put",
    "Binocular"
  };
  RespawnWeapons[] = {
    "Throw",
    "Put",
    "Binocular"
  };
  Magazines[]= {};
  RespawnMagazines[]= {};
};

//--Reporter JN
/*
class CLASS(Reporter_JN): CLASS(Reporter_MTP) {
  displayName = "Reporter JN";
  editorPreview = QPATHTOF(admin\UI\preview\RG_Reporter_JN.jpg);
  faction=QCLASS(TaskForce_JN);
};

//--Reporter SN
class CLASS(Reporter_SN): CLASS(Reporter_MTP) {
  displayName = "Reporter SN";
  editorPreview = QPATHTOF(admin\UI\preview\RG_Reporter_SN.jpg);
  faction=QCLASS(TaskForce_SN);
};
*/
