class cfgWeapons {
    class Vest_Base;
    class VestItem;
    
    class CRNY_PlateCarrier2_cum : Vest_Base {
		author = "Corny, but no jokes"
        scope = 2;
        displayName = "Corny's Woke Vest (sketch)";
        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_blk_CA.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"cornys-woke-skins\Data\vests_blk_co.paa"};
        
        class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply100";
			mass = 50;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitPointName = "HitBody";
					armor = 5*0.7;
					passThrough = 0.7;
				};
			};
        };
    };
};