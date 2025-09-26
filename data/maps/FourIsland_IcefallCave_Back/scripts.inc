FourIsland_IcefallCave_Back_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_Back_OnTransition
	.byte 0

FourIsland_IcefallCave_Back_OnTransition::
	call_if_eq VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1, FourIsland_IcefallCave_Back_EventScript_HideLorelei
	end

FourIsland_IcefallCave_Back_EventScript_HideLorelei::
	end
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene::
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_45, FourIsland_IcefallCave_Back_Text_GruntDefeat
	end
FourIsland_IcefallCave_Back_Movement_PlayerToRockets::
	walk_up
	walk_up
	walk_right
	walk_up
	step_end

FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit::
	delay_16
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_in_place_faster_down
	step_end

FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown::
	walk_in_place_down
	step_end

FourIsland_IcefallCave_Back_Movement_UnusedPushRight::
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat::
	walk_in_place_fast_down
	step_end

FourIsland_IcefallCave_Back_Movement_Rocket1Exit::
	walk_right
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

FourIsland_IcefallCave_Back_Movement_Rocket2Exit::
	delay_16
	walk_left
	walk_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

FourIsland_IcefallCave_Back_Movement_Rocket3Exit::
	delay_16
	walk_down
	delay_16
	walk_down
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei::
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

FourIsland_IcefallCave_Back_Movement_UnusedWalkLeft::
	walk_left
	walk_left
	step_end

FourIsland_IcefallCave_Back_Movement_LoreleiToRockets::
	walk_left
	walk_up
	step_end

FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp::
	walk_in_place_up
	step_end

FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit::
	delay_8
	walk_in_place_faster_right
	delay_16
	delay_16
	walk_in_place_faster_down
	step_end

FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer::
	walk_right
	step_end

FourIsland_IcefallCave_Back_EventScript_Lorelei::
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful, MSGBOX_NPC
	end
