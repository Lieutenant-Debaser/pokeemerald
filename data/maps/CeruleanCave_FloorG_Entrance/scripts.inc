CeruleanCave_FloorG_Entrance_MapScripts::
	.byte 0
CeruleanCave_FloorG_Entrance_EventScript_WelcomeSign::
	msgbox CeruleanCave_FloorG_Entrance_Text_WelcomeSign, MSGBOX_SIGN
	end

CeruleanCave_FloorG_Entrance_Text_WelcomeSign:
	.string "DO NOT ENTER!\n"
	.string "Unstable geography!$"

CeruleanCave_FloorG_Entrance_EventScript_BrailleWall::
	lockall
	braillemsgbox CeruleanCave_FloorG_Entrance_Braille_BringTheFirst
	releaseall
	end

CeruleanCave_FloorG_Entrance_Braille_BringTheFirst::
	brailleformat 3, 0, 25, 19, 6, 3
	.braille "HERE THE\n"
	.braille "FIRST AND TWO\n"
	.braille "WILL MEET.$"
