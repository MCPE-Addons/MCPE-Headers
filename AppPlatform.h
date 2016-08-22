#pragma once

#include <string>

#include "CommonTypes.h"

class TextureData;
class Vec2;
class FilePickerSettings;
class PushNotificationMessage;
class UriListener;
class ActivationUri;
class ControllerType;
class FullscreenMode;
class ImagePickingCallback;

enum class UIScalingRules { Desktop, OSX, PocketEdition };

class AppPlatform {
public: 
	static AppPlatform *mSingleton;

	virtual ~AppPlatform();
	virtual void getDataUrl() = 0;
	virtual void getAlternateDataUrl();
	virtual void getPackagePath() = 0;
	virtual void loadPNG(TextureData &, std::string const &);
	virtual void loadTGA(TextureData &, std::string const &);
	virtual void loadJPEG(TextureData &, std::string const &);
	virtual void getKeyFromKeyCode(int, int, int);
	virtual void showKeyboard(std::string const &, int, bool, bool, Vec2 const &);
	virtual void hideKeyboard();
	virtual void isFullScreenKeyboard();
	virtual void getKeyboardHeight();
	virtual void hideMousePointer();
	virtual void showMousePointer();
	virtual void getPointerFocus();
	virtual void setPointerFocus(bool);
	virtual void toggleSimulateTouchWithMouse();
	virtual void swapBuffers();
	virtual void discardBackbuffer();
	virtual void getSystemRegion() = 0;
	virtual void getGraphicsVendor() = 0;
	virtual void getGraphicsRenderer() = 0;
	virtual void getGraphicsVersion() = 0;
	virtual void getGraphicsExtensions() = 0;
	virtual void pickImage(ImagePickingCallback &) = 0;
	virtual void pickFile(FilePickerSettings &);
	virtual void supportsFilePicking();
	virtual void pushNotificationReceived(PushNotificationMessage const &);
	virtual void createHolographicPlatform();
	virtual void createAndroidLaunchIntent();
	virtual void updateLocalization(std::string const &);
	virtual void setSleepEnabled(bool);
	virtual const std::string &getExternalStoragePath() = 0;
	virtual void getInternalStoragePath() = 0;
	virtual void getUserdataPath() = 0;
	virtual void getUserdataPathForLevels();
	virtual void getApiEnvironmentPath();
	virtual void showDialog(int);
	virtual void createUserInput();
	virtual void getUserInputStatus();
	virtual void getUserInput();
	virtual void _tick();
	virtual void getScreenWidth();
	virtual void getScreenHeight();
	virtual void setScreenSize(int, int);
	virtual void setWindowSize(int, int);
	virtual void setWindowText(std::string const &);
	virtual void getPixelsPerMillimeter();
	virtual void updateTextBoxText(std::string const &);
	virtual void isKeyboardVisible();
	virtual void supportsVibration();
	virtual void vibrate(int);
	virtual void getAssetFileFullPath(std::string const &);
	virtual void readAssetFile(std::string const &);
	virtual void readAssetFileZipped(std::string const &, std::string const &);
	virtual void listAssetFilesIn(std::string const &, std::string const &);
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
	virtual void useXboxControlHelpers();
	virtual bool useCenteredGUI() const;
	virtual void getPlatformType();
	virtual void setControllerType(ControllerType);
	virtual void getControllerType();
	virtual void hasIDEProfiler();
	virtual void getPlatformStringVar(int);
	virtual void getApplicationId() = 0;
	virtual void getAvailableMemory();
	virtual void getTotalMemory();
	virtual void getBroadcastAddresses();
	virtual void getIPAddresses();
	virtual void getModelName();
	virtual void getDeviceId() = 0;
	virtual void createUUID() = 0;
	virtual void isFirstSnoopLaunch() = 0;
	virtual void hasHardwareInformationChanged() = 0;
	virtual void isTablet() = 0;
	virtual void registerUriListener(UriListener &);
	virtual void registerUriListener(std::string const &, UriListener &);
	virtual void unregisterUriListener(UriListener const &);
	virtual void notifyUriListeners(ActivationUri const &);
	virtual void notifyUriListenerRegistrationDone();
	virtual void setFullscreenMode(FullscreenMode);
	virtual void isNetworkThrottled();
	virtual void collectGraphicsHardwareDetails();
	virtual std::string getEdition() const;
	virtual void realmsBeta();
	virtual void isFireTV();
	virtual void getDefaultInputMode();
	virtual void _notifyUriListeners(ActivationUri const &, bool);
	virtual void getPlatformDpi();
	virtual void getPlatformUIScalingRules();
	virtual void getPlatformTempPath() = 0;

	UIScalingRules getUIScalingRules() const;
	void setUIScalingRules(UIScalingRules);
};