#pragma once

// Size : 116
class UIControl {
public: 
	//vtable for UIControl	// 0
	char filler1[112];		// 4

	UIControl();
	virtual ~UIControl();
	std::string &getName() const;
};