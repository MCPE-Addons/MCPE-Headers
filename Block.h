#pragma once

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>

#include "AABB.h"
#include "CommonTypes.h"
#include "CreativeItemCategory.h"

class BlockSource;
class BlockPos;
class Random;
class Container;
class Vec3;
class Mob;
class ItemInstance;
class Color;
class Material;

static const int UPDATE_NEIGHBORS = 1;

static const int UPDATE_CLIENTS = 2;

static const int UPDATE_INVISIBLE = 4;

static const int UPDATE_IMMEDIATE = 8;

static const int UPDATE_NONE = 4;
static const int UPDATE_ALL = 3;
static const int UPDATE_ALL_IMMEDIATE = 11;

// Size : 120
class Block {
public: 
	// Size : 24
	class SoundType {
	public:
		const float volume;				// 0
		const float pitch;				// 4
		const std::string stepSound;	// 8
		const std::string jumpSound;	// 12
		const std::string breakSound;	// 16
		const std::string placeSound;	// 20

		SoundType(const std::string &, float, float);
		SoundType(const std::string &, const std::string &, float, float);
		SoundType(const std::string &, const std::string &, const std::string &, float, float);

		float getVolume() const;
		float getPitch() const;

		const std::string &getStepSound() const;
		const std::string &getJumpSound() const;
		const std::string &getBreakSound() const;
		const std::string &getPlaceSound() const;
	};

	static const std::string BLOCK_DESCRIPTION_PREFIX;

	static const SoundType SOUND_NORMAL;
	static const SoundType SOUND_WOOD;
	static const SoundType SOUND_GRAVEL;
	static const SoundType SOUND_GRASS;
	static const SoundType SOUND_STONE;
	static const SoundType SOUND_METAL;
	static const SoundType SOUND_GLASS;
	static const SoundType SOUND_CLOTH;
	static const SoundType SOUND_SAND;
	static const SoundType SOUND_SILENT;
	static const SoundType SOUND_ANVIL;
	static const SoundType SOUND_LADDER;
	static const SoundType SOUND_SLIME;
	static const SoundType SOUND_SNOW;

	static Block *mBlocks[];
	static std::unordered_map<std::string, Block *> mBlockLookupMap;
	static Brightness mLightBlock[];
	static float mLightEmission[];
	static std::vector<std::unique_ptr<Block>> mOwnedBlocks;
	static bool mShouldTick[];
	static bool mSolid[];
	static float mTranslucency[];

	static Block *mAcaciaFenceGate;
	static Block *mAcaciaStairs;
	static Block *mActivatorRail;
	static Block *mAir;
	static Block *mAnvil;
	static Block *mBed;
	static Block *mBedrock;
	static Block *mBeetrootCrop;
	static Block *mBirchFenceGate;
	static Block *mBirchStairs;
	static Block *mBookshelf;
	static Block *mBrewingStand;
	static Block *mBrick;
	static Block *mBrickStairs;
	static Block *mBrownMushroom;
	static Block *mBrownMushroomBlock;
	static Block *mCactus;
	static Block *mCake;
	static Block *mCarrotCrop;
	static Block *mCauldron;
	static Block *mChest;
	static Block *mClay;
	static Block *mCoalBlock;
	static Block *mCoalOre;
	static Block *mCobblestone;
	static Block *mCobblestoneWall;
	static Block *mCocoa;
	static Block *mDarkOakFenceGate;
	static Block *mDarkOakStairs;
	static Block *mDaylightDetector;
	static Block *mDaylightDetectorInverted;
	static Block *mDeadBush;
	static Block *mDetectorRail;
	static Block *mDiamondBlock;
	static Block *mDiamondOre;
	static Block *mDirt;
	static Block *mDispenser;
	static Block *mDoublePlant;
	static Block *mDoubleStoneSlab;
	static Block *mDoubleStoneSlab2;
	static Block *mDoubleWoodenSlab;
	static Block *mDropper;
	static Block *mEmeraldBlock;
	static Block *mEmeraldOre;
	static Block *mEnchantingTable;
	static Block *mEndPortalFrame;
	static Block *mEndStone;
	static Block *mFarmland;
	static Block *mFence;
	static Block *mFenceGateOak;
	static Block *mFire;
	static Block *mFlowerPot;
	static Block *mFlowingLava;
	static Block *mFlowingWater;
	static Block *mFurnace;
	static Block *mGlass;
	static Block *mGlassPane;
	static Block *mGlowStone;
	static Block *mGlowingObsidian;
	static Block *mGoldBlock;
	static Block *mGoldOre;
	static Block *mGoldenRail;
	static Block *mGrass;
	static Block *mGrassPathBlock;
	static Block *mGravel;
	static Block *mHardenedClay;
	static Block *mHayBlock;
	static Block *mHeavyWeightedPressurePlate;
	static Block *mHopper;
	static Block *mIce;
	static Block *mInfoReserved6;
	static Block *mInfoUpdateGame1;
	static Block *mInfoUpdateGame2;
	static Block *mInvisibleBedrock;
	static Block *mIronBlock;
	static Block *mIronDoor;
	static Block *mIronFence;
	static Block *mIronOre;
	static Block *mIronTrapdoor;
	static Block *mItemFrame;
	static Block *mJungleFenceGate;
	static Block *mJungleStairs;
	static Block *mLadder;
	static Block *mLapisBlock;
	static Block *mLapisOre;
	static Block *mLeaves;
	static Block *mLeaves2;
	static Block *mLever;
	static Block *mLightWeightedPressurePlate;
	static Block *mLitFurnace;
	static Block *mLitPumpkin;
	static Block *mLitRedStoneLamp;
	static Block *mLitRedStoneOre;
	static Block *mLitRedStoneTorch;
	static Block *mLog;
	static Block *mLog2;
	static Block *mMelon;
	static Block *mMelonStem;
	static Block *mMobSpawner;
	static Block *mMonsterStoneEgg;
	static Block *mMossyCobblestone;
	static Block *mMovingBlock;
	static Block *mMycelium;
	static Block *mNetherBrick;
	static Block *mNetherBrickStairs;
	static Block *mNetherFence;
	static Block *mNetherReactor;
	static Block *mNetherWart;
	static Block *mNetherrack;
	static Block *mNote;
	static Block *mOakStairs;
	static Block *mObserver;
	static Block *mObsidian;
	static Block *mPackedIce;
	static Block *mPiston;
	static Block *mPistonArm;
	static Block *mPodzol;
	static Block *mPortal;
	static Block *mPotatoCrop;
	static Block *mPoweredComparator;
	static Block *mPoweredRepeater;
	static Block *mPumpkin;
	static Block *mPumpkinStem;
	static Block *mQuartzBlock;
	static Block *mQuartzOre;
	static Block *mQuartzStairs;
	static Block *mRail;
	static Block *mRedFlower;
	static Block *mRedMushroom;
	static Block *mRedMushroomBlock;
	static Block *mRedSandstone;
	static Block *mRedSandstoneStairs;
	static Block *mRedStoneDust;
	static Block *mRedStoneOre;
	static Block *mRedstoneBlock;
	static Block *mReeds;
	static Block *mSand;
	static Block *mSandStone;
	static Block *mSandstoneStairs;
	static Block *mSapling;
	static Block *mSign;
	static Block *mSkull;
	static Block *mSlimeBlock;
	static Block *mSnow;
	static Block *mSoulSand;
	static Block *mSponge;
	static Block *mSpruceStairs;
	static Block *mSpuceFenceGate;
	static Block *mStainedClay;
	static Block *mStickyPiston;
	static Block *mStillLava;
	static Block *mStillWater;
	static Block *mStone;
	static Block *mStoneBrick;
	static Block *mStoneBrickStairs;
	static Block *mStoneButton;
	static Block *mStonePressurePlate;
	static Block *mStoneSlab;
	static Block *mStoneSlab2;
	static Block *mStoneStairs;
	static Block *mStonecutterBench;
	static Block *mTNT;
	static Block *mTallgrass;
	static Block *mTopSnow;
	static Block *mTorch;
	static Block *mTrapdoor;
	static Block *mTrappedChest;
	static Block *mTripwire;
	static Block *mTripwireHook;
	static Block *mUnlitRedStoneLamp;
	static Block *mUnlitRedStoneTorch;
	static Block *mUnpoweredComparator;
	static Block *mUnpoweredRepeater;
	static Block *mVine;
	static Block *mWallSign;
	static Block *mWaterlily;
	static Block *mWeb;
	static Block *mWheatCrop;
	static Block *mWoodButton;
	static Block *mWoodPlanks;
	static Block *mWoodPressurePlate;
	static Block *mWoodenDoor;
	static Block *mWoodenDoorAcacia;
	static Block *mWoodenDoorBirch;
	static Block *mWoodenDoorDarkOak;
	static Block *mWoodenDoorJungle;
	static Block *mWoodenDoorSpruce;
	static Block *mWoodenSlab;
	static Block *mWool;
	static Block *mWoolCarpet;
	static Block *mWorkBench;
	static Block *mYellowFlower;

	//vtable for Block						// 0
	unsigned char id;						// 4
	std::string descriptionId;				// 8
	char filler1[76];						// 12
	CreativeItemCategory creativeCategory;	// 88
	char filler2[28];						// 92

	Block(std::string const &, int, Material const &);
	virtual ~Block();
	virtual void tick(BlockSource &, BlockPos const &, Random &);
	virtual void getCollisionShape(AABB &, BlockSource &, BlockPos const &, Entity *);
	virtual bool isObstructingChests(BlockSource &, BlockPos const &);
	virtual void randomlyModifyPosition(BlockPos const &, int &) const;
	virtual void randomlyModifyPosition(BlockPos const &) const;
	virtual void addAABBs(BlockSource &, BlockPos const &, AABB const *, std::vector<AABB> &);
	virtual const AABB &getAABB(BlockSource &, BlockPos const &, AABB &, int, bool, int);
	virtual void addCollisionShapes(BlockSource &, BlockPos const &, AABB const *, std::vector<AABB> &, Entity *);
	virtual bool isCropBlock() const;
	virtual bool isContainerBlock() const;
	virtual bool isCraftingBlock() const;
	virtual bool isInteractiveBlock() const;
	virtual bool isWaterBlocking() const;
	virtual bool isHurtableBlock() const;
	virtual bool isFenceBlock() const;
	virtual bool isStairBlock() const;
	virtual bool isRailBlock() const;
	virtual bool isRedstoneBlock() const;
	virtual bool isRedstoneAttachable() const;
	virtual bool isSignalSource() const;
	virtual void getDirectSignal(BlockSource &, BlockPos const &, int);
	virtual void waterSpreadCausesSpawn() const;
	virtual void handleRain(BlockSource &, BlockPos const &, float) const;
	virtual void getThickness() const;
	virtual void checkIsPathable(Entity &, BlockPos const &, BlockPos const &);
	virtual void dispense(BlockSource &, Container &, int, Vec3 const &, signed char);
	virtual void onPlace(BlockSource &, BlockPos const &);
	virtual void onRemove(BlockSource &, BlockPos const &);
	virtual void onExploded(BlockSource &, BlockPos const &, Entity *);
	virtual void onStepOn(Entity &, BlockPos const &);
	virtual void onFallOn(BlockSource &, BlockPos const &, Entity *, float);
	virtual void onRedstoneUpdate(BlockSource &, BlockPos const &, int, bool);
	virtual void onMove(BlockSource &, BlockPos const &, BlockPos const &);
	virtual void detachesOnPistonMove(BlockSource &, BlockPos const &);
	virtual void onLoaded(BlockSource &, BlockPos const &);
	virtual void getRedstoneProperty(BlockSource &, BlockPos const &);
	virtual void updateEntityAfterFallOn(Entity &);
	virtual void onFertilized(BlockSource &, BlockPos const &, Player *);
	virtual void mayConsumeFertilizer(BlockSource &);
	virtual void mayPick();
	virtual void mayPick(BlockSource &, int, bool);
	virtual void mayPlace(BlockSource &, BlockPos const &, signed char);
	virtual void mayPlace(BlockSource &, BlockPos const &);
	virtual void mayPlaceOn(Block const &);
	virtual void tryToPlace(BlockSource &, BlockPos const &, unsigned char);
	virtual void destroy(BlockSource &, BlockPos const &, int, Entity *);
	virtual void playerWillDestroy(Player &, BlockPos const &, int);
	virtual void neighborChanged(BlockSource &, BlockPos const &, BlockPos const &);
	virtual void getSecondPart(BlockSource &, BlockPos const &, BlockPos &);
	virtual void getResource(Random &, int, int);
	virtual void getResourceCount(Random &, int, int);
	virtual void asItemInstance(BlockSource &, BlockPos const &, int) const;
	virtual void getDestroyProgress(Player &);
	virtual void spawnResources(BlockSource &, BlockPos const &, int, float, int);
	virtual void spawnBurnResources(BlockSource &, float, float, float);
	virtual void getExplosionResistance(Entity *);
	virtual void clip(BlockSource &, BlockPos const &, Vec3 const &, Vec3 const &, bool, int);
	virtual void use(Player &, BlockPos const &);
	virtual void getPlacementDataValue(Mob &, BlockPos const &, signed char, Vec3 const &, int);
	virtual void calcVariant(BlockSource &, BlockPos const &, unsigned char) const;
	virtual void isAttachedTo(BlockSource &, BlockPos const &, BlockPos &);
	virtual void attack(Player *, BlockPos const &);
	virtual void handleEntityInside(BlockSource &, BlockPos const &, Entity *, Vec3 &);
	virtual void entityInside(BlockSource &, BlockPos const &, Entity &);
	virtual void playerDestroy(Player *, BlockPos const &, int);
	virtual void canSurvive(BlockSource &, BlockPos const &);
	virtual void getExperienceDrop(Random &) const;
	virtual void canBeBuiltOver(BlockSource &, BlockPos const &) const;
	virtual void triggerEvent(BlockSource &, BlockPos const &, int, int);
	virtual void getMobToSpawn(BlockSource &, BlockPos const &) const;
	virtual void getMapColor(FullBlock const &) const;
	virtual void getMapColor() const;
	virtual void shouldStopFalling(Entity &);
	virtual void calcGroundFriction(Mob &, BlockPos const &) const;
	virtual void canHaveExtraData() const;
	virtual void hasComparatorSignal();
	virtual void getComparatorSignal(BlockSource &, BlockPos const &, signed char, int);
	virtual void shouldRenderFace(BlockSource &, BlockPos const &, FacingID, AABB const &) const;
	virtual void getIconYOffset() const;
	virtual void buildDescriptionName(ItemInstance const &) const;
	virtual void getColor(int) const;
	virtual void getColor(BlockSource &, BlockPos const &) const;
	virtual void getColor(BlockSource &, BlockPos const &, unsigned char) const;
	virtual void getColorForParticle(BlockSource &, BlockPos const &, int) const;
	virtual void isSeasonTinted(BlockSource &, BlockPos const &) const;
	virtual void prepareRender(BlockSource &, BlockPos const &);
	virtual void onGraphicsModeChanged(bool, bool, bool);
	virtual void getRenderLayer(BlockSource &, BlockPos const &) const;
	virtual void getExtraRenderLayers();
	virtual const AABB &getVisualShape(BlockSource &, BlockPos const &, AABB &, bool);
	virtual const AABB &getVisualShape(DataID, AABB &, bool);
	virtual void getVariant(int) const;
	virtual void getMappedFace(signed char, int) const;
	virtual void animateTick(BlockSource &, BlockPos const &, Random &);
	virtual void getDebugText(std::vector<std::string> &);
	virtual void init();
	virtual bool canBeSilkTouched() const;
	virtual void getSilkTouchItemInstance(unsigned char);
	virtual void setVisualShape(AABB const &);
	virtual void setVisualShape(Vec3 const &, Vec3 const &);
	virtual void setSoundType(SoundType const &);
	virtual void setLightBlock(Brightness);
	virtual void setLightEmission(float);
	virtual void setExplodeable(float);
	virtual void setDestroyTime(float);
	virtual void setFriction(float);
	virtual void setTicking(bool);
	virtual void setMapColor(Color const &);
	virtual void addProperty(BlockProperty);
	virtual void getSpawnResourcesAuxValue(unsigned char);

	void setCategory(CreativeItemCategory);
	std::string &getDescriptionId() const;
	void setSolid(bool);

	static void initBlocks();
};