class CfgPatches {
    class {mod class name here} {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F_BLUFOR"};
    };
};

class cfgWeapons {
    class Vest_Base;
    class VestItem;
    
    class example_PlateCarrier1_rgr : Vest_Base {
        scope = 2;
        displayName = "Corny's Woke Vest (sketch)";
        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
        model = "\A3\Weapons_F\DummyVest.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"Data\vests_blk_co.paa"};
        
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply100";
            mass = 50;
            armor = 5*0.5;
            passThrough = 0.7;
            hiddenSelections[] = {"camo"};
        };
    };
};