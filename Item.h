#pragma once

#include <string>
#include <memory>

#include "json/json.h"
#include "CommonTypes.h"
#include "CreativeItemCategory.h"
#include "TextureUVCoordinateSet.h"
#include "FoodItemComponent.h"
#include "SeedItemComponent.h"
#include "Random.h"

class ItemInstance;
class Player;
class Entity;
class Mob;
class Block;
class Level;
class BlockSource;
class Container;
class Vec3;
class IDataInput;
class IDataOutput;
class UseAnimation;

class Item {
public: 
	static Item *mApple;
	static Item *mApple_enchanted;
	static Item *mApple_gold;
	static Item *mArrow;
	static Item *mBed;
	static Item *mBeef_cooked;
	static Item *mBeef_raw;
	static Item *mBeetroot;
	static Item *mBeetrootSoup;
	static Item *mBlazePowder;
	static Item *mBlazeRod;
	static Item *mBoat;
	static Item *mBone;
	static Item *mBook;
	static Item *mBoots_chain;
	static Item *mBoots_cloth;
	static Item *mBoots_diamond;
	static Item *mBoots_gold;
	static Item *mBoots_iron;
	static Item *mBow;
	static Item *mBowl;
	static Item *mBread;
	static Item *mBrewing_stand;
	static Item *mBrick;
	static Item *mBucket;
	static Item *mCake;
	static Item *mCarrot;
	static Item *mCarrotOnAStick;
	static Item *mCauldron;
	static Item *mChestMinecart;
	static Item *mChestplate_chain;
	static Item *mChestplate_cloth;
	static Item *mChestplate_diamond;
	static Item *mChestplate_gold;
	static Item *mChestplate_iron;
	static Item *mChicken_cooked;
	static Item *mChicken_raw;
	static Item *mClay;
	static Item *mClock;
	static Item *mCoal;
	static Item *mComparator;
	static Item *mCompass;
	static Item *mCookie;
	static Item *mDiamond;
	static Item *mDiamondHorseArmor;
	static Item *mDoor_acacia;
	static Item *mDoor_birch;
	static Item *mDoor_darkoak;
	static Item *mDoor_iron;
	static Item *mDoor_jungle;
	static Item *mDoor_spruce;
	static Item *mDoor_wood;
	static Item *mDye_powder;
	static Item *mEgg;
	static Item *mEmerald;
	static Item *mEmptyMap;
	static Item *mEnchanted_book;
	static Item *mEnderpearl;
	static Item *mExperiencePotionItem;
	static Item *mFeather;
	static Item *mFermented_spider_eye;
	static Item *mFilledMap;
	static Item *mFireCharge;
	static Item *mFish_cooked_cod;
	static Item *mFish_cooked_salmon;
	static Item *mFish_raw_clownfish;
	static Item *mFish_raw_cod;
	static Item *mFish_raw_pufferfish;
	static Item *mFish_raw_salmon;
	static Item *mFishingRod;
	static Item *mFlint;
	static Item *mFlintAndSteel;
	static Item *mFlowerPot;
	static Item *mGhast_tear;
	static Item *mGlass_bottle;
	static Item *mGoldHorseArmor;
	static Item *mGoldIngot;
	static Item *mGold_nugget;
	static Item *mGoldenCarrot;
	static Item *mHatchet_diamond;
	static Item *mHatchet_gold;
	static Item *mHatchet_iron;
	static Item *mHatchet_stone;
	static Item *mHatchet_wood;
	static Item *mHelmet_chain;
	static Item *mHelmet_cloth;
	static Item *mHelmet_diamond;
	static Item *mHelmet_gold;
	static Item *mHelmet_iron;
	static Item *mHoe_diamond;
	static Item *mHoe_gold;
	static Item *mHoe_iron;
	static Item *mHoe_stone;
	static Item *mHoe_wood;
	static Item *mHopper;
	static Item *mHopperMinecart;
	static Item *mIronHorseArmor;
	static Item *mIronIngot;
	static Item *mItemFrame;
	static Item *mLead;
	static Item *mLeather;
	static Item *mLeatherHorseArmor;
	static Item *mLeggings_chain;
	static Item *mLeggings_cloth;
	static Item *mLeggings_diamond;
	static Item *mLeggings_gold;
	static Item *mLeggings_iron;
	static Item *mMagma_cream;
	static Item *mMelon;
	static Item *mMinecart;
	static Item *mMobPlacer;
	static Item *mMushroomStew;
	static Item *mMutton_cooked;
	static Item *mMutton_raw;
	static Item *mNameTag;
	static Item *mNetherQuartz;
	static Item *mNether_wart;
	static Item *mNetherbrick;
	static Item *mPainting;
	static Item *mPaper;
	static Item *mPickAxe_diamond;
	static Item *mPickAxe_gold;
	static Item *mPickAxe_iron;
	static Item *mPickAxe_stone;
	static Item *mPickAxe_wood;
	static Item *mPoisonous_potato;
	static Item *mPorkChop_cooked;
	static Item *mPorkChop_raw;
	static Item *mPotato;
	static Item *mPotatoBaked;
	static Item *mPotion;
	static Item *mPumpkinPie;
	static Item *mRabbitCooked;
	static Item *mRabbitFoot;
	static Item *mRabbitHide;
	static Item *mRabbitRaw;
	static Item *mRabbitStew;
	static Item *mRedStone;
	static Item *mReeds;
	static Item *mRepeater;
	static Item *mRotten_flesh;
	static Item *mSaddle;
	static Item *mSeeds_beetroot;
	static Item *mSeeds_melon;
	static Item *mSeeds_pumpkin;
	static Item *mSeeds_wheat;
	static Item *mShears;
	static Item *mShovel_diamond;
	static Item *mShovel_gold;
	static Item *mShovel_iron;
	static Item *mShovel_stone;
	static Item *mShovel_wood;
	static Item *mSign;
	static Item *mSkull;
	static Item *mSlimeBall;
	static Item *mSnowBall;
	static Item *mSpeckled_melon;
	static Item *mSpider_eye;
	static Item *mSplash_potion;
	static Item *mStick;
	static Item *mString;
	static Item *mSugar;
	static Item *mSulphur;
	static Item *mSword_diamond;
	static Item *mSword_gold;
	static Item *mSword_iron;
	static Item *mSword_stone;
	static Item *mSword_wood;
	static Item *mTNTMinecart;
	static Item *mWheat;
	static Item *mYellowDust;

	uint8_t maxStackSize;						// 4-8
	std::string atlas;							// 8-12
	int itemfiller1;							// 12-16
	short itemfiller2;							// 16-18
	short itemId;								// 18-20
	std::string name;							// 20-24
	char itemfiller3[52 - 24];					// 24-52
	TextureUVCoordinateSet& tex;				// 52-56
	int itemfiller4;							// 56-60
	std::unique_ptr<FoodItemComponent> food;	// 60-64
	std::unique_ptr<SeedItemComponent> seed;	// 64-68

	virtual ~Item();
	virtual void setIcon(const std::string &, int);
	virtual void setIcon(TextureUVCoordinateSet const &);
	virtual void setMaxStackSize(unsigned char);
	virtual void setCategory(CreativeItemCategory);
	virtual void setStackedByData(bool);
	virtual void setMaxDamage(int);
	virtual void setHandEquipped();
	virtual void setUseAnimation(UseAnimation);
	virtual void setMaxUseDuration(int);
	virtual bool canBeDepleted();
	virtual bool canDestroySpecial(Block const *) const;
	virtual int getLevelDataForAuxValue(int) const;
	virtual bool isStackedByData() const;
	virtual void getMaxDamage();
	virtual int getAttackDamage();
	virtual bool isHandEquipped() const;
	virtual bool isArmor() const;
	virtual bool isDye() const;
	virtual bool isGlint(ItemInstance const *) const;
	virtual bool isThrowable() const;
	virtual bool canDestroyInCreative() const;
	virtual bool isLiquidClipItem(int) const;
	virtual bool requiresInteract() const;
	virtual void appendFormattedHovertext(ItemInstance const &, Player const &, std::string &, bool) const;
	virtual bool isValidRepairItem(ItemInstance const &, ItemInstance const &);
	virtual int getEnchantSlot() const;
	virtual int getEnchantValue() const;
	virtual bool isComplex() const;
	virtual void getColor(ItemInstance const &) const;
	virtual bool use(ItemInstance &, Player &);
	virtual void useOn(ItemInstance *, Player *, int, int, int, signed char, float, float, float);
	virtual bool dispense(BlockSource &, Container &, int, Vec3 const &, signed char);
	virtual void useTimeDepleted(ItemInstance *, Level *, Player *);
	virtual void releaseUsing(ItemInstance *, Player *, int);
	virtual float getDestroySpeed(ItemInstance *, Block *);
	virtual void hurtEnemy(ItemInstance *, Mob *, Mob *);
	virtual bool interactEnemy(ItemInstance *, Mob *, Player *);
	virtual void mineBlock(ItemInstance *, BlockID, int, int, int, Mob *);
	virtual std::string buildDescriptionName(ItemInstance const &) const;
	virtual void buildEffectDescriptionName(ItemInstance const &) const;
	virtual void readUserData(ItemInstance *, IDataInput &) const;
	virtual void writeUserData(ItemInstance const *, IDataOutput &, bool) const;
	virtual unsigned char getMaxStackSize(ItemInstance const *);
	virtual void inventoryTick(ItemInstance &, Level &, Entity &, int, bool);
	virtual void onCraftedBy(ItemInstance &, Level &, Player &);
	virtual void getInteractText(Player const &) const;
	virtual int getAnimationFrameFor(Mob &) const;
	virtual bool isEmissive(int) const;
	virtual const TextureUVCoordinateSet& getIcon(int, int, bool) const;
	virtual int getIconYOffset() const;
	virtual bool isMirroredArt() const;

	Item(const std::string &, short);

	void init(Json::Value &);

	static void initItems();
	static void initCreativeItems();

	static void addCreativeItem(Block *, short);
	static void addCreativeItem(Item *, short);
	static void addCreativeItem(short, short);
	static void addCreativeItem(const ItemInstance &);

	static Item *lookupByName(const std::string &, bool);
	static TextureUVCoordinateSet getTextureUVCoordinateSet(std::string const &, int);

	static std::vector<ItemInstance> mCreativeList;
	static Item *mItemLookupMap[];
	static Item *mItems[512];

	static Random mRandom;
	//static std::shared_ptr<TextureAtlas> mItemTextureAtlas;
};