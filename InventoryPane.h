#pragma once

#include "ScrollingPane.h"
#include "AppPlatformListener.h"
#include "EntityShaderManager.h"

class IntRectangle;
class ItemInstance;

namespace Touch {
class IInventoryPaneCallback;

class InventoryPane : public ScrollingPane, public EntityShaderManager, public AppPlatformListener {
public:
	InventoryPane(Touch::IInventoryPaneCallback *, MinecraftClient &, const IntRectangle &, int, float, int, int, int, bool, bool, bool);
	virtual ~InventoryPane();
	virtual void handleButtonPress(MinecraftClient *, short);
	virtual void renderBatch(std::vector<ScrollingPane::GridItem> &, float, float, float);
	virtual void onSelect(int, bool);
	virtual void refreshItems();
	virtual void onAppSuspended();
	virtual void onAppResumed();
};
};
namespace Touch {
class IInventoryPaneCallback {
public:
	virtual ~IInventoryPaneCallback();
	virtual bool addItem(const Touch::InventoryPane *, int) = 0;
	virtual bool isAllowed(int) = 0;
	virtual std::vector<const ItemInstance *> getItems(const Touch::InventoryPane *) = 0;
};
};