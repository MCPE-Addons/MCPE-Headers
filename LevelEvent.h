#pragma once

enum LevelEvent : short {
	SoundClick = 1000,					// 1000
	SoundClickFail,						// 1001
	SoundShoot,							// 1002
	SoundDoorClose,						// 1003
	SoundFizz,							// 1004
	SoundTNTFuse,						// 1005

	SoundGhast = 1007,					// 1007
	SoundBlazeFireball,					// 1008
	SoundGhastFireball,					// 1009
	SoundZombieDoorHit,					// 1010

	SoundZombieBreakDoor = 1012,		// 1012

	SoundBatFly = 1015,					// 1015
	SoundZombieInfect,					// 1016
	SoundZombieHeal,					// 1017
	SoundEndermanTeleport,				// 1018

	SoundAnvilBreak = 1020,				// 1020
	SoundAnvilUse,						// 1021
	SoundAnvilFall,						// 1022

	SoundItemDrop = 1030,				// 1030
	SoundItemThrown,					// 1031

	SoundItemFrameItemAdded = 1040,		// 1040
	SoundItemFramePlaced,				// 1041
	SoundItemFrameRemoved,				// 1042
	SoundItemFrameItemRemoved,			// 1043
	SoundItemFrameItemRotated,			// 1044

	SoundCameraTakePicture = 1050,		// 1050
	SoundExpOrb,						// 1051

	ParticleShoot,						// 2000
	ParticleDestroy,					// 2001
	ParticleSplash,						// 2002
	ParticleEyeDespawn,					// 2003
	ParticleSpawn,						// 2004
	ParticleVillagerHappy,				// 2005

	StartRain = 3001,					// 3001
	StartThunder,						// 3002
	StopRain,							// 3003
	StopThunder,						// 3004

	SoundButtonClick = 3500,			// 3500
	SoundCauldronExplode,				// 3501
	SoundCauldronDyeArmor,				// 3502
	SoundCauldronFillPotion,			// 3503
	SoundCauldronFillWater,				// 3504

	SetData = 4000,						// 4000

	PlayersSleeping = 9800,				// 9800
};