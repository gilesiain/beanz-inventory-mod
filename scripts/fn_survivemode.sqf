player addEventHandler ["InventoryOpened", {
	call fnc_survivemode_progress;
}];
player addEventHandler ["InventoryClosed", {
	call fnc_survivemode_progress;
}];
beanz_hunger = 100;
beanz_thirst = 100;
progress_alive = 0;
got_weapon = false;
drop_weapon = false;


//set hunger/thirst example = [10,100] call fnc_survivemode_eat; ie hunger 10%,thirst 100%
fnc_survivemode_eat ={
params ["_bnz_food","_bnz_drink"];
_var_food = _bnz_food;
_var_drink = _bnz_drink;
_sum_food = _var_food + beanz_hunger;
_sum_drink = _var_drink + beanz_thirst;

if (_sum_food > 100) then {beanz_hunger = 100;};
if (_sum_food < 0) then {beanz_hunger = 0;};
if ((_sum_food <= 100) && (_sum_food >= 0)) then {beanz_hunger = _sum_food;};

if (_sum_drink > 100) then {beanz_thirst = 100;};
if (_sum_drink < 0) then {beanz_thirst = 0;};
if ((_sum_drink <= 100) && (_sum_drink >= 0)) then {beanz_thirst = _sum_drink;};
if (isForcedWalk player) then {player forceWalk false;};
};

//set illness example = [true] call fnc_survivemode_sickness; ie player is sick
fnc_survivemode_sickness ={
params ["_sick_bool"];
if (_sick_bool) then {player setVariable ["bnz_sickness", false]; hint "You are sick"; player forceWalk true;}; //player sick
if !(_sick_bool) then {player setVariable ["bnz_sickness", true]; hint "Feeling better"; player forceWalk false;}; //player not sick
};

fnc_survivemode_progress ={
if (progress_alive == 1) then {
ctrlDelete (uiNamespace getVariable "bnz_hunger_bar");
ctrlDelete (uiNamespace getVariable "bnz_thirst_bar");
ctrlDelete (uiNamespace getVariable "bnz_hunger_text");
ctrlDelete (uiNamespace getVariable "bnz_thirst_text");
progress_alive = 0;
};
_hunger_percent_divide = beanz_hunger / 100;
_thirst_percent_divide = beanz_thirst / 100;
if ((!isNull findDisplay 602) && (progress_alive == 0)) then {
disableSerialization;
with uiNamespace do {     
    bnz_hunger_bar = findDisplay 46 ctrlCreate ["RscProgress", -1];     
    bnz_hunger_bar ctrlSetPosition [ -0.024, 0.96 ];     
    bnz_hunger_bar progressSetPosition _hunger_percent_divide;
    if (_hunger_percent_divide >= 0.3) then {	
        bnz_hunger_bar ctrlSetTextColor [0,0,0,0.7];
	};
	if ((_hunger_percent_divide < 0.3) && (_hunger_percent_divide > 0.1)) then {	
        bnz_hunger_bar ctrlSetTextColor [0.25,0,0,0.7];
	};
	if (_hunger_percent_divide <= 0.1) then {	
        bnz_hunger_bar ctrlSetTextColor [0.5,0,0,0.7];
	};
	bnz_hunger_bar ctrlCommit 0;

    bnz_thirst_bar = findDisplay 46 ctrlCreate ["RscProgress", -1];     
    bnz_thirst_bar ctrlSetPosition [ -0.024, 0.9875 ];     
    bnz_thirst_bar progressSetPosition _thirst_percent_divide;                            
	if (_thirst_percent_divide >= 0.3) then {	
        bnz_thirst_bar ctrlSetTextColor [0,0,0,0.7];
	};
	if ((_thirst_percent_divide < 0.3) && (_thirst_percent_divide > 0.1)) then {	
        bnz_thirst_bar ctrlSetTextColor [0.25,0,0,0.7];
	};
	if (_thirst_percent_divide <= 0.1) then {	
        bnz_thirst_bar ctrlSetTextColor [0.5,0,0,0.7];
	};
    bnz_thirst_bar ctrlCommit 0;
    
    bnz_hunger_text = findDisplay 46 ctrlCreate ["RscText", -1];     
    bnz_hunger_text ctrlSetPosition [ -0.08, 0.953 ];   
    bnz_hunger_text ctrlSetText "   H";    
    bnz_hunger_text ctrlSetTextColor [1,1,1,1];   
    bnz_hunger_text ctrlCommit 0;
    
    bnz_thirst_text = findDisplay 46 ctrlCreate ["RscText", -1];     
    bnz_thirst_text ctrlSetPosition [ -0.079, 0.982 ];   
    bnz_thirst_text ctrlSetText "   T";    
    bnz_thirst_text ctrlSetTextColor [1,1,1,1];   
    bnz_thirst_text ctrlCommit 0;
};
progress_alive = 1;
};
};
execVM "\bnz_inv_items\scripts\fn_surviveloop.sqf";


