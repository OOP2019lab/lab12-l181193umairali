#pragma once
#include<iostream>
using namespace std;
#include<string>
class shape{
protected:
	string type;
public:
	 shape(string);
	virtual float area();

 //  definition//
 string color;

};
