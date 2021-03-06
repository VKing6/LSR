class CfgMagazines {
    class 100Rnd_127x99_mag_Tracer_red;
    class 150Rnd_762x51_Box;
    class 32Rnd_40mm_G_belt;
    class 8Rnd_82mm_Mo_shells;
    class 8Rnd_82mm_Mo_Smoke_red;
    class 8Rnd_82mm_Mo_Flare_white;
    class 8Rnd_82mm_Mo_Smoke_white;
    class 8Rnd_82mm_Mo_Smoke_orange;
    class 16aa_static_magazine_ammobox_50cal : 100Rnd_127x99_mag_Tracer_red   {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = ".50cal Ammo Box";
        descriptionshort = "100Rd .50cal. Used in L2A1 Heavy Machine Gun";
        model = "\16aa_crates_a3\ammobox_50cal.p3d";
        picture = PATHTOF(UI\w_ammobox_50cal_ca.paa);
        mass = 66;
        ammo = "16aa_127x99_Ball";
    };
    class 16aa_static_magazine_ammobox_762 : 150Rnd_762x51_Box  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "7.62mm Ammo Box";
        descriptionshort = "200Rd 7.62mm Used in L7A2 General Purpose Machine Gun";
        model = "\16aa_crates_a3\ammobox_762.p3d";
        picture = PATHTOF(UI\w_ammobox_762_ca.paa);
        mass = 44;
        count = 200;
        ammo = "16aa_762x51_Ball";
    };
    class 16aa_static_magazine_ammobox_40mm : 32Rnd_40mm_G_belt  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "40mm Ammo Box";
        descriptionshort = "32Rd 40mm. Used in L134A1 Grenade Machine Gun";
        model = "\16aa_crates_a3\ammobox_40mm.p3d";
        picture = PATHTOF(UI\w_ammobox_40mm_ca.paa);
        mass = 88;
    };
    class 16aa_static_magazine_l16_he : 8Rnd_82mm_Mo_shells  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "81mm HE";
        descriptionshort = "81mm HE Mortar Round. High explosive round used in L16 Mortar";
        model = PATHTOF(data\l16_ammo_he.p3d);
        picture = PATHTOF(UI\w_l16_ammo_he_ca.paa);
        mass = 75;
        count = 1;
        GVAR(isMortarRound) = 1;
    };
    class 16aa_static_magazine_l16_illum : 8Rnd_82mm_Mo_Flare_white  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "81mm Illum";
        descriptionshort = "81mm Illum Mortar Round. Illumination round used in L16 Mortar";
        model = PATHTOF(data\l16_ammo_illum.p3d);
        picture = PATHTOF(UI\w_l16_ammo_illum_ca.paa);
        mass = 75;
        count = 1;
        GVAR(isMortarRound) = 1;
    };
    class 16aa_static_magazine_l16_smoke_white : 8Rnd_82mm_Mo_Smoke_white  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "81mm Smoke - White";
        descriptionshort = "81mm White Smoke Mortar Round. White Smoke round used in L16 Mortar";
        model = PATHTOF(data\l16_ammo_smk_white.p3d);
        picture = PATHTOF(UI\w_l16_ammo_smk_white_ca.paa);
        mass = 75;
        count = 1;
        GVAR(isMortarRound) = 1;
    };
    class 16aa_static_magazine_l16_smoke_red : 8Rnd_82mm_Mo_Smoke_red  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "81mm Smoke - Red";
        descriptionshort = "81mm Red Smoke Mortar Round. Red Smoke round used in L16 Mortar";
        model = PATHTOF(data\l16_ammo_smk_red.p3d);
        picture = PATHTOF(UI\w_l16_ammo_smk_red_ca.paa);
        mass = 75;
        count = 1;
        GVAR(isMortarRound) = 1;
    };
    class 16aa_static_magazine_l16_smoke_orange : 8Rnd_82mm_Mo_Smoke_orange  {
        scope = 2;
        scopeCurator = 2;
        author = "3LSR";
        displayName = "81mm Smoke - Orange";
        descriptionshort = "81mm Orange Smoke Mortar Round. Orange Smoke round used in L16 Mortar";
        model = PATHTOF(data\l16_ammo_smk_orange.p3d);
        picture = PATHTOF(UI\w_l16_ammo_smk_orange_ca.paa);
        mass = 75;
        count = 1;
        GVAR(isMortarRound) = 1;
    };
    class 32Rnd_155mm_Mo_shells;
    class 16aa_static_magazine_1Rnd_105mm_HE: 32Rnd_155mm_Mo_shells
    {
        scope = 2;
        displayName = "L31 HE";
        ammo = "16aa_Sh_105_HE";
        count = 1;
        nameSound = "heat";
        displayNameShort = "L31 HE";
        model = PATHTOF(data\l118_ammo_he.p3d);
        picture = PATHTOF(UI\w_l118_ammo_he_ca.paa);
        GVAR(isMortarRound) = 1;
        mass = 85;
    };
    class 16aa_static_magazine_1Rnd_105mm_WP: 16aa_static_magazine_1Rnd_105mm_HE
    {
        displayName = "M60A2 WP";
        displayNameShort = "WP";
        model = PATHTOF(data\l118_ammo_wp.p3d);
        picture = PATHTOF(UI\w_l118_ammo_wp_ca.paa);
        ammo = "16aa_Sh_105_WP";
        GVAR(isMortarRound) = 1;
        mass = 85;
    };
    class 16aa_static_magazine_1Rnd_105mm_SMOKE: 16aa_static_magazine_1Rnd_105mm_HE
    {
        displayName = "L45 Smoke";
        displayNameShort = "L45 Smoke";
        model = PATHTOF(data\l118_ammo_smoke.p3d);
        picture = PATHTOF(UI\w_l118_ammo_smk_white_ca.paa);
        ammo = "16aa_Sh_105_SMOKE";
        GVAR(isMortarRound) = 1;
        mass = 85;
    };
    class 16aa_static_magazine_1Rnd_105mm_ILLUM: 16aa_static_magazine_1Rnd_105mm_HE
    {
        displayName = "L43 Ilumination";
        displayNameShort = "L43 Ilumination";
        model = PATHTOF(data\l118_ammo_illum.p3d);
        picture = PATHTOF(UI\w_l118_ammo_illum_ca.paa);
        ammo = "16aa_Sh_105_ILLUM";
        GVAR(isMortarRound) = 1;
        mass = 85;
    };
};