#pragma once

class MinecraftClient;
class LocalPlayer;

// Size : 24
class MinecraftScreenModel {
public: 
	//vtable for MinecraftScreenModel
	char filler1[8];			// 4
	MinecraftClient *client;	// 12
	bool dirty;					// 16
	char filler2[7];			// 17

	MinecraftScreenModel(MinecraftClient &);
	virtual ~MinecraftScreenModel();
	virtual void handleGameEventNotification(ui::GameEventNotification);

	std::string getPlayerName() const;
	LocalPlayer *getLocalPlayer();
};