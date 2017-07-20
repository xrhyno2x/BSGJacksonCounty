#include "..\script_macros.hpp"
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Cop Initialization file.
*/

if(!(str(player) in ["cop_99"])) then {
 if((FETCH_CONST(life_coplevel) < 1) && (FETCH_CONST(life_adminlevel) == 0)) then {
 ["NotWhitelisted",false,true] call BIS_fnc_endMission;
 sleep 35;
 };
};

private "_end";
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;

player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
[] execVM "core\welcomecop.sqf";
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.

player setVariable ['copLevel',1];
