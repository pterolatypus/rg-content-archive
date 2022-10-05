class player;
class close;
class short;
class medium;
class manual;
class far;

class CfgWeapons {
    class MGun;
    class autocannon_30mm;
    class LMG_coax;

    class CLASS(safe): LMG_coax {
        CanLock = 0;
        displayName = STRING(safe_displayName);
        displayNameShort = STRING(safe_displayNameShort);
        displayNameMagazine = STRING(safe_displayNameMagazine);
        shortNameMagazine = STRING(safe_shortNameMagazine);
        nameSound = "cannon";
        cursor = "EmptyCursor";
        cursorAim = "EmptyCursor";

        magazines[] = {
            "FakeMagazine"
        };

        burst = 0;
        reloadTime = 0.01;
        magazineReloadTime = 0.1;
        scope = 1;
    };

    class CLASS(30mm_L21A1): autocannon_30mm {
        class player: player {
            reloadTime = 0.67;
        };

        class close: close {
            reloadTime = 0.67;
            burst = 6;
        };

        class short: short {
            reloadTime = 0.67;
            burst = 3;
        };

        class medium: medium {
            reloadTime = 0.67;
            burst = 2;
        };

        class far: far {
            reloadTime = 0.67;
            burst = 1;
        };

        muzzles[] = {
            "this"
        };

        displayName = STRING(30mm_L21A1_displayName);
        displayNameShort = STRING(30mm_L21A1_displayNameShort);

        magazines[] = {
            QCLASS(6Rnd_30mm_HE_Red),
            QCLASS(6Rnd_30mm_APFSDS_Red)
        };

        magazineReloadTime = 4;
        autoReload = 0;
        scope = 1;
    };

    class CLASS(762_L94A1): LMG_coax {
        class manual: manual {
            reloadTime = 0.12;
        };

        class close: close {
            reloadTime = 0.12;
        };

        class short: short {
            reloadTime = 0.12;
        };

        class medium: medium {
            reloadTime = 0.12;
        };

        class far: far {
            reloadTime = 0.12;
        };

        displayName = STRING(762_L94A1_displayName);
        displayNameShort = STRING(762_L94A1_displayNameShort);

        magazines[] = {
            QCLASS(250Rnd_762x51_Red)
        };

        magazineReloadTime = 8;
        autoReload = 0;
        scope = 1;
    };
};
