#pragma once

#include <vector>

#include "GuiElement.h"

class ScrollingPane : public GuiElement {
public: 
	struct GridItem {
		int id;
		int x, y;

		float xf, yf;
		bool selected;
	};

	virtual ~ScrollingPane();
	virtual void renderBatch(std::vector<ScrollingPane::GridItem> &, float, float, float);
	virtual void renderItem(ScrollingPane::GridItem &, float);
	virtual void didEndDragging();
	virtual void didEndDecelerating();
	virtual void willBeginDecelerating();
	virtual void willBeginDragging();
	virtual void onSelect(int, bool);
	virtual void refreshItems();
};