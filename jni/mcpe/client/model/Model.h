#pragma once

#include "../AppPlatformListener.h"
#include "../renderer/MaterialPtr.h"

class Entity;
class Mob;
class AABB;

// Size : 120
class Model : public AppPlatformListener
{
public:
	// void **vtable;						// 0
	char filler1[32];						// 4
	mce::MaterialPtr entity;				// 36
	mce::MaterialPtr entity_alphatest;		// 48
	mce::MaterialPtr entity_alphablend;		// 60
	mce::MaterialPtr entity_static;			// 72
	mce::MaterialPtr entity_emissive;		// 84
	mce::MaterialPtr entity_emissive_alpha;	// 96
	mce::MaterialPtr entity_change_color;	// 108

public:
	Model();
	virtual ~Model();
	virtual void onAppSuspended();
	virtual void clear();
	virtual void render();
	virtual void render(Entity &, float, float, float, float, float, float);
	virtual void setupAnim(float, float, float, float, float, float);
	virtual void prepareMobModel(Mob &, float, float, float);
	AABB *getAABB() const;
};
