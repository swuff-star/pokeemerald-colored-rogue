Rogue_Special_Moltres_MapScripts::
	.byte 0


Rogue_Special_TalkMoltres::
	lockall
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
	waitmoncry
	seteventmon SPECIES_MOLTRES, 5
	setflag FLAG_TEMP_1
	special BattleSetup_StartLegendaryBattle
	waitstate
	removeobject 1
	releaseall
	return
