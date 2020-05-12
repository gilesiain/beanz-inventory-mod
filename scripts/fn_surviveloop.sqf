while {true} do {
uiSleep 1;
player forceWalk false;
if ((beanz_hunger <= 0) or (beanz_thirst <= 0)) then {
    beanz_hunger = 0;
    beanz_thirst = 0;
    player setdamage 1;
	};
if ((beanz_hunger <= 30) or (beanz_thirst <= 30)) then {
    if (beanz_hunger <= 35) then {hint "Feeling really hungry";};
	if (beanz_thirst <= 35) then {hint "Feeling really thirsty";};
	player setFatigue 1;
	};
if ((beanz_hunger <= 20) or (beanz_thirst <= 20)) then {
    if (beanz_hunger <= 20) then {hint "Feeling really really hungry";};
	if (beanz_thirst <= 20) then {hint "Feeling really really thirsty";};
	player setFatigue 1;
	player forceWalk true;
	};
if ((beanz_hunger <= 10) or (beanz_thirst <= 10)) then {
    if (beanz_hunger <= 10) then {hint "Dieing from hunger";};
	if (beanz_thirst <= 10) then {hint "Dieing from thirst";};
	player setFatigue 1;
	if (5 > random 50) then {[true] call fnc_survivemode_sickness;};
	};
_bnz_sickness_find = player getVariable ["bnz_sickness", false];
if ((1 > random 1000) && !(_bnz_sickness_find)) then {
    [false] call fnc_survivemode_sickness;
	};
if (beanz_hunger > 0) then {beanz_hunger = beanz_hunger - 0.02;};
if (beanz_thirst > 0) then {beanz_thirst = beanz_thirst - 0.025;};
if ((!isNull findDisplay 602) or (progress_alive == 1)) then {call fnc_survivemode_progress;};
};