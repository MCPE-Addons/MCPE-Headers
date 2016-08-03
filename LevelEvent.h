#pragma once

enum LevelEvent : short {
	SoundClick = 1000,				// 1000
	SoundClickFail,					// 1001
	SoundShoot,						// 1002
	SoundDoorClose,					// 1003
	SoundFizz,						// 1004
	SoundTNTFuse,					// 1005
	
	SoundGhast = 1007,				// 1007
	SoundBlazeFireball,				// 1008
	SoundGhastFireball,				// 1009
	SoundZombieDoorHit,				// 1010
	
	SoundZombieBreakDoor = 1012,	// 1012
	
	SoundBatFly = 1015,				// 1015
	SoundZombieInfect,				// 1016
	SoundZombieHeal,				// 1017
	SoundEndermanTeleport,			// 1018
	
	SoundAnvilBreak = 1020,			// 1020
};