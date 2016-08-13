#pragma once

#include "Entity.h"
#include "ItemInstance.h"

class Attribute;
class MobEffectInstance;
class ItemEntity;
class BaseAttributeMap;
class LookControl;
class MoveControl;
class JumpControl;
class BodyControl;
class PathNavigation;
class Sensing;

// Size : 3344
class Mob : public Entity {
public: 
	char mobfiller1[2588];	// 420
	ItemInstance armor[4];	// 3008
	char mobfiller2[256];	// 3088

	virtual ~Mob();
	virtual void lerpTo(Vec3 const &, Vec2 const &, int);
	virtual void normalTick();
	virtual void baseTick();
	virtual void rideTick();
	virtual bool isBaby() const;
	virtual float getHeadHeight() const;
	virtual void interactWithPlayer(Player &);
	virtual bool canInteractWith(Player &);
	virtual void getInteractText(Player &);
	virtual void playerTouch(Player &);
	virtual bool isImmobile() const;
	virtual bool isPickable();
	virtual bool isPushable() const;
	virtual bool isShootable();
	virtual bool isSneaking() const;
	virtual bool isAlive() const;
	virtual void hurt(EntityDamageSource const &, int);
	virtual void animateHurt();
	virtual void doFireHurt(int);
	virtual void handleEntityEvent(EntityEvent, int);
	virtual void setOnFire(int);
	virtual void causeFallDamage(float);
	virtual bool canAddRider(Entity &) const;
	virtual void tickLeash();
	virtual void stopRiding(bool, bool);
	virtual void buildDebugInfo(std::string &) const;
	virtual void outOfWorld();
	virtual void readAdditionalSaveData(CompoundTag const &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual void _playStepSound(BlockPos const &, int);
	virtual void postInit();
	virtual void knockback(Entity *, int, float, float);
	virtual void die(EntityDamageSource const &);
	virtual void resolveDeathLoot(int);
	virtual bool canSee(Entity const &) const;
	virtual void onLadder(bool);
	virtual void spawnAnim();
	virtual bool isSleeping() const;
	virtual void setSneaking(bool);
	virtual bool isSprinting() const;
	virtual void setSprinting(bool);
	virtual void getVoicePitch();
	virtual void playAmbientSound();
	virtual void getAmbientSoundInterval();
	virtual void getItemInHandIcon(ItemInstance const *, int);
	virtual float getSpeed();
	virtual void setSpeed(float);
	virtual float getJumpPower() const;
	virtual void heal(int);
	virtual void hurtEffects(EntityDamageSource const &, int);
	virtual void getMeleeWeaponDamageBonus(Mob *);
	virtual void getMeleeKnockbackBonus();
	virtual void actuallyHurt(int, EntityDamageSource const *);
	virtual bool isInvertedHealAndHarm() const;
	virtual void travel(float, float);
	virtual void applyFinalFriction(float);
	virtual void updateWalkAnim();
	virtual void aiStep();
	virtual void pushEntities();
	virtual void lookAt(Entity *, float, float);
	virtual bool isLookingAtAnEntity();
	virtual bool canSpawn(bool);
	virtual void finalizeMobSpawn();
	virtual bool shouldDespawn() const;
	virtual void getAttackAnim(float);
	virtual void performRangedAttack(Mob &, float);
	virtual void getCarriedItem();
	virtual void setCarriedItem(ItemInstance const &);
	virtual void getItemUseDuration();
	virtual void swing();
	virtual void ate();
	virtual void getMaxHeadXRot();
	virtual Mob *getLastHurtByMob();
	virtual void setLastHurtByMob(Mob *);
	virtual Player *getLastHurtByPlayer();
	virtual void setLastHurtByPlayer(Player *);
	virtual Entity *getLastHurtMob();
	virtual void setLastHurtMob(Entity *);
	virtual Mob *getTarget();
	virtual void setTarget(Mob *);
	virtual bool canAttack(Mob *, bool);
	virtual bool isAlliedTo(Mob *);
	virtual void doHurtTarget(Entity *);
	virtual bool canBeControlledByRider();
	virtual void teleportTo(Vec3 const &);
	virtual void getMutableAttribute(Attribute const &);
	virtual void getAttribute(Attribute const &) const;
	virtual void getEquipmentCount() const;
	virtual void getArmorValue();
	virtual void getArmorCoverPercentage();
	virtual void hurtArmor(int);
	virtual void setArmor(ArmorSlot, ItemInstance const *);
	virtual ItemInstance *getArmor(ArmorSlot) const;
	virtual std::vector<ItemInstance const *> getAllArmor() const;
	virtual std::vector<ItemInstance *> getAllArmor();
	virtual void getArmorTypeHash();
	virtual void dropHeldItem();
	virtual void dropAllArmor();
	virtual void dropAllGear(int);
	virtual void drop(ItemInstance const *, bool);
	virtual void sendInventory() const;
	virtual bool canBeAffected(MobEffectInstance const &);
	virtual void getDamageAfterMagicAbsorb(EntityDamageSource const &, int);
	virtual void _removeWhenFarAway();
	virtual int getDeathLoot();
	virtual void dropDeathLoot(int);
	virtual void dropRareDeathLoot();
	virtual void jumpFromGround();
	virtual void _pickUpItem(ItemEntity &);
	virtual void updateAi();
	virtual void newServerAiStep();
	virtual void _serverAiMobStep();
	virtual void _getSoundVolume();
	virtual void _getAmbientSound();
	virtual void _getHurtSound();
	virtual void _getDeathSound();
	virtual void getDamageAfterArmorAbsorb(EntityDamageSource const &, int);
	virtual int getExperienceReward() const;
	virtual bool useNewAi();
	virtual void onEffectAdded(MobEffectInstance &);
	virtual void onEffectUpdated(MobEffectInstance const &);
	virtual void onEffectRemoved(MobEffectInstance &);
	virtual void registerAttributes();

	float getYHeadRot();

	void setPersistent();
};