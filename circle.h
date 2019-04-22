#pragma once
#include<iostream>
#include"shape.h"

class circle:public shape{
public:
	circle(float radius,string Color);
	float area();
private:

	float radius;
}