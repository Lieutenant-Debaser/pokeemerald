Route111__MapScripts::
	.byte 0

Route111AnnexCave_EventScript_Grunt1::
    trainerbattle_single TRAINER_ANNEXGRUNT_FIRST, Route111AnnexCave_Text_Grunt1Intro, Route111AnnexCave_Text_Grunt1Defeated
    msgbox Route111AnnexCave_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
    end

Route111AnnexCave_EventScript_Grunt2::
    end

Route111AnnexCave_EventScript_Grunt3::
    end
	
Route111AnnexCave_EventScript_CheckOldSeaMap::
    call_if_unset FLAG_ITEM_ROUTE111_ANNEXCAVE_OLDSEAMAP, Route111AnnexCave_EventScript_FindOldSeaMap
    end
    
Route111AnnexCave_EventScript_FindOldSeaMap::
    msgbox Route111AnnexCave_Text_TheresSomethingTucked, MSGBOX_DEFAULT
    giveitem ITEM_OLD_SEA_MAP
    setflag FLAG_ITEM_ROUTE111_ANNEXCAVE_OLDSEAMAP
    return

Route111AnnexCave_Text_Grunt1Intro:
    .string "Hey! What are you doing here?! This\n"
    .string "is the hideout of the newly reformed\n"
    .string "TEAM AQUA. You can call us TEAM SQUALL!\p"
    .string "What? Never heard of us? Well, let me\n"
    .string "show you what we're all about!$"

Route111AnnexCave_Text_Grunt1Defeated:
    .string "Oh... well that's disappointing...$"

Route111AnnexCave_Text_Grunt1PostBattle:
    .string "This defeat means nothing. There are\n"
    .string "plenty more of us to contend with.$"
    
Route111AnnexCave_Text_TheresSomethingTucked::
    .string "There's something tucked behind the\n"
    .string "rock...$"
