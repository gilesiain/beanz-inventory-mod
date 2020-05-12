fnc_item_menu = {
params ["_mouse"];
    _all=_this;
	_idc = ctrlIDC (_mouse select 0);
    _selectedIndex = _mouse select 1;
    _data = format ["%1",lbData [_idc, _selectedIndex]];
	_interact_config = [(configFile >> "Cfgiteminteract" >> _data),"interactActions",[]] call BIS_fnc_returnConfigEntry;
	_interact_missionfile = [(missionConfigFile >> "Cfg_bnz_interact" >> _data),"interactActions",[]] call BIS_fnc_returnConfigEntry;
	_interactactions = [];
	
	if !(_interact_config isEqualTo []) then 
	{
	    {
		_x params ["_bool_code","_btn_text","_btn_code"];
		_bool_c = call compile format ["%1",_bool_code];
	        if (_bool_c) then 
			{
			    _array_c = [_btn_text,_btn_code];
				_interactactions = _interactactions + [_array_c];
			};
		}forEach _interact_config;
	};
	if !(_interact_missionfile isEqualTo []) then
	{
	    {
		_x params ["_bool_code","_btn_text","_btn_code"];
	    _bool_m = call compile format ["%1",_bool_code];
	        if (_bool_m) then 
			{
				_array_m = [_btn_text,_btn_code];
				_interactactions = _interactactions + [_array_m];
			};
		}forEach _interact_missionfile;
	};

	if !(_interactActions isEqualTo []) then {
        _display = ctrlParent (_mouse select 0);
        _pos = getMousePosition;

        _control = _display ctrlCreate ["RscControlsGroupNoScrollbars", 5678910];
        uiNamespace setVariable ["bnz_active_button_control", _control];

        _control ctrlSetPosition [(_pos select 0)-0.03,(_pos select 1)-0.03,1,1];
        _control ctrlCommit 0;

        _bg = _display ctrlCreate ["RscButtonTextOnly", 12349,_control];
        _bg ctrlSetPosition [0,0,1,1];
        _bg ctrlCommit 0;
        _bg ctrlAddEventHandler ["MouseEnter",{
            _activeControl = uiNamespace getVariable ["bnz_active_button_control", controlNull];
            if !(isNull _activeControl) then {
                _activeControl ctrlShow false;
            };
        }];

        _buffer = _display ctrlCreate ["RscButtonTextOnly", 12345,_control];
        _buffer ctrlSetPosition [0.02,0.02,0.25,0.0625 + (0.0625 * (count _interactActions))];
        _buffer ctrlAddEventHandler ["ButtonClick",{
            _activeControl = uiNamespace getVariable ["bnz_active_button_control", controlNull];
            if !(isNull _activeControl) then {
                _activeControl ctrlShow false;
            };
        }];

        _buffer ctrlCommit 0;

        _y2d = 0.06;
        _btn_arr = [];
        _start_idc = 12346;
        {
            _x params ["_btn_text","_btn_code"];
            _button_gen = _display ctrlCreate ["RscButtonMenu", _start_idc,_control];
            _start_idc = _start_idc + 1;
            _button_gen ctrlSetPosition [0.06,_y2d,0.20,0.06];
            _button_gen ctrlSetText _btn_text;
            _button_gen ctrlCommit 0;
            _button_gen ctrlAddEventHandler ["ButtonClick",_btn_code + "(uiNamespace getVariable ['bnz_active_button_control', controlNull]) ctrlShow false;"];
            _y2d = _y2d + 0.0625;
            _btn_arr pushBack _button_gen;
        } forEach _interactActions;

        reverse _btn_arr;
        uiNamespace setVariable ["bnz_active_controls", ([_control,_bg,_buffer] + _btn_arr) ];
        {ctrlSetFocus _x} forEach (uiNamespace getVariable ["bnz_active_controls", []]);
    };

};

fnc_display_find = {
_modeswitch = missionNamespace getVariable ["s_mode",0];
if (_modeswitch == 1) then {
waitUntil {(!isNull findDisplay 602)};
        if (!isNull findDisplay 602) then {
            disableSerialization;
            _display = findDisplay 602;
            {
                _container = _display displayCtrl _x;
                _container ctrlAddEventHandler ["LBDblClick",format["[_this,%1] call fnc_item_menu;",_x]];
            } forEach [619,633,638];
		waitUntil {(isNull findDisplay 602)};
		call fnc_display_find;
		};
	};
};





















