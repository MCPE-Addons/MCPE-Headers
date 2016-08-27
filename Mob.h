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
class AttributeInstance;

// Size : 3344
class Mob : public Entity {
public: 
	char mobfiller1[2588];			// 420
	ItemInstance armor[4];			// 3008
	BaseAttributeMap* attributeMap;	// 3088-3092
	char mobfiller2[252];			// 3092

	virtual ~Mob();
	virtual void lerpTo(const Vec3 &, const Vec2 &, int);
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
	virtual void readAdditionalSaveData(const CompoundTag &);
	virtual void addAdditionalSaveData(CompoundTag &);
	virtual void _playStepSound(const BlockPos &, int);
	virtual void postInit();
	virtual void knockback(Entity *, int, float, float);
	virtual void die(const EntityDamageSource &);
	virtual void resolveDeathLoot(int);
	virtual bool canSee(const Entity &) const;
	virtual void onLadder(bool);
	virtual void spawnAnim();
	virtual bool isSleeping() const;
	virtual void setSneaking(bool);
	virtual bool isSprinting() const;
	virtual void setSprinting(bool);
	virtual void getVoicePitch();
	virtual void playAmbientSound();
	virtual void getAmbientSoundInterval();
	virtual void getItemInHandIcon(const ItemInstance *, int);
	virtual float getSpeed();
	virtual void setSpeed(float);
	virtual float getJumpPower() const;
	virtual void heal(int);
	virtual void hurtEffects(const EntityDamageSource &, int);
	virtual void getMeleeWeaponDamageBonus(Mob *);
	virtual void getMeleeKnockbackBonus();
	virtual void actuallyHurt(int, const EntityDamageSource *);
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
	virtual void setCarriedItem(const ItemInstance &);
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
	virtual AttributeInstance *getMutableAttribute(const Attribute &);
	virtual void getAttribute(const Attribute &) const;
	virtual void getEquipmentCount() const;
	virtual void getArmorValue();
	virtual void getArmorCoverPercentage();
	virtual void hurtArmor(int);
	virtual void setArmor(ArmorSlot, const ItemInstance *);
	virtual ItemInstance* getArmor(ArmorSlot) const;
	virtual std::vector<const ItemInstance *> getAllArmor() const;
	virtual std::vector<ItemInstance *> getAllArmor();
	virtual void getArmorTypeHash();
	virtual void dropHeldItem();
	virtual void dropAllArmor();
	virtual void dropAllGear(int);
	virtual void drop(const ItemInstance *, bool);
	virtual void sendInventory() const;
	virtual bool canBeAffected(const MobEffectInstance &);
	virtual void getDamageAfterMagicAbsorb(const EntityDamageSource &, int);
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
	virtual void getDamageAfterArmorAbsorb(const EntityDamageSource &, int);
	virtual int getExperienceReward() const;
	virtual bool useNewAi();
	virtual void onEffectAdded(MobEffectInstance &);
	virtual void onEffectUpdated(const MobEffectInstance &);
	virtual void onEffectRemoved(MobEffectInstance &);
	virtual void registerAttributes();

	float getYHeadRot();
	void addEffect(const MobEffectInstance &);
	void setPersistent();
};