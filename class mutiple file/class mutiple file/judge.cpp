#include "point.h"
#include "circle.h"
using namespace std;

void judge(int cx, int cy, int r, int px, int py)
{
	int dx = px - cx;
	int dy = py - cy;
	if (dx * dx + dy * dy < r * r)
		cout << "Inside" << endl;
	else if (dx * dx + dy * dy == r * r)
		cout << "On the circle" << endl;
	else
		cout << "Outside" << endl;
}
int main()
{
	circle c;
	point p;
	c.setCircle(5.0);
	p.setPoint(1, 2);
	point center = c.getCenter();
	int cx = center.getX(), cy = center.getY(), r = c.getRadius();
	int px = p.getX(), py = p.getY();
	judge(cx, cy, r, px, py);
	return 0;
}