#pragma once

#include <string>
#include <vector>

class SkinInfoData {
public: 
	virtual ~SkinInfoData();
	virtual void updateSkin(std::string const &, std::vector<unsigned char> const &);
	virtual void getTexturePair();
	virtual void getData() = 0;
	virtual void getDataLength() = 0;
	virtual void hasValidTexture() = 0;
	virtual void validateAndResizeSkinData(std::vector<unsigned char> &);
};