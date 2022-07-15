Route104_Prototype_MapScripts::
	.byte 0

ProtoType_KeyItem_CallBackTest::
	lock
	faceplayer
	fadescreen FADE_TO_BLACK
	closemessage
	special Bag_ChooseKeyItem
	waitstate
	goto_if_eq VAR_ITEM_ID, 0, ProtoType_KeyItem_CancelPicking
	release
	end

ProtoType_KeyItem_CancelPicking::
	msgbox ProtoType_Text_NeverMind, MSGBOX_DEFAULT
	release
	end

ProtoType_Text_NeverMind:
	.string "Oop! Never mind then...$"

ProtoType_EventScript_GiveShinyCharm::
	setextrashinytries 65500
	lockall
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_ZIGZAGOON, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartWildBossBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	releaseall
	end
