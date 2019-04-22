#pragma once
#include"shape.h"
#include"triangle.h"
triangle::triangle(float Base,float Hight,string Color):shape(Color)
{
	base=Base;
	hight=Hight;
	color=Color;

}
float triangle::area(){
	float Area =0;
	Area =(base*hight)/2;
	return Area;
}