BattleFrontier_GemShop_MapScripts::
	.byte 0
	
BattleFrontier_GemShop_EventScript_Clerk::
    lock
    faceplayer
    message gText_HowMayIServeYou
    waitmessage
    pokemart BattleFrontier_Mart_GemShop
    msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
    release
    end
    
BattleFrontier_GemShop_EventScript_ConsultationClerk::
    lock
    faceplayer
    msgbox BattleFrontier_GemShop_Text_WeOfferConsultations, MSGBOX_DEFAULT
    release
    end
    
BattleFrontier_GemShop_EventScript_ConsultingNPC::
    lock
    faceplayer
    msgbox BattleFrontier_GemShop_Text_ItsSoDifficult, MSGBOX_DEFAULT
    release
    end
    
BattleFrontier_GemShop_EventScript_WaitingNPC::
    lock
    faceplayer
    msgbox BattleFrontier_GemShop_Text_IFoundThisMoonStone, MSGBOX_DEFAULT
    release
    end
    
BattleFrontier_GemShop_EventScript_DebatingNPC::
    lock
    faceplayer
    msgbox BattleFrontier_GemShop_Text_IveRaisedGLOOM, MSGBOX_DEFAULT
    release
    end

    .align 2	
BattleFrontier_Mart_GemShop:
    .2byte ITEM_WATER_STONE
    .2byte ITEM_THUNDER_STONE
    .2byte ITEM_FIRE_STONE
    .2byte ITEM_LEAF_STONE
    .2byte ITEM_MOON_STONE
    .2byte ITEM_SUN_STONE
    .2byte ITEM_EVERSTONE
    .2byte ITEM_NONE
    release
    end
    
BattleFrontier_GemShop_Text_WeOfferConsultations:
    .string "We offer free consultations for all of\n"
    .string "our customers! It's very important for\l"
    .string "everyone to be happy with what\l"
    .string "a POKéMON evolves into.$"
    
BattleFrontier_GemShop_Text_ItsSoDifficult:
    .string "It's so difficult picking out what I\n"
    .string "want EEVEE to evolve into.\p"
    .string "VAPOREON, JOLTEON, FLAREON. Agh!\n"
    .string "There's just too many choices!$"

BattleFrontier_GemShop_Text_IFoundThisMoonStone:
    .string "I found this MOON STONE at METEOR\n"
    .string "FALLS, and I'm here to see what I can\l"
    .string "evolve with it.$"
    
BattleFrontier_GemShop_Text_IveRaisedGLOOM:
    .string "I've raised GLOOM since it was a tiny\n"
    .string "ODDISH, and I think it's finally ready\l"
    .string "for evolution.\p"
    .string "Now, should I use a SUN STONE or a\n"
    .string "LEAF STONE...$"

