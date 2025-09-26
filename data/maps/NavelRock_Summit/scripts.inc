NavelRock_Summit_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Summit_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Summit_OnResume
	.byte 0

NavelRock_Summit_OnTransition::
	call_if_set FLAG_FOUGHT_HO_OH, NavelRock_Summit_EventScript_HideHoOh
	call_if_unset FLAG_FOUGHT_HO_OH, NavelRock_Summit_EventScript_TryShowHoOh
	end

NavelRock_Summit_EventScript_HideHoOh::
	end
NavelRock_Summit_EventScript_TryShowHoOh::
	setvar VAR_TEMP_1, 1
	goto_if_set FLAG_HO_OH_FLEW_AWAY, EventScript_Return
	setvar VAR_TEMP_1, 0
	clearflag FLAG_HIDE_HO_OH
	return

NavelRock_Summit_OnResume::
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, NavelRock_Summit_EventScript_TryRemoveHoOh
	end

NavelRock_Summit_EventScript_TryRemoveHoOh::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
	removeobject LOCALID_NAVEL_ROCK_HO_OH
	return

NavelRock_Summit_EventScript_HoOh::
	end
NavelRock_Summit_EventScript_DefeatedHoOh::
	setflag FLAG_HO_OH_FLEW_AWAY
	setvar VAR_0x8004, SPECIES_HO_OH
	goto EventScript_MonFlewAway
	end

NavelRock_Summit_EventScript_RanFromHoOh::
	setvar VAR_0x8004, SPECIES_HO_OH
	goto EventScript_MonFlewAway
	end

Movement_CameraPanUp:
	walk_up
	walk_up
	walk_up
	step_end

Movement_CameraPanDown:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	step_end

Movement_HoOhApproach:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_down
	delay_16
	delay_16
	step_end

Movement_HoOhAppear:
	delay_16
	delay_16
	walk_in_place_down
	walk_in_place_down
	walk_in_place_down
	walk_in_place_down
	step_end
