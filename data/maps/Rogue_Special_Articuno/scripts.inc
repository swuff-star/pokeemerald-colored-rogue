Rogue_Special_Articuno_MapScripts::
	.byte 0


Rogue_Special_TalkArticuno::
	lockall
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
	waitmoncry
	seteventmon SPECIES_ARTICUNO, 5
	setflag FLAG_TEMP_1
	special BattleSetup_StartLegendaryBattle
	waitstate
	removeobject 1
	releaseall
	return
