.set LOCALID_PHOEBE, 8

MtPyre_1F_MapScripts::
	.byte 0

MtPyre_1F_EventScript_CleanseTagWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
	giveitem ITEM_CLEANSE_TAG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CLEANSE_TAG
	release
	end

MtPyre_1F_EventScript_ReceivedCleanseTag::
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
	release
	end

MtPyre_1F_EventScript_PokefanF::
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
	end

MtPyre_1F_EventScript_Man::
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
	end

MtPyre_1F_Text_TakeThisForYourOwnGood:
	.string "All sorts of beings wander the slopes\n"
	.string "of MT. PYRE…\p"
	.string "There is no telling what may happen.\n"
	.string "Take this. It's for your own good.$"

MtPyre_1F_Text_ExplainCleanseTag:
	.string "Have a POKéMON hold that\n"
	.string "CLEANSE TAG.\p"
	.string "It will help ward off wild POKéMON.$"

MtPyre_1F_Text_ComeToPayRespects:
	.string "Did you come to pay your respect\n"
	.string "to the spirits of departed POKéMON?\p"
	.string "You must care for your POKéMON a lot.$"

MtPyre_1F_Text_RestingPlaceOfZigzagoon:
	.string "This is the final resting place of my\n"
	.string "ZIGZAGOON. I cherished it…$"

MtPyre_1F_Poochyena_Text:
	.string "Grrrr!$"

MtPyre_1F_EventScript_MagmaPoochyena::
	msgbox MtPyre_1F_Poochyena_Text, MSGBOX_SIGN
	end

MtPyre_1F_Dusclops_Text:
	.string "Dusc!$"

MtPyre_1F_EventScript_PhoebeDusclops::
	msgbox MtPyre_1F_Dusclops_Text, MSGBOX_SIGN
	end

MtPyre_1F_Text_Phoebe:
	.string "I'll take care of these Magma holligans.\n"
	.string "Why don't you go ahead and take care of\l"
	.string "the Aqua ones outside!$"


MtPyre_1F_EventScript_PhoebeTrigger::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_PHOEBE, Common_Movement_FaceDown
	waitmovement 0
	msgbox MtPyre_1F_Text_Phoebe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PHOEBE, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_PHOEBE_STATE, 1
	release
	end

MtPyre_1F_EventScript_PhoebePostTrigger::
	lock
	applymovement LOCALID_PHOEBE, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MtPyre_1F_Text_Phoebe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PHOEBE, Common_Movement_FaceUp
	waitmovement 0
	release
	end
