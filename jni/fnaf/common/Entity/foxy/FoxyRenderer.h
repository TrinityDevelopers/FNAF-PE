#pragma once

#include "mcpe/client/renderer/entity/MobRenderer.h"

class FoxyRenderer : public MobRenderer {
public:
	FoxyRenderer(Model*, float);
	virtual ~FoxyRenderer();
};
