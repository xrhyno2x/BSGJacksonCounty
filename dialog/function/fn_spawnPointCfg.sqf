/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Master configuration for available spawn points depending on the units side.

	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		_return = [
			["cop_spawn_1","Lakeside Valley PD","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["cop_spawn_2","JC Maximum Security","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_3","JC Sheriff Department","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
			["cop_spawn_4","Los Diablos PD","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"]
		];
	};

	case civilian:
	{
		_return = [
			["civ_spawn_1","Lakeside","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","Los Diablos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Morrison Town","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];

		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");

				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};
	};

	case independent: {
		_return = [
			["medic_spawn_1","Lakeside Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_2","Morrison Regional","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_2","Los Diablos Trauma Center","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;
