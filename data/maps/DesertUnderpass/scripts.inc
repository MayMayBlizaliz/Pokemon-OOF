DesertUnderpass_MapScripts:: @ 823AF37
	map_script 3, DesertUnderpass_MapScript1_23AF3D
	.byte 0

DesertUnderpass_MapScript1_23AF3D: @ 823AF3D
	setflag FLAG_LANDMARK_DESERT_UNDERPASS
	end

DesertUnderpass_EventScript_23AF41:: @ 823AF41
	lock
	faceplayer
	checkflag FLAG_0x14F
	goto_eq DesertUnderpass_EventScript_23AF57
	checkflag FLAG_0x150
	goto_eq DesertUnderpass_EventScript_23AF68
	release
	end

DesertUnderpass_EventScript_23AF57:: @ 823AF57
	giveitem_std ITEM_CLAW_FOSSIL
	removeobject 1
	release
	end

DesertUnderpass_EventScript_23AF68:: @ 823AF68
	giveitem_std ITEM_ROOT_FOSSIL
	removeobject 1
	release
	end

DesertUnderpass_Text_23AF79:: @ 823AF79
	.string "{PLAYER} found the ROOT FOSSIL.$"

DesertUnderpass_Text_23AF93:: @ 823AF93
	.string "{PLAYER} found the CLAW FOSSIL.$"

