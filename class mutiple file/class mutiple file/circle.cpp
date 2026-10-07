#include "circle.h"

void circle::setCircle(double r, int a, int b)
{
	radius = r;
	center.setPoint(a, b);
}
double circle::getRadius()
{
	return radius;
}
point circle::getCenter()
{
	return center;
}