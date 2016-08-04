#pragma once

class MobEffectInstance {
public:
	int id;			// 0-4
	int duration;	// 4-8
	int amplifier;	// 8-12
	bool splash;	// 12-13
	bool ambient;	// 13-14
	bool noCounter;	// 14-15
	bool particles;	// 15-16
	
	MobEffectInstance();
	MobEffectInstance(int);
	MobEffectInstance(int, int);
	MobEffectInstance(int, int, int);
	MobEffectInstance(int, int, int, bool, bool);
	
	bool operator!=(const MobEffectInstance&) const;
	bool operator<(const MobEffectInstance&) const;
	bool operator==(const MobEffectInstance&) const;
	
	int getId() const;
};