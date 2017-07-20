StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\fn_trafficlights.sqf";
[] execVM "scripts\DynWeather.sqf";

StartProgress = true;

call compile preprocessFileLineNumbers "Taxi\taxi_init.sqf";

DYNAMICMARKET_boughtItems = [];
[player] remoteExec ["TON_fnc_playerLogged",RSERV];

//line added by GamerDF
_seconds = 54400;
diag_log "Set Sunny Weather";
_seconds setOvercast 0;
diag_log "Set Fog Minimal";
_seconds setFog 0;
diag_log "Set Rain";
_seconds setRain 0;
diag_log "Set New Weather Changes to 240min/4Hours";
_seconds = nextWeatherChange;

tf_no_auto_long_range_radio = true
