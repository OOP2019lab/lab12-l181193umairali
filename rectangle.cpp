#pragma once
#include"rectangle.h"
#include"shape.h"
rectangle::rectangle(float Width,float Hight,string Color):shape (Color)
{
	
	width=Width;
	hight=Hight;
	color=Color;
}
float rectangle::area()
{
	float Area=0.0;
	Area = (width*hight);
	return Area;
}