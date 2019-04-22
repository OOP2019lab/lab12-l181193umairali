#pragma once
#include"shape.h"
class triangle:public shape{
public:
	triangle(float Base,float Hight,string Color);
	float area();
private:
	float base;
	float hight;
};