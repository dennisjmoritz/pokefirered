NavelRock_Base_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Base_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Base_OnResume
	.byte 0

NavelRock_Base_OnTransition::
	call_if_set FLAG_FOUGHT_LUGIA, NavelRock_Base_EventScript_HideLugia
	call_if_unset FLAG_FOUGHT_LUGIA, NavelRock_Base_EventScript_TryShowLugia
	end

NavelRock_Base_EventScript_HideLugia::
	end
NavelRock_Base_EventScript_TryShowLugia::
	goto_if_set FLAG_LUGIA_FLEW_AWAY, EventScript_Return
	clearflag FLAG_HIDE_LUGIA
	return

NavelRock_Base_OnResume::
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, NavelRock_Base_EventScript_TryRemoveLugia
	end

NavelRock_Base_EventScript_TryRemoveLugia::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
	removeobject LOCALID_NAVEL_ROCK_LUGIA
	return

NavelRock_Base_EventScript_Lugia::
	end
NavelRock_Base_EventScript_DefeatedLugia::
	setflag FLAG_LUGIA_FLEW_AWAY
	setvar VAR_0x8004, SPECIES_LUGIA
	goto EventScript_MonFlewAway
	end

NavelRock_Base_EventScript_RanFromLugia::
	setvar VAR_0x8004, SPECIES_LUGIA
	goto EventScript_MonFlewAway
	end
