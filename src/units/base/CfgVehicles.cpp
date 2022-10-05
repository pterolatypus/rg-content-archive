#include "..\common_defs.hpp"

class CfgVehicles {
    class B_Soldier_F;
    class CLASS(SoldierBase): B_Soldier_F {
        scope=0;
        camouflage = 1; //B_soldier_F is 1.4
        cost = 90000; //B_soldier_F is 10,000 - enemy will *slightly* prefer to shoot at other AI units
        author = AUTHOR;
        faction=QCLASS(TaskForce);
        editorSubcategory=QCLASS(Training);
        DisplayName="Reality Gamer";
        nakedUniform=QCLASS(Underwear);
        icon="iconMan";
        backpack="";
        weaponslots="1 + 4 + 20* 256 + 4096 + 2 + 20* 16 + 20*131072";
        uniformClass="";
        Items[] = {
            "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
            "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
            "ACE_quikclot","ACE_quikclot","ACE_quikclot",
            "ACE_tourniquet","ACE_tourniquet",
            "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
            "ACE_MapTools",
            "ACE_CableTie","ACE_CableTie","ACE_CableTie",
            "ACE_Flashlight_MX991",
            "ACE_EarPlugs",
            "ACE_microDAGR",
            Q_RADIO_PRR,
            "ACE_canteen",
            "ACE_canteen"
        };
        RespawnItems[] = {
            "ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing",
            "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
            "ACE_quikclot","ACE_quikclot","ACE_quikclot",
            "ACE_tourniquet","ACE_tourniquet",
            "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
            "ACE_MapTools",
            "ACE_CableTie","ACE_CableTie","ACE_CableTie",
            "ACE_Flashlight_MX991",
            "ACE_EarPlugs",
            "ACE_microDAGR",
            Q_RADIO_PRR,
            "ACE_canteen",
            "ACE_canteen"
        };
        linkedItems[]= {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            QCLASS(V_Osprey),
            QCLASS(HelmetB_DS)
        };
        respawnLinkedItems[]= {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            QCLASS(V_Osprey),
            QCLASS(HelmetB_DS)
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
};
