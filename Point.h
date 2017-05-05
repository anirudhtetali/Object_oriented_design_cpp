#ifndef Point_HEADER
#define Point_HEADER
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
class Point
{
private:
	 double x, y;
public:
	Point();
	Point(double a, double b);
	double getX();
	double getY();
	void setX(double d);
	void setY(double d);
	bool operator!=(const Point& pn);
	bool operator==(const Point& pn);
	double operator-(Point& pn);
	friend class Line;
};
#endif