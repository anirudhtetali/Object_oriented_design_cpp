#ifndef Line_HEADER
#define Line_HEADER
#include<iostream>
#include "point.h"
#include "Point.h"
using namespace std;
class Line: public Point
{
private:
	Point p1, p2;
public:
	Line();
	Line(const Line& lin);
	void setPoint1(double p, double q);
	void setPoint2(double p, double q);
	void setLine(double p, double q, double r, double s);
	Point getPoint1();
	Point getPoint2();
	bool operator==(const Line& ln1);
	bool operator!=(const Line& ln1);
	double Distance(const Line& ln);
	double Slope(const Line& ln);
};
ostream& operator<<(ostream& os, Line& ln);
istream& operator>>(istream& is, Line& ln);
#endif