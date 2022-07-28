FerriteCaveG_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, FerriteCaveG_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

FerriteCaveG_MapScripts_MAP_SCRIPT_ON_RESUME:
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, FerriteCaveG_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

FerriteCaveG_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_ne FerriteCaveG_MapScripts_MAP_SCRIPT_ON_RESUME_4
	removeobject 1
FerriteCaveG_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	return

FerriteCaveG_MapScripts_MAP_SCRIPT_ON_RESUME_4:
	call Common_EventScript_NopReturn
	goto FerriteCaveG_MapScripts_MAP_SCRIPT_ON_RESUME_3


WildBoss_Aggron::
	lockall
	setextrashinytries 166
	waitse
	playmoncry SPECIES_AGGRON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_AGGRON, 60
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartWildBossBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	switch VAR_RESULT
	case B_OUTCOME_WON, WildBoss_Aggron_3
	case B_OUTCOME_RAN, WildBoss_Aggron_4
	case B_OUTCOME_PLAYER_TELEPORTED, WildBoss_Aggron_4
WildBoss_Aggron_1:
	setflag FLAG_HIDE_FERRITE_CAVE_AGGRON
	releaseall
	end

WildBoss_Aggron_3:
	goto Common_EventScript_RemoveStaticPokemon
	goto WildBoss_Aggron_1

WildBoss_Aggron_4:
	setvar VAR_0x8004, SPECIES_AGGRON
	goto Common_EventScript_LegendaryFlewAway
	goto WildBoss_Aggron_1

