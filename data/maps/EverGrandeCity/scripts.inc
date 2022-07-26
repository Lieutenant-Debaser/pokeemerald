EverGrandeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_SYS_WEATHER_CTRL, EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto_if_unset FLAG_EVERGRANDE_GUARD_MOVED, EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	call Common_EventScript_SetAbnormalWeather
	goto EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	call EverGrandeCity_SetGuardPosition
	return


EverGrandeCity_EventScript_SetVisitedEverGrande::
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setvar VAR_TEMP_1, 1
	end


EverGrandeCity_SetGuardPosition::
	setobjectxyperm 1, 29, 7
	return


EverGrandeCity_CaveGuard::
	lock
	applymovement 1, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_unset FLAG_IS_CHAMPION, EverGrandeCity_CaveGuard_2
	goto_if_unset FLAG_EVERGRANDE_GUARD_MOVED, EverGrandeCity_CaveGuard_3
EverGrandeCity_CaveGuard_1:
	release
	end

EverGrandeCity_CaveGuard_2:
	msgbox EverGrandeCity_CaveGuard_Text_0, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	goto EverGrandeCity_CaveGuard_1

EverGrandeCity_CaveGuard_3:
	msgbox EverGrandeCity_CaveGuard_Text_1, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_EVERGRANDE_GUARD_MOVED
	removeobject 1
	fadescreen FADE_FROM_BLACK
	waitmovement 0
	goto EverGrandeCity_CaveGuard_1


EverGrandeCity_EventScript_VictoryRoadSign::
	msgbox EverGrandeCity_EventScript_VictoryRoadSign_Text_0, MSGBOX_SIGN
	return


EverGrandeCity_EventScript_CitySign::
	msgbox EverGrandeCity_EventScript_CitySign_Text_0, MSGBOX_SIGN
	return


EverGrandeCity_EventScript_PokemonLeagueSign::
	msgbox EverGrandeCity_EventScript_PokemonLeagueSign_Text_0, MSGBOX_SIGN
	return


EverGrandeCity_CaveGuard_Text_0:
	.string "Sorry kid, no entry. Powerful POKéMON\n"
	.string "are causing a ruckus down in these\l"
	.string "caves, and I've been instructed by the\l"
	.string "ELITE FOUR not to let anyone in.$"

EverGrandeCity_CaveGuard_Text_1:
	.string "Oh! CHAMPION {PLAYER}{KUN}...\l"
	.string "Could you help with something?\p"
	.string "There's an AGGRON in this cave that's\n"
	.string "been causing quite a stir of late.\l"
	.string "Normally, one of the ELITE FOUR would\l"
	.string "have dealt with it by now, but with all\l"
	.string "the new trainers coming in, they've\l"
	.string "been pretty busy.\p"
	.string "Maybe, if you've got the time, you might\n"
	.string "be able to handle it. I'll leave the\l"
	.string "entrance open for you and let everyone\l"
	.string "know to stay clear.$"

EverGrandeCity_EventScript_VictoryRoadSign_Text_0:
	.string "ENTERING VICTORY ROAD$"

EverGrandeCity_EventScript_CitySign_Text_0:
	.string "“EVER GRANDE CITY\p"
	.string "The paradise of flowers, the sea and\n"
	.string "POKéMON.“$"

EverGrandeCity_EventScript_PokemonLeagueSign_Text_0:
	.string "ENTERING POKéMON LEAGUE\n"
	.string "CENTER GATE$"
