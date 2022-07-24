.set LOCALID_GUARD, 1

EverGrandeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
	.byte 0

EverGrandeCity_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	call_if_unset FLAG_EVERGRANDE_GUARD_MOVED, EverGrandeCity_EventScript_GuardCave
	end


@ Event Scripts
EverGrandeCity_EventScript_SetVisitedEverGrande::
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setvar VAR_TEMP_1, 1
	end

EverGrandeCity_EventScript_GuardCave::
	setobjectxyperm LOCALID_GUARD, 29, 7
	return

EverGrandeCity_EventScript_Obj_CaveGuard::
	lock
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_EventScript_Obj_NoGuardCave
	goto EverGrandeCity_EventScript_Obj_DoGuardCave
	release
	end

EverGrandeCity_EventScript_Obj_NoGuardCave::
	goto_if_unset FLAG_EVERGRANDE_GUARD_MOVED, EverGrandeCity_EventScript_Obj_DoGuardMove
	msgbox EverGrandeCity_Text_NoGuardCave, MSGBOX_DEFAULT
	applymovement LOCALID_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

EverGrandeCity_EventScript_Obj_DoGuardCave::
	msgbox EverGrandeCity_Text_DoGuardCave, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_EventScript_Obj_DoGuardMove::
	applymovement LOCALID_GUARD, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox EverGrandeCity_Text_DoGuardMove, MSGBOX_DEFAULT
	applymovement LOCALID_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_EVERGRANDE_GUARD_MOVED
	release
	end


@ Signs
EverGrandeCity_EventScript_VictoryRoadSign::
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_CitySign::
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_PokemonLeagueSign::
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end


@ Object Movement
EverGrandeCity_Movement_GuardMoveRight:
	walk_right
	step_end


@ Text Strings
EverGrandeCity_Text_EnteringVictoryRoad:
	.string "ENTERING VICTORY ROAD$"

EverGrandeCity_Text_EnteringPokemonLeague:
	.string "ENTERING POKéMON LEAGUE\n"
	.string "CENTER GATE$"

EverGrandeCity_Text_CitySign:
	.string "EVER GRANDE CITY\p"
	.string "“The paradise of flowers, the sea,\n"
	.string "and POKéMON.”$"

EverGrandeCity_Text_DoGuardMove:
	.string "Oh! Hi CHAMPION {PLAYER}{KUN}. There's\n"
	.string "something you might be able to help us\l"
	.string "with.\p"
	.string "You see, there's an AGGRON in this cave\n"
	.string "that's been causing quite a stir of late.\l"
	.string "Normally, one of the ELITE FOUR would have\l"
	.string "dealt with it by now, but, what with all\l"
	.string "the new trainers streaming in, nobody has\l"
	.string "had any time to sort the issue out.\p"
	.string "Maybe, if you've got the time, you might be\n"
	.string "able to handle it. I'll open up the cave and\l"
	.string "let everyone know to stay clear.$"

EverGrandeCity_Text_NoGuardCave:
	.string "The way's all clear! Feel free to explore\n"
	.string "the cave at your leisure.$"

EverGrandeCity_Text_DoGuardCave:
	.string "Sorry kid, no entry. Powerful POKéMON\n"
	.string "are causing a ruckus down in these\l"
	.string "caves, and I've been instructed by the\l"
	.string "ELITE FOUR not to let anyone in.$"
