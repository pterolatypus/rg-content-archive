class CfgVehicles {
    //--MTP Camo
    //Gambler
    class SOG_BAG_MC;
    class CLASS(B_mtp_assaultbag): SOG_BAG_MC {
        displayName = "RG Assault Bag MTP";
        maximumLoad = 200;
    };

    class SOG_BAG_recon_MC;
    class CLASS(B_mtp_assaultbag_radio): SOG_BAG_recon_MC {
        displayName = "RG Assault Bag MTP (Radio)";
        maximumLoad = 200;
    };

    class SOG_BAG_med_MC;
    class CLASS(B_mtp_assaultbag_med): SOG_BAG_med_MC {
        displayName = "RG Assault Bag MTP (Medic)";
        maximumLoad = 200;
    };

    class KIT_BAG_MC;
    class CLASS(B_mtp_kitbag): KIT_BAG_MC {
        displayName = "RG Kitbag MTP";
        maximumLoad = 240;
    };

    class KIT_BAG_pince_mc;
    class CLASS(B_mtp_kitbag_wirecutters): KIT_BAG_pince_mc {
        displayName = "RG Kitbag MTP (Wirecutters)";
        maximumLoad = 240;
    };

    class KIT_BAG_Radio_MC;
    class CLASS(B_mtp_kitbag_radio): KIT_BAG_Radio_MC {
        displayName = "RG Kitbag MTP (Radio)";
        maximumLoad = 240;
    };

    class KIT_BAG_Radio_TAN;
    class CLASS(B_tan_kitbag_radio): KIT_BAG_Radio_TAN {
        displayName = "RG Kitbag TAN (Radio)";
        maximumLoad = 240;
    };

    //--Black (used in SN camo)
    //Gambler
    class SOG_BAG_blk;
    class CLASS(B_blk_assaultbag): SOG_BAG_blk {
        displayName = "RG Assault Bag BLK";
        maximumLoad = 200;
    };

    class SOG_BAG_recon_blk;
    class CLASS(B_blk_assaultbag_radio): SOG_BAG_recon_blk {
        displayName = "RG Assault Bag BLK (Radio)";
        maximumLoad = 200;
    };

    class SOG_BAG_med_blk;
    class CLASS(B_blk_assaultbag_med): SOG_BAG_med_blk {
        displayName = "RG Assault Bag BLK (Medic)";
        maximumLoad = 200;
    };

    class KIT_BAG_blk;
    class CLASS(B_blk_kitbag): KIT_BAG_blk {
        displayName = "RG Kitbag BLK";
        maximumLoad = 240;
    };

    class KIT_BAG_pince_blk;
    class CLASS(B_blk_kitbag_wirecutters): KIT_BAG_pince_blk {
        displayName = "RG Kitbag BLK (Wirecutters)";
        maximumLoad = 240;
    };

    class KIT_BAG_Radio_blk;
    class CLASS(B_blk_kitbag_radio): KIT_BAG_Radio_blk {
        displayName = "RG Kitbag BLK (Radio)";
        maximumLoad = 240;
    };
    

    //--Medical Tent
    class Weapon_Bag_Base;
    class B_UAV_01_backpack_F: Weapon_Bag_Base {
  	    class assembleinfo;
  	    class EventHandlers;
    };
    class CLASS(MedicalTent_Backpack_MTP): B_UAV_01_backpack_F {
    	author = AUTHOR;
    	scope = 2;
    	side = 1;
    	displayname = "[RG] Medical Tent Backpack (MTP)";
    	editorCategory = QCLASS(CAT_Taskforce);
    	editorSubcategory = QCLASS(SCAT_BACKPACKS);
    	mapsize = 0.60000002;
    	mass = 400;
    	maximumload = 0;
    	model = QPATHTOF(data\Backpack_ACR.p3d);
    	hiddenSelectionsTextures[] = {
    		QPATHTOF(data\backpack_acr_mtp_co.paa)
    	};
    	picture="\A3\Drones_F\Weapons_F_Gamma\ammoboxes\bags\data\ui\icon_B_C_UAV_rgr_ca";
    	class assembleInfo: assembleinfo {
    		assembleto=QCLASS(MedicalTent_MTP_F);
    		displayname="Medical Tent";
    	};
    };
    class CLASS(MedicalTent_Backpack_SN): CLASS(MedicalTent_Backpack_MTP) {
    	displayname="[RG] Medical Tent Backpack (Winter)";
    	hiddenSelectionsTextures[] = {
    		QPATHTOF(data\backpack_acr_sn_co.paa)
    	};
    	class assembleInfo: assembleinfo {
    		assembleto=QCLASS(MedicalTent_SN_F);
    		displayname="Medical Tent (Winter)";
    	};
    };
    //Tents Config
    class House;
    class Land_tent_east: House {
    	class EventHandlers;
    };
    class CLASS(MedicalTent_base_F): Land_tent_east {
    	class EventHandlers: EventHandlers {
    		init="(_this select 0) setVariable [""ace_medical_isMedicalFacility"", true]";
    	};
    	class assembleInfo {
    		assembleto="";
    		base="";
    		displayname="";
    		dissasembleto[]= {};
    		primary=1;
    	};
    };
    class CLASS(MedicalTent_MTP_F): CLASS(MedicalTent_base_F) {
    	class assembleInfo: assembleInfo {
    		dissasembleto[]= {
    			QCLASS(MedicalTent_Backpack_MTP)
    		};
    	};
    };
    class CLASS(MedicalTent_SN_F): CLASS(MedicalTent_base_F) {
    	class assembleInfo: assembleInfo {
    		dissasembleto[]= {
    			QCLASS(MedicalTent_Backpack_SN)
    		};
    	};
    };
};
