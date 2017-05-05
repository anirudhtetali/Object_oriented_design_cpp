#include "Point.h"
Point::Point()
{
	x = 1;
	y = 2;
}
Point::Point(double a, double b)
{
	x = a;
	y = b;
}

	double Point::getX() {	 return x; }
	double Point::getY() { return y; }
	void Point::setX(double d) { x = d; }
	void Point::setY(double d) { y = d; }
	bool Point::operator!=(const Point& pn)
	{
		return (x != pn.x && y != pn.y);
	}
	bool Point::operator==(const Point& pn)
	{
		return (x == pn.x && y == pn.y);
	}

	double Point::operator-(Point& pn)
	{
		double val = sqrt(abs((x - pn.x)*(x - pn.x) + (y - pn.y)*(y - pn.y)));
		return val;
	}