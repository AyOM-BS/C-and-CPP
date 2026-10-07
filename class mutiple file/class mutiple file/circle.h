#pragma once
#include "point.h"

class circle
{
private:
	double radius;
	point center;
public:
	void setCircle(double r, int a = 0, int b = 0);
	double getRadius();
	point getCenter();
};