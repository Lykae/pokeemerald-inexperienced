LilycoveCity_DepartmentStore_3F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins:
	.2byte ITEM_ROTOM_CATALOG
	.2byte ITEM_GRACIDEA
	.2byte ITEM_REVEAL_GLASS
	.2byte ITEM_DNA_SPLICERS
	.2byte ITEM_ZYGARDE_CUBE
	.2byte ITEM_PRISON_BOTTLE
	.2byte ITEM_N_SOLARIZER
	.2byte ITEM_N_LUNARIZER
	.2byte ITEM_REINS_OF_UNITY
	pokemartlistend

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
	.2byte ITEM_BUG_TERA_SHARD
	.2byte ITEM_DARK_TERA_SHARD
	.2byte ITEM_DRAGON_TERA_SHARD
	.2byte ITEM_ELECTRIC_TERA_SHARD
	.2byte ITEM_FAIRY_TERA_SHARD
	.2byte ITEM_FIGHTING_TERA_SHARD
	.2byte ITEM_FIRE_TERA_SHARD
	.2byte ITEM_FLYING_TERA_SHARD
	.2byte ITEM_GHOST_TERA_SHARD
	.2byte ITEM_GRASS_TERA_SHARD
	.2byte ITEM_GROUND_TERA_SHARD
	.2byte ITEM_ICE_TERA_SHARD
	.2byte ITEM_NORMAL_TERA_SHARD
	.2byte ITEM_POISON_TERA_SHARD
	.2byte ITEM_PSYCHIC_TERA_SHARD
	.2byte ITEM_ROCK_TERA_SHARD
	.2byte ITEM_STEEL_TERA_SHARD
	.2byte ITEM_WATER_TERA_SHARD
	pokemartlistend

LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
	.string "For quickly toughening up POKéMON,\n"
	.string "items are the best.\p"
	.string "PROTEIN boosts ATTACK,\n"
	.string "and CALCIUM raises SP. ATK.$"

LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
	.string "I want my POKéMON to have more\n"
	.string "endurance.\p"
	.string "I'm trying to decide whether to raise\n"
	.string "DEFENSE with IRON, or SP. DEF with ZINC.$"

LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
	.string "I gave a CARBOS to my POKéMON,\n"
	.string "and its SPEED went up.$"

