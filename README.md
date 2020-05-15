Classnames:

Apple = "bnz_apple"; 
Tinned beanz = "bnz_beanz"; 
Cash/Money = "bnz_cash"; 
JD Whiskey = "bnz_jackoffs"; 
JD Whiskey (empty) = "bnz_jackoffs_emtpy"; 
MRE = "bnz_mre"; 
Knife = "bnz_knife"; 
Meat = "bnz_meat"; 
Raw meat = "bnz_rawmeat"; 

coke can = "bnz_cokecan"; 
sprite can = "bnz_spritecan"; 
vodka = "bnz_vodka"; 
*************************************************************************************************************************************************
*************************************************************************************************************************************************
//How to config your own interactions via 'description.ext'
//The config example *
class Cfg_bnz_interact {
class bnz_jackoffs //the classname of the object you want to interact with here
{
interactActions[] = {
{"alive player","Drink","[0,30] call fnc_survivemode_eat;"}, //{"boolean:
true/false","Button text","what ever script you want here"},
};
};
};
*************************************************************************************************************************************************
class Cfg_bnz_interact {
class bnz_jackoffs
{
interactActions[] = {
{"alive player","Drink","[0,30] call fnc_survivemode_eat;"},
};
};
};
*************************************************************************************************************************************************
//How to add more fuctions/buttons to one item
//Example
class Cfg_bnz_interact {
class bnz_jackoffs
{
interactActions[] = {
{"alive player","Drink0","[0,30] call fnc_survivemode_eat;"},
{"alive player","Drink1","player setdamage 1;"},
{"inflamed (nearestObject [player, 'FirePlace_burning_F'])","Boil","player
removeitem 'bnz_jackoffs'"},
};
};
};
*************************************************************************************************************************************************
*************************************************************************************************************************************************
//Survivemode
//to activate survivemode, from the editor go to modules/others/beanz
survivemode and place it down to start survive mode (hungar/thirts/object
interaction)

//Hunger & thirst
//set hunger/thirst example = [10,100] call fnc_survivemode_eat; ie hunger +
10%,thirst + 100%.

[10,100] call fnc_survivemode_eat;

//Sickness
//set illness example = [true] call fnc_survivemode_sickness; ie player is sick
[true] call fnc_survivemode_sickness;
*************************************************************************************************************************************************
//inbuilt - item interactions.
Knife = Forage in small bushes for fruit (so far only apples, 50% chance of
finding).
cans/bottles = drink.
food = eat (adding tin opener for tinned food so cannot eat beanz yet).
raw meat = stand close to a fire (classname "FirePlace_burning_F") to cook meat,
fire has to be on.
