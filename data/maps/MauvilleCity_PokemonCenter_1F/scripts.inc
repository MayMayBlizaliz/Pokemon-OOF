MauvilleCity_PokemonCenter_1F_MapScripts:: @ 8210E5B
	map_script 3, MauvilleCity_PokemonCenter_1F_MapScript1_210E66
	map_script 5, MauvilleCity_PokemonCenter_1F_MapScript1_277C30
	.byte 0

MauvilleCity_PokemonCenter_1F_MapScript1_210E66: @ 8210E66
	setrespawn 5
	call MauvilleCity_PokemonCenter_1F_EventScript_2718DE
	goto MauvilleCity_PokemonCenter_1F_EventScript_210E74
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E74:: @ 8210E74
	special ScrSpecial_SetMauvilleOldManEventObjGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E78:: @ 8210E78
	setvar VAR_0x800B, 1
	call MauvilleCity_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E86:: @ 8210E86
	msgbox MauvilleCity_PokemonCenter_1F_Text_210EA1, 2
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E8F:: @ 8210E8F
	msgbox MauvilleCity_PokemonCenter_1F_Text_210F06, 2
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E98:: @ 8210E98
	msgbox MauvilleCity_PokemonCenter_1F_Text_210F8A, 2
	end

MauvilleCity_PokemonCenter_1F_Text_210EA1: @ 8210EA1
	.string "That man over there, he says weird\n"
	.string "things!\p"
	.string "He’s funny in a weird way.\n"
	.string "I doubt I’ll forget about him!$"

MauvilleCity_PokemonCenter_1F_Text_210F06: @ 8210F06
	.string "Did you hear the rumor that Rick\n"
	.string " Astley is actually Red’s former\p"
	.string " Gastly that Red abandonned... \n" 
	.string "Eux... I mean that he left at \p" 
	.string "the Day Care in Kanto for over \n"
	.string "4 years alone... And lonely...\p" 
	.string " Without visiting him once...\l" 
	.string "I mean Red will never gonna give\n" 
	.string " his POKéMON up, because we all\p" 
	.string " know that Red is the most \n" 
	.string "perfect trainer in POKéMON.\l" 
	.string "Right? \l" 
	.string "RIGHT??? \l"  		
	.string "PLEASE TELL ME I AM RIGHT???$" 
	
MauvilleCity_PokemonCenter_1F_Text_210F8A: @ 8210F8A
	.string "Sorry, just ignore what the other\n"
	.string "NPC said. Rick is definitely not \l"
	.string "not a Gastly and not Red’s one \n"
	.string "because we all know that Red will\l"
	.string " never gonna give his POKéMON up.$"

