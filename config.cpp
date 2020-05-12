class CfgPatches
{
    class bnz_invitems
    {
        units[]={"bnz_invitems"};
        weapons[]={};
        requiredVersion= 1.03;
        version= 1.14;
fileName = "bnz_inv_items.pbo";
author = "Mr_Jizz";
    };
};
class CfgMagazines
{
	class CA_Magazine;
	class bnz_apple: CA_Magazine
	{
		displayName=".Apple";
		scope=2;
		mass=4;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\apple_icon.paa";
		model="\bnz_inv_items\objects\apple_obj.p3d";
		descriptionShort="For eating";
	};
	class bnz_beanz: CA_Magazine
	{
		displayName=".Beanz";
		scope=2;
		mass=4;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\beanz_icon.paa";
		model="\bnz_inv_items\objects\beanz_obj.p3d";
		descriptionShort="The more you eat, the more you poop";
	};
	class bnz_beanzopen: CA_Magazine
	{
		displayName=".Beanz (open)";
		scope=2;
		mass=4;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\beanz_icon.paa";
		model="\bnz_inv_items\objects\beanz_obj.p3d";
		descriptionShort="The more you eat, the more you poop";
	};
	class bnz_cash: CA_Magazine
	{
		displayName=".Pile-o-cash";
		scope=2;
		mass=1;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\cash_icon.paa";
		model="\bnz_inv_items\objects\cash_obj.p3d";
		descriptionShort="What every man wants";
	};
	class bnz_cokecan: CA_Magazine
	{
		displayName=".Coke";
		scope=2;
		mass=4;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\cokecan_icon.paa";
		model="\bnz_inv_items\objects\cokecan_obj.p3d";
		descriptionShort="Choke your thirst";
	};
	class bnz_spritecan: CA_Magazine
	{
		displayName=".Sprite";
		scope=2;
		mass=4;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\spritecan_icon.paa";
		model="\bnz_inv_items\objects\spritecan_obj.p3d";
		descriptionShort="Sprite your thirst";
	};
	class bnz_jackoffs: CA_Magazine
	{
		displayName=".Jack Off's";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\jackydee_icon.paa";
		model="\bnz_inv_items\objects\jackydee_obj.p3d";
		descriptionShort="Usually consumed by bearded men";
	};
	class bnz_jackoffs_empty: CA_Magazine
	{
		displayName=".Jack Off's (empty)";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\jackydee_empty_icon.paa";
		model="\bnz_inv_items\objects\jackydee_empty_obj.p3d";
		descriptionShort="You will die off alcoholic thirst";
	};
	class bnz_knife: CA_Magazine
	{
		displayName=".Hunting knife";
		scope=2;
		mass=3;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\knife_icon.paa";
		model="\bnz_inv_items\objects\huntknife_obj.p3d";
		descriptionShort="For knife'n things";
	};
	class bnz_meat: CA_Magazine
	{
		displayName=".Meat";
		scope=2;
		mass=4;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\meat_icon.paa";
		model="\bnz_inv_items\objects\meat_obj.p3d";
		descriptionShort="For eating";
	};
	class bnz_rawmeat: CA_Magazine
	{
		displayName=".Raw meat";
		scope=2;
		mass=4;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\rawmeat_icon.paa";
		model="\bnz_inv_items\objects\rawmeat_obj.p3d";
		descriptionShort="For cooking";
	};
	class bnz_mre: CA_Magazine
	{
		displayName=".MRE";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\mre_icon.paa";
		model="\bnz_inv_items\objects\mre_obj.p3d";
		descriptionShort="Prepare your butt";
	};
	class bnz_vodka: CA_Magazine
	{
		displayName=".vodka";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\vodka_icon.paa";
		model="\bnz_inv_items\objects\vodka_obj.p3d";
		descriptionShort="Clean your insides";
	};
	class bnz_water: CA_Magazine
	{
		displayName=".Water";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\water_icon.paa";
		model="\bnz_inv_items\objects\water_obj.p3d";
		descriptionShort="Drink";
	};
	class bnz_waterempty: CA_Magazine
	{
		displayName=".Water (Empty)";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\waterempty_icon.paa";
		model="\bnz_inv_items\objects\waterempty_obj.p3d";
		descriptionShort="Nothing";
	};
	class bnz_waterdirty: CA_Magazine
	{
		displayName=".Water (Dirty)";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\waterdirty_icon.paa";
		model="\bnz_inv_items\objects\waterdirty_obj.p3d";
		descriptionShort="Needs boiled";
	};
    class bnz_sleepingbag: CA_Magazine
	{
		displayName=".Sleeping bag";
		scope=2;
		mass=20;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\sleepingbag_icon.paa";
		model="\A3\Structures_F\Civ\Camping\Ground_sheet_folded_khaki_F.p3d";
		descriptionShort="Get some rest";
	};
    class bnz_tent: CA_Magazine
	{
		displayName=".Tent";
		scope=2;
		mass=20;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\tent_icon.paa";
		model="\A3\Structures_F\Civ\Camping\Sleeping_bag_folded_F.p3d";
		descriptionShort="Shelter";
	};
	class bnz_antibiotics: CA_Magazine
	{
		displayName=".Antibiotic's";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\antibiotics_icon.paa";
		model = "\A3\Structures_F_EPA\Items\Medical\Antibiotic_F.p3d";
		descriptionShort="Cure sickness";
	};
	class bnz_canteenfull: CA_Magazine
	{
		displayName=".Canteen (Full)";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\canteenfull_icon.paa";
		model = "\A3\Structures_F_EPA\Items\Food\Canteen_F.p3d";
		descriptionShort="Fluid container";
	};
	class bnz_canteenempty: CA_Magazine
	{
		displayName=".Canteen (empty)";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\canteenempty_icon.paa";
		model = "\A3\Structures_F_EPA\Items\Food\Canteen_F.p3d";
		descriptionShort="Fluid container";
	};
	class bnz_canteendirty: CA_Magazine
	{
		displayName=".Canteen (dirty)";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\canteendirty_icon.paa";
		model = "\A3\Structures_F_EPA\Items\Food\Canteen_F.p3d";
		descriptionShort="Fluid container";
	};
	class bnz_canopener: CA_Magazine
	{
		displayName=".Can opener";
		scope=2;
		mass=2;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\canopener_icon.paa";
		model = "\A3\Structures_F_EPA\Items\Tools\CanOpener_F.p3d";
		descriptionShort="Open cans";
	};
	class bnz_cereal: CA_Magazine
	{
		displayName=".Cereal";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\cereal_icon.paa";
		model = "\A3\Structures_F_EPA\Items\Food\CerealsBox_F.p3d";
		descriptionShort="Eat";
	};
	class bnz_rice: CA_Magazine
	{
		displayName=".Rice";
		scope=2;
		mass=3;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\rice_icon.paa";
		model = "\A3\Structures_F_EPA\Items\Food\RiceBox_F.p3d";
		descriptionShort="Eat";
	};
	class bnz_powderedmilk: CA_Magazine
	{
		displayName=".Powdered milk";
		scope=2;
		mass=2;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\powderedmilk_icon.paa";
		model = "\A3\Structures_F_EPA\Items\Food\PowderedMilk_F.p3d";
		descriptionShort="Eat";
	};
	class bnz_tincontainer: CA_Magazine
	{
		displayName=".Tin container";
		scope=2;
		mass=6;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\tincontainer_icon.paa";
		model = "\A3\Structures_F_EPA\Items\Vessels\TinContainer_F.p3d";
		descriptionShort="Use for cooking";
	};
	class bnz_wood: CA_Magazine
	{
		displayName=".Wood";
		scope=2;
		mass=20;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\wood_icon.paa";
		model = "\A3\Structures_F_EPA\Civ\Camping\WoodenLog_F.p3d";
		descriptionShort="Crafting fire etc";
	};
	class bnz_axe: CA_Magazine
	{
		displayName=".Axe";
		scope=2;
		mass=20;
		author="Mr_Jizz";
		picture="\bnz_inv_items\icons\axe_icon.paa";
		model = "\A3\Structures_F\Items\Tools\Axe_F.p3d";
		descriptionShort="Chopping";
	};
	class bnz_wrench: CA_Magazine
	{
		displayName=".wrench";
		scope=2;
		mass=2;
		author="Mr_Jizz";
		picture="";
		model = "\A3\Structures_F\Items\Tools\Wrench_F.p3d";
		descriptionShort="Tool";
	};
};
// Function calls
class CfgFunctions {
	class bnz_inv_items {
		tag = "BNZ";
		project = "bnz";
		class GUI
		{
			file = "bnz_inv_items\scripts";
			class survivemodule{};
			class survivemode{};
			class surviveloop{};
			class weaponmode{};
            class subMenu
            {
                postInit = 1;
            };
		};
	};
};
// Survive Module
class CfgVehicles {
class Logic;
class bnz_survive_module : Logic {
	displayName = "Beanz survive mode";
	icon = "\a3\Modules_F_Curator\Data\iconLightning_ca.paa";
	picture = "\a3\Modules_F_Curator\Data\portraitLightning_ca.paa"; 
	vehicleClass = "Modules";
	class ModuleDescription
		{
			class AnyPlayer;
		};

	class EventHandlers 
	    {
		    init = "execVM '\bnz_inv_items\scripts\fn_survivemodule.sqf'";
	    };
};
};
// Item data
class Cfgiteminteract {
    class bnz_jackoffs
    {
        interactActions[] = {
            {"true","Drink","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [0,30] call fnc_survivemode_eat; player removeItem 'bnz_jackoffs'; player addItem 'bnz_jackoffs_empty';"},
        };
    };
	class bnz_vodka
    {
        interactActions[] = {
            {"true","Drink","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [0,40] call fnc_survivemode_eat; player removeItem 'bnz_vodka';"},
        };
    };
	class bnz_rawmeat
    {
        interactActions[] = {
            {"((count (nearestObjects [player, ['Land_FirePlace_F'], 3]) > 0) && (inflamed (nearestObject [player, 'Land_FirePlace_F'])))","Cook","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player removeItem 'bnz_rawmeat'; player addItem 'bnz_meat';"},
			{"((count (nearestObjects [player, ['Land_Campfire_F'], 3]) > 0) && (inflamed (nearestObject [player, 'Land_Campfire_F'])))","Cook","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player removeItem 'bnz_rawmeat'; player addItem 'bnz_meat';"},
			
        };
    };
	class bnz_meat
    {
        interactActions[] = {
            {"true","Eat","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [60,0] call fnc_survivemode_eat; player removeItem 'bnz_meat';"},
        };
    };
	class bnz_apple
    {
        interactActions[] = {
            {"true","Eat","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [10,10] call fnc_survivemode_eat; player removeItem 'bnz_apple';"},
        };
    };
	class bnz_cokecan
    {
        interactActions[] = {
            {"true","Drink","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [0,60] call fnc_survivemode_eat; player removeItem 'bnz_cokecan';"},
        };
    };
	class bnz_spritecan
    {
        interactActions[] = {
            {"true","Drink","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [0,60] call fnc_survivemode_eat; player removeItem 'bnz_spritecan';"},
        };
    };
	class bnz_knife
    {
        interactActions[] = {
            {"count (nearestTerrainObjects [player, ['BUSH'], 3]) > 0","Forage","if (5 > random 100) then {player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player addItem 'bnz_apple';};"},
			{"((player distance (nearestObject [player, 'Rabbit_F']) < 2) && (!alive (nearestObject [player, 'Rabbit_F'])))","Gut","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player addItem 'bnz_rawmeat'; {deleteVehicle _x} forEach (nearestObjects [player, ['Rabbit_F'], 2]);"},
        };
    };
	class bnz_water
    {
        interactActions[] = {
            {"true","Drink","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [0,90] call fnc_survivemode_eat; player removeItem 'bnz_water'; player addItem 'bnz_waterempty';"},
        };
    };
	class bnz_waterdirty
    {
        interactActions[] = {
            {"true","Drink","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [0,5] call fnc_survivemode_eat;[true] call fnc_survivemode_sickness; player removeItem 'bnz_waterdirty'; player addItem 'bnz_waterempty';"},
			{"((count (nearestObjects [player, ['Land_FirePlace_F'], 3]) > 0) && (inflamed (nearestObject [player, 'Land_FirePlace_F'])) && ('bnz_tincontainer' in (magazines player)))","Boil","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player removeItem 'bnz_waterdirty'; player addItem 'bnz_water';"},
			{"((count (nearestObjects [player, ['Land_Campfire_F'], 3]) > 0) && (inflamed (nearestObject [player, 'Land_Campfire_F'])) && ('bnz_tincontainer' in (magazines player)))","Boil","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player removeItem 'bnz_waterdirty'; player addItem 'bnz_water';"},
			
        };
    };
	class bnz_waterempty
    {
        interactActions[] = {
            {"surfaceIsWater position player;","Fill","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player removeItem 'bnz_waterempty'; player addItem 'bnz_waterdirty';"},
        };
    };
	class bnz_tent
    {
        interactActions[] = {
            {"true","Unpack","if (alive player) then {player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player removeItem 'bnz_tent'; _tent_spawn = createVehicle ['Land_TentDome_F', position player, [], 0, 'CAN_COLLIDE']; _tent_spawn setDir (direction player); _tent_spawn addAction ['Pack','player playMove ''AinvPknlMstpSlayWrflDnon_medic''; deleteVehicle (_this select 0); _tent_pack = createVehicle [''groundweaponHolder'', position player, [], 0, ''CAN_COLLIDE'']; _tent_pack addMagazineCargoGlobal [''bnz_tent'', 1];'];};"},
        };
    };
	class bnz_sleepingbag
    {
        interactActions[] = {
            {"true","Unpack","if (alive player) then {player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player removeItem 'bnz_sleepingbag'; _sleepingbag_spawn = createVehicle ['Land_Sleeping_bag_F', position player, [], 0, 'CAN_COLLIDE']; _sleepingbag_spawn setDir (direction player); _sleepingbag_spawn addAction ['Pack','player playMove ''AinvPknlMstpSlayWrflDnon_medic''; deleteVehicle (_this select 0); _sleepingbag_pack = createVehicle [''groundweaponHolder'', position player, [], 0, ''CAN_COLLIDE'']; _sleepingbag_pack addMagazineCargoGlobal [''bnz_sleepingbag'', 1];'];};"},
        };
    };
	class bnz_beanzopen
    {
        interactActions[] = {
            {"true","Eat","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [40,0] call fnc_survivemode_eat; player removeItem 'bnz_beanzopen';"},
        };
    };
	class bnz_antibiotics
    {
        interactActions[] = {
            {"true","Take","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [false] call fnc_survivemode_sickness; player removeItem 'bnz_antibiotics'; player setDamage (damage player) + 0.1;"},
        };
    };
	class bnz_canteenfull
    {
        interactActions[] = {
            {"true","Drink","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [0,90] call fnc_survivemode_eat; player removeItem 'bnz_canteenfull'; player addItem 'bnz_canteenempty';"},
        };
    };
	class bnz_canteendirty
    {
        interactActions[] = {
            {"true","Drink","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [0,30] call fnc_survivemode_eat;[true] call fnc_survivemode_sickness; player removeItem 'bnz_canteendirty'; player addItem 'bnz_canteenempty';"},
			{"((count (nearestObjects [player, ['Land_FirePlace_F'], 3]) > 0) && (inflamed (nearestObject [player, 'Land_FirePlace_F'])))","Boil","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player removeItem 'bnz_canteendirty'; player addItem 'bnz_canteenfull';"},
			{"((count (nearestObjects [player, ['Land_Campfire_F'], 3]) > 0) && (inflamed (nearestObject [player, 'Land_Campfire_F'])))","Boil","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player removeItem 'bnz_canteendirty'; player addItem 'bnz_canteenfull';"},
			
        };
    };
	class bnz_canteenempty
    {
        interactActions[] = {
            {"surfaceIsWater position player;","Fill","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player removeItem 'bnz_canteenempty'; player addItem 'bnz_canteendirty';"},
        };
    };
	class bnz_beanz
    {
        interactActions[] = {
            {"'bnz_canopener' in (magazines player)","Open","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; player removeItem 'bnz_beanz'; player addItem 'bnz_beanzopen';"},
        };
    };
	class bnz_cereal
    {
        interactActions[] = {
            {"true","Eat","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [40,0] call fnc_survivemode_eat; player removeItem 'bnz_cereal';"},
        };
    };
	class bnz_rice
    {
        interactActions[] = {
            {"true","Eat","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [40,0] call fnc_survivemode_eat; player removeItem 'bnz_rice';"},
        };
    };
	class bnz_powderedmilk
    {
        interactActions[] = {
            {"true","Eat","player playMove 'AinvPknlMstpSlayWrflDnon_medic'; [10,0] call fnc_survivemode_eat; player removeItem 'bnz_powderedmilk';"},
        };
    };
	class bnz_axe
    {
        interactActions[] = {
            {"true","Use","closeDialog 602; player playMove 'AinvPknlMstpSlayWrflDnon_medic'; execVM '\bnz_inv_items\scripts\fn_weaponmode.sqf'; player removeItem 'bnz_axe';"},
        };
    };
};
