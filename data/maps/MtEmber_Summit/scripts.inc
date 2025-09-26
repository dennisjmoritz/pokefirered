MtEmber_Summit_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Summit_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, MtEmber_Summit_OnResume
	.byte 0

MtEmber_Summit_OnResume::
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, MtEmber_Summit_EventScript_TryRemoveMoltres
	end

MtEmber_Summit_EventScript_TryRemoveMoltres::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
	removeobject VAR_LAST_TALKED
	return

MtEmber_Summit_OnTransition::
	call_if_unset FLAG_FOUGHT_MOLTRES, MtEmber_Summit_EventScript_ShowMoltres
	end

MtEmber_Summit_EventScript_ShowMoltres::
	clearflag FLAG_HIDE_MOLTRES
	return

MtEmber_Summit_EventScript_Moltres::
	setwildbattle SPECIES_MOLTRES, 50
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
	waitmoncry
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
	end
MtEmber_Summit_EventScript_DefeatedMoltres::
	setflag FLAG_FOUGHT_MOLTRES
	goto EventScript_RemoveStaticMon
	end

MtEmber_Summit_EventScript_RanFromMoltres::
	setvar VAR_0x8004, SPECIES_MOLTRES
	goto EventScript_MonFlewAway
	end
