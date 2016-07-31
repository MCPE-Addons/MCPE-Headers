#pragma once

#include "AppPlatform.h"

class ANativeActivity;

class AppPlatform_android : public AppPlatform {
public: 
	virtual ~AppPlatform_android();
	virtual void getDataUrl();
	virtual void getPackagePath();
	virtual void loadPNG(TextureData &, std::string const &);
	virtual void loadTGA(TextureData &, std::string const &);
	virtual void loadJPEG(TextureData &, std::string const &);
	virtual void getKeyFromKeyCode(int, int, int);
	virtual void showKeyboard(std::string const &, int, bool, bool, Vec2 const &);
	virtual void hideKeyboard();
	virtual void isFullScreenKeyboard();
	virtual void getKeyboardHeight();
	virtual void swapBuffers();
	virtual void getSystemRegion();
	virtual void getGraphicsVendor();
	virtual void getGraphicsRenderer();
	virtual void getGraphicsVersion();
	virtual void getGraphicsExtensions();
	virtual void pickImage(ImagePickingCallback &);
	virtual void createHolographicPlatform();
	virtual void createAndroidLaunchIntent();
	virtual void updateLocalization(std::string const &);
	virtual void getExternalStoragePath();
	virtual void getInternalStoragePath();
	virtual void getUserdataPath();
	virtual void getUserdataPathForLevels();
	virtual void showDialog(int);
	virtual void createUserInput();
	virtual void getUserInputStatus();
	virtual void getUserInput();
	virtual void getScreenWidth();
	virtual void getScreenHeight();
	virtual void getPixelsPerMillimeter();
	virtual void updateTextBoxText(std::string const &);
	virtual void supportsVibration();
	virtual void vibrate(int);
	virtual void readAssetFile(std::string const &);
	virtual void getDateString(int);
	virtual void checkLicense();
	virtual void hasBuyButtonWhenInvalidLicense();
	virtual void uploadPlatformDependentData(int, void *);
	virtual void isNetworkEnabled(bool);
	virtual void isPowerVR();
	virtual void buyGame();
	virtual void finish();
	virtual void launchUri(std::string const &);
	virtual void useMetadataDrivenScreens();
	virtual void getPlatformStringVar(int);
	virtual void getApplicationId();
	virtual void getAvailableMemory();
	virtual void getBroadcastAddresses();
	virtual void getIPAddresses();
	virtual void getModelName();
	virtual void getDeviceId();
	virtual void createUUID();
	virtual void isFirstSnoopLaunch();
	virtual void hasHardwareInformationChanged();
	virtual void isTablet();
	virtual void realmsBeta();
	virtual void isFireTV();
	virtual void getDefaultInputMode();
	virtual int getPlatformUIScalingRules() const;
	virtual void getPlatformTempPath();
	virtual void initWithActivity(ANativeActivity *);
};