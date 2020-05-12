execVM "\bnz_inv_items\scripts\fn_survivemode.sqf";
missionNamespace setVariable ["s_mode",1];
waitUntil {!isNil "fnc_display_find"};
call fnc_display_find;