#pragma once

#include "SkinInfoData.h"

class ClientSkinInfoData : public SkinInfoData {
public: 
	virtual ~ClientSkinInfoData();
	virtual void updateSkin(std::string const &, std::vector<unsigned char> const &);
	virtual void getTexturePair();
	virtual void getData();
	virtual void getDataLength();
	virtual void hasValidTexture();
};