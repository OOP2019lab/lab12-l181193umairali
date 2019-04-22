#pragma once
#include"circle.h"
#include"shape.h"
circle::circle(float Radius,string Color):shape(Color)
	{
       radius =Radius;
	   color = Color;
}
float circle::area(){
	float Area=0.0;
	Area= radius*radius*3.14;
	return Area;
}