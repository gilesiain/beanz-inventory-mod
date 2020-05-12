if ((currentWeapon player == "") && (!got_weapon)) then {
sleep 0.5;
    got_weapon = true;
    axe_bnz  = createVehicle ["Land_Axe_F", position player, [], 0, "CAN_COLLIDE"];	
    axe_bnz  attachTo [player,[-0.01,0.12,0.005],"rightHandMiddle1"];
	axe_bnz  setDir 90;
    axe_bnz  setVectorUp[-12,-0.0,1];
	tool_dropaction = player addAction ["Drop axe",{_axe_drop = createVehicle ['groundweaponHolder', position player, [], 0,'CAN_COLLIDE']; _axe_drop addMagazineCargoGlobal ["bnz_axe", 1]; drop_weapon = true;}];
	use_axe_EH = (findDisplay 46) displayAddEventHandler ["MouseButtonDown",{
	    if (vehicle player == player) then {
	        if ((count (nearestTerrainObjects [player, ["TREE","SMALL TREE"], 8]) > 0) && (60 > random 100)) then {
			    _axe_wood = createVehicle ["groundweaponHolder", position player, [], 0,"CAN_COLLIDE"]; 
				_axe_wood addMagazineCargoGlobal ["bnz_wood", 1];
				playSound3D ["A3\missions_f\data\sounds\click.wss", player];
	        };
			player setAnimSpeedCoef 0.85;
			player playMove "AwopPercMstpSgthWnonDnon_end";
		};
	}];
while {got_weapon} do {
sleep 0.1;
if (drop_weapon) then {
    deleteVehicle axe_bnz ;
    player removeAction tool_dropaction; 
    (findDisplay 46) displayRemoveEventHandler ["MouseButtonDown",use_axe_EH];
	got_weapon = false;
	drop_weapon = false;
};
if (currentWeapon player != "") then {
	deleteVehicle axe_bnz ;
	player addItem 'bnz_axe';
	player removeAction tool_dropaction; 
	(findDisplay 46)displayRemoveEventHandler["MouseButtonDown",use_axe_EH];
	got_weapon = false;
};
if (vehicle player != player) then {
axe_bnz hideObjectGlobal true;
};
if (vehicle player == player) then {
axe_bnz hideObjectGlobal false;
};
};
};