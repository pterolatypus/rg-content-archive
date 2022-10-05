class cfgMagazines {
    class 60Rnd_30mm_APFSDS_shells_Tracer_Red;
    class 250Rnd_30mm_HE_shells_Tracer_Red;
    class 2000Rnd_762x51_Belt_Red;

    class CLASS(6Rnd_30mm_APFSDS_Red): 60Rnd_30mm_APFSDS_shells_Tracer_Red {
        displayName = STRING(6Rnd_30mm_APFSDS_Red_displayName);
        displayNameShort = STRING(6Rnd_30mm_APFSDS_Red_displayNameShort);
        //ammo = CLASS(30mm_APFSDS_Red);
        ammo = "B_30mm_APFSDS_Tracer_Red";
        count = 6;
    };

    class CLASS(6Rnd_30mm_HE_Red): 250Rnd_30mm_HE_shells_Tracer_Red {
        displayName = STRING(6Rnd_30mm_HE_Red_displayName);
        displayNameShort = STRING(6Rnd_30mm_HE_Red_displayNameShort);
        //ammo = CLASS(30mm_HE_Red);
        ammo = "B_30mm_HE_Tracer_Red";
        count = 6;
    };

    class CLASS(250Rnd_762x51_Red): 2000Rnd_762x51_Belt_Red {
        displayName = STRING(250Rnd_762x51_Red_displayName);
        displayNameShort = STRING(250Rnd_762x51_Red_displayNameShort);
        //ammo = CLASS(762x51_Red);
        ammo = "B_762x51_Tracer_Red";
        tracersEvery = 2;
        count = 250;
    };
};
