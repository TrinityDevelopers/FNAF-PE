#include "FoxyModel.h"

FoxyModel::FoxyModel()
	: Shape1(this, 0, 0, 128, 64), Shape2(this, 0, 0, 128, 64), Shape3(this, 0, 18, 128, 64), 
	  Shape4(this, 0, 18, 128, 64), Shape5(this, 0, 44, 128, 64), Shape6(this, 0, 44, 128, 64),
	  Shape7(this, 0, 53, 128, 64), Shape8(this, 3, 34, 128, 64), Shape9(this, 0, 34, 128, 64),
	  Shape10(this, 28, 55, 128, 64), Shape14(this, 19, 26, 128, 64), Shape15(this, 18, 19, 128, 64),
	  Shape16(this, 66, 56, 128, 64), Shape17(this, 0, 13, 128, 64), Shape18(this, 50, 44, 128, 64),
	  Shape19(this, 51, 56, 128, 64), Shape20(this, 50, 38, 128, 64), Shape21(this, 18, 14, 128, 64),
	  Shape22(this, 36, 20, 128, 64), Shape23(this, 36, 17, 128, 64), Shape24(this, 34, 11, 128, 64),
	  Shape25(this, 34, 11, 128, 64), Shape28(this, 25, 2, 128, 64), Shape29(this, 25, 2, 128, 64),
	  Shape30(this, 47, 5, 128, 64), Shape31(this, 47, 5, 128, 64), Shape32(this, 33, 31, 128, 64),
	  Shape33(this, 33, 31, 128, 64), Shape34(this, 51, 24, 128, 64), Shape35(this, 51, 31, 128, 64),
	  Shape36(this, 64, 32, 128, 64), Shape37(this, 64, 32, 128, 64), Shape38(this, 64, 32, 128, 64),
	  Shape39(this, 20, 9, 128, 64), Shape40(this, 0, 9, 128, 64), Shape41(this, 20, 9, 128, 64),
	  Shape42(this, 20, 9, 128, 64), Shape43(this, 20, 9, 128, 64), Shape44(this, 12, 8, 128, 64),
	  Shape45(this, 12, 8, 128, 64), Shape46(this, 81, 44, 128, 64), Shape47(this, 30, 44, 128, 64),
	  Shape48(this, 30, 44, 128, 64), Shape49(this, 67, 24, 128, 64), Shape50(this, 51, 10, 128, 64),
	  Shape51(this, 41, 44, 128, 64), Shape52(this, 49, 46, 128, 64), Shape53(this, 49, 46, 128, 64),
	  Shape54(this, 67, 47, 128, 64), Shape55(this, 67, 47, 128, 64), Shape56(this, 54, 31, 128, 64),
	  Shape57(this, 54, 31, 128, 64), Shape58(this, 54, 31, 128, 64), Shape59(this, 54, 31, 128, 64)
{
	Shape1.addBox(-1.5F, 0.0F, -6.0F, 3, 1, 6);
	Shape1.setPos(-2F, 23F, 4F);
	Shape1.mirror = true;
	setBoxRotation(&Shape1, 0F, 0F, 0F);
	
	Shape2.addBox(-1.5F, 0F, -6F, 3, 1, 6);
	Shape2.setPos(2F, 23F, 4F);
	Shape2.mirror = true;
	setBoxRotation(&Shape2, 0F, 0F, 0F);

	Shape3.addBox(-0.5F, 0F, -0.7F, 1, 6, 1);
	Shape3.setPos(-2F, 17F, 2F);
	Shape3.mirror = true;
	setBoxRotation(&Shape3, 0.122173F, 0F, 0F);
	
	Shape4.addBox(-0.5F, 0F, -0.7F, 1, 6, 1);
	Shape4.setPos(2F, 17F, 2F);
	Shape4.mirror = true;
	setBoxRotation(&Shape4, 0.122173F, 0F, 0F);
	
	Shape5.addBox(-1F, 0F, -2.5F, 2, 3, 2);
	Shape5.setPos(-2F, 15F, 2.5F);
	Shape5.mirror = true;
	setBoxRotation(&Shape5, 0F, 0F, 0F);
	
	Shape6.addBox(-1F, 0F, -2.5F, 2, 3, 2);
	Shape6.setPos(2F, 15F, 2.5F);
	Shape6.mirror = true;
	setBoxRotation(&Shape6, 0F, 0F, 0F);
	
	Shape7.addBox(-3.5F, 0F, -2.5F, 7, 2, 5);
	Shape7.setPos(0F, 9.466666F, 1.7F);
	Shape7.mirror = true;
	setBoxRotation(&Shape7, 0F, 0F, 0F);
	
	Shape8.addBox(-1.5F, 0F, -2F, 3, 5, 3);
	Shape8.setPos(-2F, 11.46667F, 2.5F);
	Shape8.mirror = true;
	setBoxRotation(&Shape8, 0F, 0F, 0F);
	
	Shape9.addBox(-1.5F, 0F, -2F, 3, 5, 3);
	Shape9.setPos(2F, 11.46667F, 2.5F);
	Shape9.mirror = true;
	setBoxRotation(&Shape9, 0F, 0F, 0F);
	
	Shape10.addBox(-2.5F, 0F, -1.6F, 5, 1, 4);
	Shape10.setPos(0F, 8.466666F, 1.5F);
	Shape10.mirror = true;
	setBoxRotation(&Shape10, 0F, 0F, 0F);
	
	Shape14.addBox(-3.5F, 0F, -2.466667F, 7, 9, 5);
	Shape14.setPos(0F, -0.4333333F, 1.733333F);
	Shape14.mirror = true;
	setBoxRotation(&Shape14, 0F, 0F, 0F);
	
	Shape15.addBox(-1F, -2.5F, -1F, 2, 3, 2);
	Shape15.setPos(0F, -0.4333333F, 2.2F);
	Shape15.mirror = true;
	setBoxRotation(&Shape15, 0F, 0F, 0F);
	
	Shape16.addBox(-2.5F, 0.1F, -6F, 5, 1, 6);
	Shape16.setPos(0F, -3.433333F, 2.733333F);
	Shape16.mirror = true;
	setBoxRotation(&Shape16, 0.0872665F, 0F, 0F);
	
	Shape17.addBox(-2F, 0.1F, -8F, 4, 1, 2);
	Shape17.setPos(0F, -3.433333F, 2.733333F);
	Shape17.mirror = true;
	setBoxRotation(&Shape17, 0.0872665F, 0F, 0F);
	
	Shape18.addBox(-3F, -6F, -4F, 6, 4, 5);
	Shape18.setPos(0F, -2.433333F, 2.733333F);
	Shape18.mirror = true;
	setBoxRotation(&Shape18, 0F, 0F, 0F);
	
	Shape19.addBox(-2F, -2F, -2F, 4, 2, 3);
	Shape19.setPos(0F, -2.433333F, 2.7F);
	Shape19.mirror = true;
	setBoxRotation(&Shape19, 0F, 0F, 0F);
	
	Shape20.addBox(-2.5F, -7F, -3.5F, 5, 1, 4);
	Shape20.setPos(0F, -2.433333F, 2.733333F);
	Shape20.mirror = true;
	setBoxRotation(&Shape20, 0F, 0F, 0F);
	
	Shape21.addBox(-2F, -3F, -6F, 4, 2, 2);
	Shape21.setPos(0F, -2.433333F, 2.733333F);
	Shape21.mirror = true;
	setBoxRotation(&Shape21, 0F, 0F, 0F);
	
	Shape22.addBox(-1.5F, -3F, -9F, 3, 2, 3);
	Shape22.setPos(0F, -2.433333F, 2.733333F);
	Shape22.mirror = true;
	setBoxRotation(&Shape22, 0F, 0F, 0F);
	
	Shape23.addBox(-1F, -1.5F, -0.5F, 2, 1, 1);
	Shape23.setPos(0F, -4.433333F, -6.266667F);
	Shape23.mirror = true;
	setBoxRotation(&Shape23, -0.3665191F, 0F, 0F);
	
	Shape24.addBox(-1.5F, -5F, -1F, 3, 3, 1);
	Shape24.setPos(-2F, -7.433333F, 2.733333F);
	Shape24.mirror = true;
	setBoxRotation(&Shape24, 0F, 0F, -0.8726646F);
	
	Shape25.addBox(-1.5F, -5F, -1F, 3, 3, 1);
	Shape25.setPos(2F, -7.433333F, 2.733333F);
	Shape25.mirror = true;
	setBoxRotation(&Shape25, 0F, 0F, 0.8726646F);
	
	Shape28.addBox(-2F, 0F, -1.5F, 3, 2, 3);
	Shape28.setPos(-3.5F, -1F, 2F);
	Shape28.mirror = true;
	setBoxRotation(&Shape28, 0F, 0F, 0.3316126F);

	Shape29.addBox(-1F, 0F, -1.5F, 3, 2, 3);
	Shape29.setPos(3.5F, -1F, 2F);
	Shape29.mirror = true;
	setBoxRotation(&Shape29, 0F, 0F, -0.3316126F);

	Shape30.addBox(-2F, 0.5333334F, -1F, 2, 5, 2);
	Shape30.setPos(-3.5F, 0F, 2F);
	Shape30.mirror = true;
	setBoxRotation(&Shape30, 0F, 0F, 0.2792527F);

	Shape31.addBox(0F, 0.5333334F, -1F, 2, 5, 2);
	Shape31.setPos(3.5F, 0F, 2F);
	Shape31.mirror = true;
	setBoxRotation(&Shape31, 0F, 0F, -0.2792527F);

	Shape32.addBox(-1.5F, 0.5333334F, -1F, 2, 4, 2);
	Shape32.setPos(-5.5F, 4.5F, 2F);
	Shape32.mirror = true;
	setBoxRotation(&Shape32, -0.1047198F, 0F, 0F);

	Shape33.addBox(-0.5F, 0.5333334F, -1F, 2, 5, 2);
	Shape33.setPos(5.5F, 4.5F, 2F);
	Shape33.mirror = true;
	setBoxRotation(&Shape33, -0.1047198F, 0F, 0F);

	Shape34.addBox(-2F, 4.533333F, -1.5F, 3, 2, 3);
	Shape34.setPos(-5.5F, 4.5F, 2F);
	Shape34.mirror = true;
	setBoxRotation(&Shape34, -0.1047198F, 0F, 0F);

	Shape35.addBox(0F, 5.533333F, -1.633333F, 1, 1, 3);
	Shape35.setPos(5.5F, 4.5F, 2F);
	Shape35.mirror = true;
	setBoxRotation(&Shape35, -0.1047198F, 0F, 0F);
	
	Shape36.addBox(-1F, -3F, 0F, 1, 2, 0);
	Shape36.setPos(0F, -8.433333F, 2.733333F);
	Shape36.mirror = true;
	setBoxRotation(&Shape36, 0F, 0F, -0.4014257F);
	
	Shape37.addBox(0F, -3F, 0F, 1, 2, 0);
	Shape37.setPos(0F, -8.433333F, 2.733333F);
	Shape37.mirror = true;
	setBoxRotation(&Shape37, 0F, 0F, 0.4014257F);
	
	Shape38.addBox(-0.5F, -3F, 0F, 1, 2, 0);
	Shape38.setPos(0F, -8.433333F, 2.733333F);
	Shape38.mirror = true;
	setBoxRotation(&Shape38, 0F, 0F, 0F);
	
	Shape39.addBox(-1F, -6F, -1F, 2, 1, 1);
	Shape39.setPos(-2F, -7.433333F, 2.733333F);
	Shape39.mirror = true;
	setBoxRotation(&Shape39, 0F, 0F, -0.8726646F);

	Shape40.addBox(-1.5F, 0.1F, -9F, 3, 1, 1);
	Shape40.setPos(0F, -3.433333F, 2.733333F);
	Shape40.mirror = true;
	setBoxRotation(&Shape40, 0.0872665F, 0F, 0F);

	Shape41.addBox(-1F, -2F, -1F, 2, 1, 1);
	Shape41.setPos(-2F, -7.433333F, 2.733333F);
	Shape41.mirror = true;
	setBoxRotation(&Shape41, 0F, 0F, -0.8726646F);

	Shape42.addBox(-1F, -6F, -1F, 2, 1, 1);
	Shape42.setPos(2F, -7.433333F, 2.733333F);
	Shape42.mirror = true;
	setBoxRotation(&Shape42, 0F, 0F, 0.8726646F);

	Shape43.addBox(-1F, -2F, -1F, 2, 1, 1);
	Shape43.setPos(2F, -7.433333F, 2.733333F);
	Shape43.mirror = true;
	setBoxRotation(&Shape43, 0F, 0F, 0.8726646F);

	Shape44.addBox(-0.5F, -7F, -1F, 1, 1, 1);
	Shape44.setPos(-2F, -7.433333F, 2.733333F);
	Shape44.mirror = true;
	setBoxRotation(&Shape44, 0F, 0F, -0.8726646F);

	Shape45.addBox(-0.5F, -7F, -1F, 1, 1, 1);
	Shape45.setPos(2F, -7.433333F, 2.733333F);
	Shape45.mirror = true;
	setBoxRotation(&Shape45, 0F, 0F, 0.8726646F);

	Shape46.addBox(-5F, -2F, -4F, 10, 1, 3);
	Shape46.setPos(0F, -2.433333F, 2.733333F);
	Shape46.mirror = true;
	setBoxRotation(&Shape46, 0F, 0F, 0F);

	Shape47.addBox(-2F, -1F, -1.5F, 2, 1, 2);
	Shape47.setPos(-2.666667F, -4.433333F, 0.7333333F);
	Shape47.mirror = true;
	setBoxRotation(&Shape47, 0F, 0F, 0.122173F);

	Shape48.addBox(0F, -1F, -1.5F, 2, 1, 2);
	Shape48.setPos(2.7F, -4.433333F, 0.7333333F);
	Shape48.mirror = true;
	setBoxRotation(&Shape48, 0F, 0F, -0.122173F);

	Shape49.addBox(-1.5F, 6.533333F, -1F, 2, 1, 2);
	Shape49.setPos(-5.5F, 4.5F, 2F);
	Shape49.mirror = true;
	setBoxRotation(&Shape49, -0.1047198F, 0F, 0F);

	Shape50.addBox(-0.5F, 7.533333F, -2.5F, 0, 5, 5);
	Shape50.setPos(-5.5F, 4.5F, 2F);
	Shape50.mirror = true;
	setBoxRotation(&Shape50, -0.1047198F, 0F, 0F);

	Shape51.addBox(-1.466667F, -2F, 0F, 2, 2, 0);
	Shape51.setPos(-1F, -7.533333F, -1.266667F);
	Shape51.mirror = true;
	setBoxRotation(&Shape51, 1.381289F, 0F, 0F);

	Shape52.addBox(-2.466667F, -1F, -0.1333333F, 2, 2, 1);
	Shape52.setPos(0F, -6.5F, -1.266667F);
	Shape52.mirror = true;
	setBoxRotation(&Shape52, 0F, 0F, 0F);

	Shape53.addBox(0.5F, -1F, -0.1333333F, 2, 2, 1);
	Shape53.setPos(0F, -6.5F, -1.266667F);
	Shape53.mirror = true;
	setBoxRotation(&Shape53, 0F, 0F, 0F);

	Shape54.addBox(-1.7F, -0.1F, -0.2F, 1, 1, 1);
	Shape54.setPos(0F, -6.4F, -1.266667F);
	Shape54.mirror = true;
	setBoxRotation(&Shape54, 0F, 0F, 0F);

	Shape55.addBox(0.7F, -0.1F, -0.2F, 1, 1, 1);
	Shape55.setPos(0F, -6.4F, -1.266667F);
	Shape55.mirror = true;
	setBoxRotation(&Shape55, 0F, 0F, 0F);

	Shape56.addBox(0F, 6.533333F, -1.633333F, 1, 3, 1);
	Shape56.setPos(5.5F, 4.5F, 2F);
	Shape56.mirror = true;
	setBoxRotation(&Shape56, -0.122173F, 0F, 0F);

	Shape57.addBox(0F, 6.533333F, 0.3666667F, 1, 3, 1);
	Shape57.setPos(5.5F, 4.5F, 2F);
	Shape57.mirror = true;
	setBoxRotation(&Shape57, -0.0872665F, 0F, 0F);

	Shape58.addBox(0.3F, 6.533333F, -0.6333333F, 1, 3, 1);
	Shape58.setPos(5.5F, 4.5F, 2F);
	Shape58.mirror = true;
	setBoxRotation(&Shape58, -0.1047198F, 0F, 0F);
	
	Shape59.addBox(0F, 0.5333334F, -2.633333F, 1, 2, 1);
	Shape59.setPos(5.5F, 10.5F, 2F);
	Shape59.mirror = true;
	setBoxRotation(&Shape59, -0.2094395F, 0F, 0.4537856F);
}
  
void FoxyModel::render(Entity& entity, float f, float f1, float f2, float f3, float f4, float f5) {
    setupAnim(f, f1, f2, f3, f4, f5);
    Shape1.render(f5);
    Shape2.render(f5);
    Shape3.render(f5);
    Shape4.render(f5);
    Shape5.render(f5);
    Shape6.render(f5);
    Shape7.render(f5);
    Shape8.render(f5);
    Shape9.render(f5);
    Shape10.render(f5);
    Shape14.render(f5);
    Shape15.render(f5);
    Shape16.render(f5);
    Shape17.render(f5);
    Shape18.render(f5);
    Shape19.render(f5);
    Shape20.render(f5);
    Shape21.render(f5);
    Shape22.render(f5);
    Shape23.render(f5);
    Shape24.render(f5);
    Shape25.render(f5);
    Shape28.render(f5);
    Shape29.render(f5);
    Shape30.render(f5);
    Shape31.render(f5);
    Shape32.render(f5);
    Shape33.render(f5);
    Shape34.render(f5);
    Shape35.render(f5);
    Shape36.render(f5);
    Shape37.render(f5);
    Shape38.render(f5);
    Shape39.render(f5);
    Shape40.render(f5);
    Shape41.render(f5);
    Shape42.render(f5);
    Shape43.render(f5);
    Shape44.render(f5);
    Shape45.render(f5);
    Shape46.render(f5);
    Shape47.render(f5);
    Shape48.render(f5);
    Shape49.render(f5);
    Shape50.render(f5);
    Shape51.render(f5);
    Shape52.render(f5);
    Shape53.render(f5);
    Shape54.render(f5);
    Shape55.render(f5);
    Shape56.render(f5);
    Shape57.render(f5);
    Shape58.render(f5);
    Shape59.render(f5);
}
  
void FoxyModel::setBoxRotation(ModelPart* model, float x, float y, float z) {
	model->rotateAngleX = x;
	model->rotateAngleY = y;
	model->rotateAngleZ = z;
}
  
void FoxyModel::setupAnim(float f, float f1, float f2, float f3, float f4, float f5) {
	
}
