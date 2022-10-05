//----RG Game Admin



//--Admin MTP
class CLASS(GameAdmin_MTP): CLASS(SoldierBase) {
  scope=2;
  faction="RG_TaskForce_MTP";
  editorSubcategory="RG_Administration";
  DisplayName="Admin MTP";
  editorPreview = QPATHTOF(admin\UI\preview\RG_GameAdmin_MTP.jpg);
  icon="iconMan";
  backpack="";
  uniformClass=QCLASS(U_RolledUniform_MTP);
  Items[]= {
    "ACE_CableTie",
    "RG_NVGoggles",
    "ACE_Flashlight_MX991",
    "ACRE_PRC148",
    "ACRE_PRC148",
    "ACE_canteen",
    "ACE_canteen"
  };
  RespawnItems[]= {
    "ACE_CableTie",
    "RG_NVGoggles",
    "ACE_Flashlight_MX991",
    "ACRE_PRC148",
    "ACRE_PRC148",
    "ACE_canteen",
    "ACE_canteen"
  };
  linkedItems[]= {
    "ItemMap",
    "B_UavTerminal",
    "ItemCompass",
    "ItemWatch",
    "RG_Beret_recruit"
  };
  respawnLinkedItems[]= {
    "ItemMap",
    "B_UavTerminal",
    "ItemCompass",
    "ItemWatch",
    "RG_Beret_recruit"
  };
  Weapons[]= {
    "Throw",
    "Put"
  };
  RespawnWeapons[]= {
    "Throw",
    "Put"
  };
  Magazines[]= {};
  RespawnMagazines[]= {};
};

//--Admin JN
/*
  class CLASS(GameAdmin_JN): CLASS(GameAdmin_MTP)
  {
    faction       = "RG_TaskForce_JN";
    DisplayName   = "Admin JN";
    editorPreview = QPATHTOF(admin\UI\preview\RG_GameAdmin_JN.jpg);
  };

//--Admin SN
class CLASS(GameAdmin_SN): CLASS(GameAdmin_MTP)
{
  faction="RG_TaskForce_SN";
  DisplayName="Admin SN";
  editorPreview = QPATHTOF(admin\UI\preview\RG_GameAdmin_SN.jpg);
};
*/
