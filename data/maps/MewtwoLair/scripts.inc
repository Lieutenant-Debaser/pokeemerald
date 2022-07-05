MewtwoLair_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, MewtwoLair_OnResume
	map_script MAP_SCRIPT_ON_LOAD, MewtwoLair_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, MewtwoLair_OnTransition
	.byte 0

@ On resume after Mewtwo battle is completed
MewtwoLair_OnResume::
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MewtwoLair_EventScript_TryRemoveMewtwo
	end

@ Attempt to remove Mewtwo after battle is complete
MewtwoLair_EventScript_TryRemoveMewtwo::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

@ Run on load of map
MewtwoLair_OnLoad::
	specialvar VAR_RESULT, CheckMew
	goto_if_eq VAR_RESULT, FALSE, MewtwoLair_EventScript_HideMewtwo
	goto_if_eq VAR_RESULT, TRUE, MewtwoLair_EventScript_ShowMewtwo
	end

@ Run on transition in cave
MewtwoLair_OnTransition::
	call_if_unset FLAG_DEFEATED_MEWTWO, MewtwoLair_EventScript_ShowMewtwo
	end

@ Ensure Mewtwo appears in the map
MewtwoLair_EventScript_ShowMewtwo::
	clearflag FLAG_HIDE_MEWTWO
	return

@ Hide Mewtwo on the map
MewtwoLair_EventScript_HideMewtwo::
	setflag FLAG_HIDE_MEWTWO
	return

@ Script for Mewtwo object in map
MewtwoLair_EventScript_Mewtwo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_MEWTWO, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MewtwoLair_EventScript_DefeatedMewtwo
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MewtwoLair_EventScript_RanFromMewtwo
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MewtwoLair_EventScript_RanFromMewtwo
	setflag FLAG_DEFEATED_MEWTWO
	release
	end

@ Mewtwo was captured or defeated
MewtwoLair_EventScript_DefeatedMewtwo::
	setflag FLAG_DEFEATED_MEWTWO
	goto Common_EventScript_RemoveStaticPokemon
	end

@ Mewtwo was ran from
MewtwoLair_EventScript_RanFromMewtwo::
	setvar VAR_0x8004, SPECIES_MEWTWO
	goto Common_EventScript_LegendaryFlewAway
	end

@ Braille wall script
MewtwoLair_EventScript_BrailleWall::
	lockall
	braillemsgbox MewtwoLair_Braille_BringTheFirst
	releaseall
	end
