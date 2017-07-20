/*
	File: fn_welcomeNotification.sqf

	Description:
	Called upon first spawn selection and welcomes our player.
*/
format["BlindSideGaming:",name player] hintC
	[
		parseText "<t color='#00FF00'>Hey there! Welcome to our custom Jackson County! brought to you by BlindSideGaming</t><br/>
		1. Respect each other at all times
		<br/>
		2. <t color='#FF0000'>Make sure you have read the server rules!!!</t>
		<br/>
		Please join our teamspeak 3 <t color='#FFFF00'>ts3.blindsidegaming.com</t>
		<br/>
		website: www.blindsidegaming.com
		<br/>
		"
	];
