#pragma once

class PushNotificationMessage;

class AppPlatformListener {
public: 
	virtual ~AppPlatformListener();
	virtual void onLowMemory();
	virtual void onAppSuspended();
	virtual void onAppResumed();
	virtual void onAppFocusLost();
	virtual void onAppFocusGained();
	virtual void onAppTerminated();
	virtual void onPushNotificationReceived(PushNotificationMessage const &);
};