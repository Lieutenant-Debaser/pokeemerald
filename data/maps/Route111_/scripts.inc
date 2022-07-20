Route111__MapScripts::
    map_script MAP_SCRIPT_ON_LOAD, Route111AnnexCave_OnLoad
    map_script MAP_SCRIPT_ON_TRANSITION, Route111AnnexCave_OnTransition
	.byte 0


Route111AnnexCave_OnLoad::

Route111AnnexCave_OnTransition::
    call_if_unset TRAINER_SQUALLNIXIE1, Route111AnnexCave_EventScript_LoadPeons

Route111AnnexCave_EventScript_LoadPeons::
    clearflag FLAG_EMPTY_ROUTE111CAVE_PEONS
    return


Route111AnnexCave_EventScript_Grunt1::
    trainerbattle_single TRAINER_ANNEXGRUNT_FIRST, Route111AnnexCave_Text_Grunt1Intro, Route111AnnexCave_Text_Grunt1Defeated
    msgbox Route111AnnexCave_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
    end

Route111AnnexCave_EventScript_Grunt2::
    trainerbattle_single TRAINER_ANNEXGRUNT_SECOND, Route111AnnexCave_Text_Grunt2Intro, Route111AnnexCave_Text_Grunt2Defeated
    msgbox Route111AnnexCave_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
    end

Route111AnnexCave_EventScript_Grunt3::
    trainerbattle_single TRAINER_ANNEXGRUNT_THIRD, Route111AnnexCave_Text_Grunt3Intro, Route111AnnexCave_Text_Grunt3Defeated
    msgbox Route111AnnexCave_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
    end

Route111AnnexCave_EventScript_Nixie1::
    msgbox Route111AnnexCave_Text_Nixie1Intro, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_SQUALLNIXIE1, Route111AnnexCave_Text_Nixie1Defeated
    setweather WEATHER_SANDSTORM
    end

Route111AnnexCave_EventScript_TrySpawnNixie1::
    call_if_unset TRAINER_SQUALLNIXIE1, Route111AnnexCave_EventScript_SpawnNixie1
    end

Route111AnnexCave_EventScript_SpawnNixie1::
    clearflag FLAG_HIDE_ROUTE111CAVE_NIXIE
	
Route111AnnexCave_EventScript_CheckOldSeaMap::
    call_if_unset FLAG_ITEM_ROUTE111_ANNEXCAVE_OLDSEAMAP, Route111AnnexCave_EventScript_FindOldSeaMap
    end
    
Route111AnnexCave_EventScript_FindOldSeaMap::
    msgbox Route111AnnexCave_Text_TheresSomethingTucked, MSGBOX_DEFAULT
    giveitem ITEM_OLD_SEA_MAP
    setflag FLAG_ITEM_ROUTE111_ANNEXCAVE_OLDSEAMAP
    clearflag FLAG_HIDE_ROUTE111CAVE_NIXIE
    return

Route111AnnexCave_Text_Grunt1Intro:
    .string "Hey! What are you doing here?! This\n"
    .string "is the hideout of the newly reformed\l"
    .string "TEAM AQUA. You can call us TEAM SQUALL!\p"
    .string "What? Never heard of us? Well, let me\n"
    .string "show you what we're all about!$"

Route111AnnexCave_Text_Grunt1Defeated:
    .string "Oh... Well that's disappointing...$"

Route111AnnexCave_Text_Grunt1PostBattle:
    .string "This defeat means nothing. There are\n"
    .string "plenty more of us to contend with.$"

Route111AnnexCave_Text_Grunt2Intro:
    .string "Don't think you can just waltz in\n"
    .string "without a fight. TEAM SQUALL ain't no\l"
    .string "pushover like those TEAM AQUA guys!$"

Route111AnnexCave_Text_Grunt2Defeated:
    .string "Ouch! Take it easy kid.$"

Route111AnnexCave_Text_Grunt2PostBattle:
    .string "We managed to escape the TEAM AQUA\n"
    .string "hideout right before everything went\l"
    .string "down with KYOGRE.\p"
    .string "Luckily there was an old, forgotten\n"
    .string "submarine that was still seaworthy.$"

Route111AnnexCave_Text_Grunt3Intro:
    .string "Well, what do we have here? A brat\n"
    .string "trying to butt in on TEAM SQUALL's\l"
    .string "affairs?\p"
    .string "I'll put a stop to this real quick.$"

Route111AnnexCave_Text_Grunt3Defeated:
    .string "This kid is trouble. Big trouble.$"

Route111AnnexCave_Text_Grunt3PostBattle:
    .string "Go ahead. Our treasure's what you're\n"
    .string "after isn't it? You've beaten us fair\l"
    .string "and square, so the NUGGET is yours.\p"
    .string "That's the only treasure we have over\n"
    .string "by that rock...$"

Route111AnnexCave_Text_Nixie1Intro:
    .string "Hi$"

Route111AnnexCave_Text_Nixie1Defeated:
    .string "Darn$"
    
Route111AnnexCave_Text_TheresSomethingTucked::
    .string "There's something tucked behind the\n"
    .string "rock...$"
