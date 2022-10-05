class CfgWeapons {
  //fake weapon for vehicles 'safe mode' (specifically attack aircraft)
  class RocketPods;
  class RG_Master_Arm_Switch_Off: RocketPods {
      CanLock = 0;
      displayName = "MASTER ARM Switch OFF";
      displayNameMagazine = "MASTER ARM Switch OFF";
      shortNameMagazine = "MASTER ARM Switch OFF";
      nameSound = "";
      cursor = "EmptyCursor";
      cursorAim = "EmptyCursor";
      magazines[] = {"FakeWeapon"};
      burst = 0;
      reloadTime = 0.01;
      magazineReloadTime = 0.1;
  };
  //some sort of custom countermeasure weapon?
  //TODO: not sure why this is here (Ptero 2019/08)
  class MGun;
  class SmokeLauncher: MGun {
    class Burst;
  };
  class CMFlareLauncher: SmokeLauncher {
    magazineReloadTime = 0.1;//0.2
    modes[] = {"Burst_5","Burst_20","AIBurst"};
  class Burst_20: Burst {
    reloadTime = 0.05;
    burst = 20;//0.05*20=1 second
    sounds[] = {"StandardSound"};
    class StandardSound {
      begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1.0,1,300};
      soundBegin[] = {"begin1",1};
      weaponSoundEffect = "DefaultRifle";
    };
    showToPlayer = 1;
    multiplier = 1;
    minRange = 0;
    maxRange = 0;
    soundBurst = 0;
    displayName = "20x Flares";
  };
  class Burst_5: Burst {
    reloadTime = 0.2;
    burst = 5;//0.2*5=1 second
    sounds[] = {"StandardSound"};
    class StandardSound {
      begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1.0,1,300};
      soundBegin[] = {"begin1",1};
      weaponSoundEffect = "DefaultRifle";
    };
    showToPlayer = 1;
    multiplier = 1;
    minRange = 0;
    maxRange = 0;
    soundBurst = 0;
    displayName = " 5x Flares";
  };
};

//RG custom weapons/attachment configs
//TODO: work out which of these are still in use and which can be removed (Ptero 2019/08)
/*
class rhs_weap_mk18_m320;
class RG_MK18_UGL_F: rhs_weap_mk18_m320
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_eotech_xps3";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq16a_light";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_SFMB556";
        };
    };
};
class rhs_weap_mk18_grip_KAC;
class RG_MK18_F: rhs_weap_mk18_grip_KAC
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_eotech_xps3";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq16a_light";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip3";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_SFMB556";
        };
    };
};
class rhs_weap_mk18_KAC_wd;
class RG_MK18_F_WD: rhs_weap_mk18_KAC_wd
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_eotech_xps3";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq16a_light";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip3";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_SFMB556";
        };
    };
};
class rhs_weap_mk18_KAC_d;
class RG_MK18_F_DS: rhs_weap_mk18_KAC_d
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_eotech_xps3";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq16a_light";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip3";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_SFMB556";
        };
    };
};
*/
/*
class UK3CB_BAF_L110A3;
class RG_L110A3_F: UK3CB_BAF_L110A3
{
    scope        = 2;
    scopeArsenal = 0;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_eotech_xps3";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq16a_light";
        };
    };
};
class UK3CB_BAF_L129A1;
class RG_L129A1_F: UK3CB_BAF_L129A1
{
    scope        = 2;
    scopeArsenal = 0;
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_ACOG_RMR";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq16a_light";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "UK3CB_underbarrel_acc_bipod";
        };
    };
};
*/
//TALON
/*
class rhs_weap_m4a1_carryhandle_grip2;
class RG_M4A1_F: rhs_weap_m4a1_carryhandle_grip2
{
    class LinkedItems
    {
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side_bk";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip2";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_SF3P556";
        };
    };
};
class rhs_weap_m4a1_carryhandle;
class RG_M4A1_B_F: rhs_weap_m4a1_carryhandle
{
};
*/
//VEGAS
//MK18 RTO
/*
class RG_MK18_RTO_F: rhs_weap_mk18_m320
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15_bk";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
    };
};
*/
//DS
/*
class rhs_weap_m4a1_blockII_M203_d;
class RG_M4A1GL_D_F: rhs_weap_m4a1_blockII_M203_d
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR_D";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_tan";
        };
    };
};
class rhs_weap_m4a1_blockII_d;
class RG_M4A1AFG_D_F: rhs_weap_m4a1_blockII_d
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR_D";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip2_tan";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_tan";
        };
    };
};
class RG_M4A1BP_D_F: rhs_weap_m4a1_blockII_d
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR_D";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_harris_bipod";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_tan";
        };
    };
};
//MK18
class rhs_weap_mk18_d;
class RG_MK18_D_F: rhs_weap_mk18_d
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR_D";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip2_tan";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_tan";
        };
    };
};
*/
//WD
/*
class rhs_weap_m4a1_blockII_M203_wd;
class RG_M4A1GL_W_F: rhs_weap_m4a1_blockII_M203_wd
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR_OD";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side_bk";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
    };
};
class rhs_weap_m4a1_blockII_wd;
class RG_M4A1AFG_W_F: rhs_weap_m4a1_blockII_wd
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR_OD";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15_bk";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip2";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
    };
};
class RG_M4A1BP_W_F: rhs_weap_m4a1_blockII_wd
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR_OD";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15_bk";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_harris_bipod";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
    };
};
//MK18
class rhs_weap_mk18_wd;
class RG_MK18_W_F: rhs_weap_mk18_wd
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR_OD";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq16a";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip2";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
    };
};
*/
//SN
/*
class rhs_weap_m4a1_blockII_M203_bk;
class RG_M4A1GL_S_F: rhs_weap_m4a1_blockII_M203_bk
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side_bk";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
    };
};
class rhs_weap_m4a1_blockII_bk;
class RG_M4A1AFG_S_F: rhs_weap_m4a1_blockII_bk
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15_bk";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip2";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
    };
};
class RG_M4A1BP_S_F: rhs_weap_m4a1_blockII_bk
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15_bk";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_harris_bipod";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
    };
};
//MK18
class rhs_weap_mk18_bk;
class RG_MK18_S_F: rhs_weap_mk18_bk
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15_bk";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip2";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
    };
};
*/
//This one is used in the Vegas crate
//TODO: check if we can remove it
class rhs_weap_m240B_CAP;
class RG_M240B_F: rhs_weap_m240B_CAP
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_ACOG_MDO";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side_bk";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_ARDEC_M240";
        };
    };
};
/*
class rhs_weap_m240B;
class RG_M240B_FSG: rhs_weap_m240B
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_ELCAN";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side_bk";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_ARDEC_M240";
        };
    };
};
*/
//HIGHROLLER SIG
/*
class srifle_DMR_03_tan_F;
class RG_SIG_D_F: srifle_DMR_03_tan_F
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_ERCO_snd_F";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side";
        };
    };
};
class srifle_DMR_03_khaki_F;
class RG_SIG_W_F: srifle_DMR_03_khaki_F
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_ERCO_khk_F";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side_bk";
        };
    };
};
class srifle_DMR_03_F;
class RG_SIG_S_F: srifle_DMR_03_F
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_ERCO_blk_F";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side_bk";
        };
    };
};
*/
//HR Pistol
class hgun_Pistol_heavy_02_F;
class RG_PISTOL_F: hgun_Pistol_heavy_02_F
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_Yorris";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "acc_flashlight_pistol";
        };
    };
};
//Vegas pistol
class rhsusf_weap_glock17g4;
class RG_PISTOLV_F: rhsusf_weap_glock17g4
{
    class LinkedItems
    {
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "acc_flashlight_pistol";
        };
    };
};
//restand
/*
class rhs_weap_m249_pip_S;
class RG_M249_552_F: rhs_weap_m249_pip_S
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "iansky_rds";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side";
        };
    };
};
class RG_M249_MRCO_F: rhs_weap_m249_pip_S
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_MRCO";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "acc_pointer_IR";
        };
    };
};
class RG_M249_ELCAN_F: rhs_weap_m249_pip_S
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_eotech_xps3";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq16a_light";
        };
    };
};
class rhs_weap_m14ebrri;
class RG_M14_hamr_F: rhs_weap_m14ebrri
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_Hamr";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "acc_pointer_IR";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_harris_bipod";
        };
    };
};
class RG_M14_mrco_F: rhs_weap_m14ebrri
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_MRCO";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "acc_pointer_IR";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_harris_bipod";
        };
    };
};
class rhs_weap_sr25;
class RG_SR25_MK4_F: rhs_weap_sr25
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_LRPS";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15side";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_harris_bipod";
        };
    };
};
class rhs_weap_M107_d;
class RG_M107_D: rhs_weap_M107_d
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_LRPS";
        };
    };
};
class rhs_weap_M107_w;
class RG_M107_W: rhs_weap_M107_w
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_LRPS";
        };
    };
};
class rhs_weap_M107;
class RG_M107_B: rhs_weap_M107
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_LRPS";
        };
    };
};

class rhs_weap_hk416d10_LMT;
class RG_hk416d10_LMT: rhs_weap_hk416d10_LMT
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_ACOG_RMR";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15_bk_light";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
    };
};

class rhs_weap_m249_pip_S_para;
class RG_m249_pip_S_para: rhs_weap_m249_pip_S_para
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq16a";
        };
    };
};

class UK3CB_BAF_L129A1_FGrip_Bipod;
class RG_L129A1_FGrip_Bipod: UK3CB_BAF_L129A1_FGrip_Bipod
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "RKSL_optic_PMII_312_sunshade";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "UK3CB_BAF_LLM_IR_Black";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "UK3CB_BAF_Silencer_L115A3";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "UK3CB_underbarrel_acc_fgrip_bipod";
        };
    };
};

class RG_mk18_Hamr: rhs_weap_mk18_m320
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "optic_Hamr";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15_bk_light";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
    };
};
class rhsusf_weap_m9;
class RG_m9: rhsusf_weap_m9
{
};

class RG_MK18_W_ACOG_F: rhs_weap_mk18_wd
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_ACOG_RMR";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15_bk";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_grip2";
        };
    };
};
class rhs_weap_m27iar_grip;
class RG_m27iar_F: rhs_weap_m27iar_grip
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "rhsusf_acc_SpecterDR";
        };
        class LinkedItemsAcc
        {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq15_bk";
        };
        class LinkedItemsMuzzle
        {
            slot = "MuzzleSlot";
            item = "rhsusf_acc_nt4_black";
        };
        class LinkedItemsUnder
        {
            slot = "UnderBarrelSlot";
            item = "rhsusf_acc_harris_bipod";
        };
    };
};
class UK3CB_BAF_L115A3;
class RG_L115A3_F: UK3CB_BAF_L115A3
{
    class LinkedItems
    {
        class LinkedItemsOptic
        {
            slot = "CowsSlot";
            item = "RKSL_optic_PMII_525";
        };
    };
};
*/

//new RG weapons 2019/08
//
  class rhs_weap_hk416d145;
  class CLASS(SIW_B): rhs_weap_hk416d145 {
    displayName = "HK416 14.5in Black";
    scope = 2;
    scopeArsenal = 2;
    class LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "CUP_optic_AC11704_Black";
      };
      class LinkedItemsUnder {
        slot = "UnderBarrelSlot";
        item = "rhsusf_acc_grip1";
      };
      class LinkedItemsAcc {
        slot = "PointerSlot";
        item = "rhsusf_acc_anpeq16a_light";
      };
    };
  };
  
  class CLASS(SIW_CCO): CLASS(SIW_B) {
    displayName = "HK416 14.5in Black";
    class LinkedItems: LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "rhsusf_acc_compm4";
      };
    };
  };
  
  class CLASS(SIW_ACOG): CLASS(SIW_B) {
    displayName = "HK416 14.5in Black";
    class LinkedItems: LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "rhsusf_acc_acog_rmr";
      };
    };
  };

  class rhs_weap_hk416d145_m320;
  class CLASS(SIW_UGL): rhs_weap_hk416d145_m320 {
    displayName = "HK416 14.5in Black (M320)";
    class LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "CUP_optic_AC11704_Black";
      };
      class LinkedItemsAcc {
        slot = "PointerSlot";
        item = "rhsusf_acc_anpeq16a_light";
      };
    };
  };

  class CLASS(SIW_UGL_HOLO): CLASS(SIW_UGL) {
    displayName = "HK416 14.5in Black (M320)";
    class LinkedItems: LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "rksl_optic_eot552";
      };
    };
  };

  class CLASS(SIW_UGL_ACOG): CLASS(SIW_UGL) {
    displayName = "HK416 14.5in Black (M320)";
    class LinkedItems: LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "rhsusf_acc_acog_rmr";
      };
    };
  };

  //override the 3cb minimi to add magwell and tweak reload anims
  class UK3CB_BAF_L110_Base;
  class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base {
      magazineWell[] = {"STANAG_556x45"};
      // RHS M249 30rnd reload animation
      // overridden by belts in CfgMagazines
      reloadaction = "rhs_GestureReloadM249STANAG";
  };
  //class UK3CB_BAF_L110A3;
  class rhs_weap_m249_light_l;
  class CLASS(SAW_B): rhs_weap_m249_light_l {
    class LinkedItems {
      class LinkedItemsOptic {
        slot = "CowsSlot";
        item = "optic_hamr";
      };
      class LinkedItemsAcc {
        slot = "PointerSlot";
        item = "rhsusf_acc_anpeq16a_light";
      };
      class LinkedItemsUnder {
        slot = "UnderBarrelSlot";
        item = "rhsusf_acc_saw_bipod";
      };
    };
  };

  class rhs_weap_sr25_ec;
  class CLASS(DMR_B): rhs_weap_sr25_ec {
    displayName = "Mk 11 Mod 0 (EC)";
      class LinkedItems {
        class LinkedItemsOptic {
            slot = "CowsSlot";
            item = "rhsusf_acc_acog_rmr";
        };
        class LinkedItemsAcc {
            slot = "PointerSlot";
            item = "rhsusf_acc_anpeq16a_light";
        };
        class LinkedItemsMuzzle {
            slot = "MuzzleSlot";
            item = "cup_muzzle_mfsup_flashhider_762x51_black";
        };
        class LinkedItemsUnder {
          slot = "UnderBarrelSlot";
          item = "rhsusf_acc_harris_bipod";
        };
    };
  };

    class rhs_weap_maaws;
    class CLASS(LAT_B): rhs_weap_maaws {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhs_optic_maaws";
            };
        };
    };

    class CUP_smg_MP7;
    class CLASS(PDW_MP7_B): CUP_smg_MP7 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_aco_smg";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "uk3cb_baf_llm_ir_black";
            };
        };
    };

    
    class rhs_weap_m4a1_blockII_bk;
    class CLASS(M4_CCO): rhs_weap_m4a1_blockII_bk {
        displayName = "HK416 14.5in Black";
        class LinkedItems: LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "rhsusf_acc_grip1";
            };
            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq16a_light";
            };
        };
    };
};
