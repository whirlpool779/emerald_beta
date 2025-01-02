.set LOCALID_GRUNT_1, 12
.set LOCALID_GRUNT_2, 13
.set LOCALID_GRUNT_3, 14
.set LOCALID_NORMAN, 27

Route121_MapScripts::
	.byte 0

Route121_EventScript_Woman::
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
	end

Route121_EventScript_MtPyrePierSign::
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
	end

Route121_EventScript_SafariZoneSign::
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
	end

Route121_EventScript_AquaGruntsMoveOut::
	lockall
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_1, Route121_Movement_Grunt1Exit
	applymovement LOCALID_GRUNT_2, Route121_Movement_Grunt2Exit
	applymovement LOCALID_GRUNT_3, Route121_Movement_Grunt3Exit
	waitmovement 0
	fadedefaultbgm
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	setvar VAR_ROUTE121_STATE, 1
	releaseall
	end

Route121_Movement_Grunt1Exit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route121_Movement_Grunt2Exit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route121_Movement_Grunt3Exit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route121_EventScript_Vanessa::
	trainerbattle_single TRAINER_VANESSA, Route121_Text_VanessaIntro, Route121_Text_VanessaDefeat
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Walter::
	trainerbattle_single TRAINER_WALTER_1, Route121_Text_WalterIntro, Route121_Text_WalterDefeat, Route121_EventScript_RegisterWalter
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchWalter
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
	release
	end

Route121_EventScript_RegisterWalter::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_WALTER_1
	release
	end

Route121_EventScript_RematchWalter::
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Tammy::
	trainerbattle_single TRAINER_TAMMY, Route121_Text_TammyIntro, Route121_Text_TammyDefeat
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Kate::
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_KateIntro, Route121_Text_KateDefeat, Route121_Text_KateNotEnoughMons
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Joy::
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_JoyIntro, Route121_Text_JoyDefeat, Route121_Text_JoyNotEnoughMons
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Jessica::
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchJessica
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
	release
	end

Route121_EventScript_RegisterJessica::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JESSICA_1
	release
	end

Route121_EventScript_RematchJessica::
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Cale::
	trainerbattle_single TRAINER_CALE, Route121_Text_CaleIntro, Route121_Text_CaleDefeat
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Myles::
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Pat::
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Marcel::
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
	end

Route121_EventScript_Cristin::
	trainerbattle_single TRAINER_CRISTIN_1, Route121_Text_CristinIntro, Route121_Text_CristinDefeat, Route121_EventScript_RegisterCristin
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchCristin
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
	release
	end

Route121_EventScript_RegisterCristin::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CRISTIN_1
	release
	end

Route121_EventScript_RematchCristin::
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
	end

Route121_Text_OkayMoveOutToMtPyre:
	.string "Okay!\n"
	.string "We're to move out to MT. PYRE!$"

Route121_Text_AheadLoomsMtPyre:
	.string "Ahead looms MT. PYRE…\p"
	.string "It is a natural monument to the spirits \n"
	.string "of departed POKéMON…$"

Route121_Text_MtPyrePierSign:
	.string "MT. PYRE PIER\p"
	.string "…The sign is old and worn out.\n"
	.string "The words are barely legible…$"

Route121_Text_SafariZoneSign:
	.string "“Filled with rare POKéMON!”\n"
	.string "SAFARI ZONE$"

Route121_Movement_Norman0:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	step_end

Route121_Movement_Norman1:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route121_Movement_Norman2:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	step_end

Route121_Movement_NormanLeave:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route121_EventScript_NormanTrigger0::
	lockall
	playse SE_PIN
	applymovement LOCALID_NORMAN, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_NORMAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_NORMAN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_NORMAN, Route121_Movement_Norman0
	waitmovement 0
	goto Route121_EventScript_NormanPost
	end

Route121_EventScript_NormanTrigger1::
	lockall
	playse SE_PIN
	applymovement LOCALID_NORMAN, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_NORMAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_NORMAN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_NORMAN, Route121_Movement_Norman1
	waitmovement 0
	goto Route121_EventScript_NormanPost
	end

Route121_EventScript_NormanTrigger2::
	lockall
	playse SE_PIN
	applymovement LOCALID_NORMAN, Common_Movement_FaceLeft
	waitmovement 0
	applymovement LOCALID_NORMAN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_NORMAN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_NORMAN, Route121_Movement_Norman2
	waitmovement 0
	goto Route121_EventScript_NormanPost
	end

Route121_EventScript_NormanPost:
	msgbox Route121_Text_NormanIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_NORMAN_ELITE4, Route121_Text_NormanDefeat
	setvar VAR_NORMAN_STATE, 1
	msgbox Route121_Text_NormanPostBattle, MSGBOX_DEFAULT
	giveitem ITEM_POKEBLOCK_CASE
	call_if_eq VAR_RESULT, FALSE, Route121_EventScript_BagFull
	msgbox Route121_Text_NormanGoodbye, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_NORMAN Route121_Movement_NormanLeave
	waitmovement 0
	removeobject LOCALID_NORMAN
	releaseall
	end

Route121_Text_NormanIntro:
	.string "Why if it isn't {PLAYER}!\p"
	.string "I see you have come a long way on your\n"
	.string "journey.\p"
	.string "While we are both here, what do you say\n"
	.string "for a battle?\p"
	.string "I use to be a gym leader after all, and\n"
	.string "the Pokemon I am training today should\l"
	.string "be at your skill level.\p"
	.string "As your father I am excited to see\n"
	.string "how far your battling skills have come!\p" 
	.string "Now come at me with all you got {PLAYER}!$"

Route121_Text_NormanDefeat:
	.string "Wow {PLAYER}... you have come so far\n"
	.string "in such a short time.$"

Route121_Text_NormanPostBattle:
	.string "That was a great battle {PLAYER}!\p"
	.string "With your level of skill I can see you\n"
	.string "challenging the Pokemon league in no\l"
	.string "time at all.\p"
	.string "Until then I encourage you to keep\n"
	.string "catching more and more Pokemon.\p"
	.string "The Safari Zone is up ahead, I think\n"
	.string "you should visit it.\p"
	.string "I caught a lot of the Pokemon I use\n"
	.string "today there.\p"
	.string "However in order to get in you\n"
	.string "need a {POKEBLOCK} case.\p"
	.string "You have proven yourself in today's\n"
	.string "battle, so take this!$"

Route121_Text_NormanGoodbye:
	.string "Good luck {PLAYER}. I look forward to\n"
	.string "our next battle in the Pokemon league.$"

Route121_EventScript_BagFull:
	msgbox Route121_Text_BagFull, MSGBOX_DEFAULT
	return

Route121_Text_BagFull:
	.string "Ah I see your bag is full. I suggest\n"
	.string "you go to the contest hall in\l"
	.string "Lilycove for another {POKEBLOCK} case.$"
