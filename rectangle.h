#pragma once
#include"shape.h"

class rectangle:public shape{
	public:
		rectangle(float ,float ,string);
	float area();
private:

	float hight;
	float width;

};
