GayCave_1F_EventObjects: @ 85343BC
	object_event 1, EVENT_OBJ_GFX_HIKER, 0, 36, 9, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, GayCave_1F_EventScript_22DA5E, 0
	object_event 2, EVENT_OBJ_GFX_ITEM_BALL, 0, 17, 7, 3, MOVEMENT_TYPE_FACE_DOWN, 0, 0, 0, 0, GayCave_1F_EventScript_291150, 1050

GayCave_1F_MapWarps: @ 85343EC
	warp_def 37, 12, 3, 0, MAP_ROUTE106
	warp_def 35, 3, 3, 0, MAP_GAY_CAVE_B1F
	warp_def 17, 11, 3, 1, MAP_GAY_CAVE_B1F
	warp_def 5, 10, 3, 0, MAP_GAY_CAVE_STEVENS_ROOM

GayCave_1F_MapEvents:: @ 853440C
	map_events GayCave_1F_EventObjects, GayCave_1F_MapWarps, 0x0, 0x0
