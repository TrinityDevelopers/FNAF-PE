#pragma once

#include "mcpe/client/model/Model.h"
#include "mcpe/client/model/ModelPart.h"

//import net.minecraft.entity.Entity;

class Foxy : public Model
{
public:
    ModelPart Shape1;
    ModelPart Shape2;
    ModelPart Shape3;
    ModelPart Shape4;
    ModelPart Shape5;
    ModelPart Shape6;
    ModelPart Shape7;
    ModelPart Shape8;
    ModelPart Shape9;
    ModelPart Shape10;
    ModelPart Shape14;
    ModelPart Shape15;
    ModelPart Shape16;
    ModelPart Shape17;
    ModelPart Shape18;
    ModelPart Shape19;
    ModelPart Shape20;
    ModelPart Shape21;
    ModelPart Shape22;
    ModelPart Shape23;
    ModelPart Shape24;
    ModelPart Shape25;
    ModelPart Shape28;
    ModelPart Shape29;
    ModelPart Shape30;
    ModelPart Shape31;
    ModelPart Shape32;
    ModelPart Shape33;
    ModelPart Shape34;
    ModelPart Shape35;
    ModelPart Shape36;
    ModelPart Shape37;
    ModelPart Shape38;
    ModelPart Shape39;
    ModelPart Shape40;
    ModelPart Shape41;
    ModelPart Shape42;
    ModelPart Shape43;
    ModelPart Shape44;
    ModelPart Shape45;
    ModelPart Shape46;
    ModelPart Shape47;
    ModelPart Shape48;
    ModelPart Shape49;
    ModelPart Shape50;
    ModelPart Shape51;
    ModelPart Shape52;
    ModelPart Shape53;
    ModelPart Shape54;
    ModelPart Shape55;
    ModelPart Shape56;
    ModelPart Shape57;
    ModelPart Shape58;
    ModelPart Shape59;
	
public:
	Foxy();
	virtual ~Foxy();
	virtual void render(Entity &, float, float, float, float, float, float);
	void setBoxRotation(ModelPart *, float, float, float);
  
  public Foxy()
  {
    textureWidth = 128;
  
  private void setRotation(ModelPart model, float x, float y, float z)
  {
    model.rotateAngleX = x;
    model.rotateAngleY = y;
    model.rotateAngleZ = z;
  }
  
  public void setRotationAngles(float f, float f1, float f2, float f3, float f4, float f5)
  {
    super.setRotationAngles(f, f1, f2, f3, f4, f5, null);
  }

}
