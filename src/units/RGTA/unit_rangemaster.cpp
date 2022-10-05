//---RGTA Rangemaster
class RG_Rangemaster: RG_SoldierBase {
    scope             = 0;
    camouflage        = 0.89999998;
    cost              = 30000;
    faction           = "RG_TaskForce";
    editorSubcategory = "RG_RGTA";
    DisplayName       = "RG Rangemaster";
    editorPreview     = QPATHTOF(RGTA\UI\preview\RG_Rangemaster.jpg);
    nakedUniform      = "RG_Underwear";
    icon              = "iconMan";
    backpack          = "";
    uniformClass      = "RG_U_RolledUniform_MTP";
    Items[]=
    {
        "ACE_CableTie",
        "ACE_Flashlight_MX991",
        "ACRE_PRC148","ACRE_PRC148"

    };
    RespawnItems[]=
    {
        "ACE_CableTie",
        "ACE_Flashlight_MX991",
        "ACRE_PRC148","ACRE_PRC148"
    };
    linkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "B_UavTerminal",
        "RG_V_Osprey_HiVis",
        "RG_Beret_recruit"
    };
    respawnLinkedItems[]=
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "B_UavTerminal",
        "RG_V_Osprey_HiVis",
        "RG_Beret_recruit"
    };
    Weapons[]=
    {
        "Throw",
        "Put"
    };
    RespawnWeapons[]=
    {
        "Throw",
        "Put"
    };
    Magazines[]=
    {
    };
    RespawnMagazines[]=
    {
    };
};
