Route111__MapScripts::
	.byte 0
	
Route111AnnexCave_EventScript_CheckOldSeaMap::
    call_if_unset FLAG_ITEM_ROUTE111_ANNEXCAVE_OLDSEAMAP, Route111AnnexCave_EventScript_FindOldSeaMap
    end
    
Route111AnnexCave_EventScript_FindOldSeaMap::
    msgbox Route111AnnexCave_Text_TheresSomethingTucked, MSGBOX_DEFAULT
    giveitem ITEM_OLD_SEA_MAP
    setflag FLAG_ITEM_ROUTE111_ANNEXCAVE_OLDSEAMAP
    return
    
Route111AnnexCave_Text_TheresSomethingTucked::
    .string "There's something tucked behind the\n"
    .string "rock...$"
