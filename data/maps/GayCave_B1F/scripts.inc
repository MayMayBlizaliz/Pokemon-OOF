GayCave_B1F_MapScripts:: @ 822DC5E
	map_script 2, GayCave_B1F_MapScript2_2A8327
	map_script 3, GayCave_B1F_MapScript1_2A8331
	map_script 5, GayCave_B1F_MapScript1_22DC6E
	.byte 0

GayCave_B1F_MapScript1_22DC6E: @ 822DC6E
	setstepcallback 7
	setholewarp MAP_GAY_CAVE_B2F, 255, 0, 0
	end
