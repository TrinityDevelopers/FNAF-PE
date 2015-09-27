#pragma once

#include "mcpe/client/renderer/entity/MobRenderer.h"

class FoxyRenderer : public MobRenderer {
public:
	static std::string textureName;
	
	FoxyRenderer(Model*, float);
	virtual ~FoxyRenderer();
	virtual void bindMobTexture(Mob*);
};
