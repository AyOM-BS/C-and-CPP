#include <iostream>
using namespace std;
//#define PI 3.14

//class circle
//{
//public:
//	int r;
//	float calculateArea()
//	{
//		return PI * r * r;
//	}
//};
//int main()
//{
//	class circle c;
//	c.r = 1;
//	cout << c.calculateArea() << endl;
//	return 0;
//}

//class cube
//{
//public:
//	void seta (int x)
//	{
//		a = x;
//	}
//	int calculateVolume()
//	{
//		return a * a * a;
//	}
//	int calculateSurfaceArea()
//	{
//		return 6 * a * a;
//	}
//private:
//	int a;
//};
//int main()
//{
//	cube c;
//	c.seta(2);
//	cout << "Volume of cube is: " << c.calculateVolume() << endl;
//	cout << "Surface area of cube is: " << c.calculateSurfaceArea() << endl;
//	return 0;
//}

class point
{
private:
	int x, y;
public:
	void setpoint(int a, int b)
	{
		x = a;
		y = b;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
};
class circle
{
private:
	int r;
	point center;
public:
	void setcircle(int a, int b = 0, int c = 0)
	{
		r = a;
		center.setpoint(b, c);
	}
	point getcenter()
	{
		return center;
	}
	int getr()
	{
		return r;
	}
};
int main()
{
	circle c;
	point p;
	c.setcircle(5,2,3);
	p.setpoint(3, 5);
	int cr = c.getr();
	point center = c.getcenter();
	int cx = center.getx(), cy = center.gety();
	int px = p.getx(), py = p.gety();
	bool judge = (px - cx) * (px - cx) + (py - cy) * (py - cy) <= cr * cr ? true : false;
	cout << "Point is inside the circle: " << (bool)judge << endl;
}