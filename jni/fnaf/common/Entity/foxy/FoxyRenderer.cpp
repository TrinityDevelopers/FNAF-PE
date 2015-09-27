#include "FoxyRenderer.h"

std::string FoxyRenderer::textureName = "mob/foxy.png"

FoxyRenderer::FoxyRenderer(Model* model, float f) : MobRenderer(model, f) { }

FoxyRenderer::~FoxyRenderer() { }

FoxyRenderer::bindMobTexture(Mob* mob) {
	bindTexture()
}
