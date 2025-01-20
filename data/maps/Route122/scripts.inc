.set LOCALID_PHOEBE, 1

Route122_MapScripts::
	.byte 0

Route122_Text_PhoebeIntro:
	.string "Oh my, hello! Please forgive me for\n"
	.string "blocking your way like this.\p"
	.string "I heard reports that Team Aqua and\n"
	.string "Team Magma were here to steal the\l"
	.string "red and blue orbs.\p"
	.string "My name is PHOEBE of the Elite Four.\p"
	.string "I grew up communing with the spirits\n"
	.string "here on Mt. Pyre. And you are?\p"
	.string "Oh my, you are {PLAYER}, Norman's kid!\p"
	.string "And you say you are here to\n"
	.string "stop Team Aqua and Magma as well?\p"
	.string "That is great!, let's not waste\n"
	.string "any time and go stop them!$"

Route122_Movement_PhoebeEnter:
	walk_up
	step_end

Route122_EventScript_Phoebe::
	lockall
	playse SE_PIN
	applymovement LOCALID_PHOEBE, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_PHOEBE, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route122_Text_PhoebeIntro, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PHOEBE Route122_Movement_PhoebeEnter
	waitmovement 0
	removeobject LOCALID_PHOEBE
	releaseall
	end
