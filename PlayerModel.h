#pragma once

#include "HumanoidModel.h"

class PlayerModel : public HumanoidModel {
public:
    virtual ~PlayerModel();
    virtual void render(Entity&, float, float, float, float, float, float);
    virtual void setupAnim(float, float, float, float, float, float);
    virtual void renderGui(Entity*, float, bool, float, float);
};