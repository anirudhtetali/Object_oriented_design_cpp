#include "Line.h"
#include "Point.h"
    Line::Line()
	{
		p1.x = 0.0, p1.y = 0.0, p2.x = 1.0, p2.y = 1.0;
	}
	Line::Line(const Line& lin)
	{
		*this = lin;
	}
	
	void Line::setPoint1(double p, double q)
	{
		p1.Point::Point(p, q);
	}
	void Line::setPoint2(double p, double q)
	{
		p2.Point::Point(p, q);
	}
	void Line::setLine(double p, double q, double r, double s)
	{
		p1.Point::Point(p, q);
		p2.Point::Point(r, s);
	}
	Point Line::getPoint1()
	{
		return p1;
	}
	Point Line::getPoint2()
	{
		return p2;
	}
	bool Line::operator==(const Line& ln1)
	{
		return (p1 == ln1.p1 && p2 == ln1.p2);
	}
	bool Line::operator!=(const Line& ln1)
	{
		return (p1 != ln1.p1 && p2 != ln1.p2);
	}
	double Line::Distance(const Line& ln)
	{
		return(p1 - p2);
	}
	double Line::Slope(const Line& ln)
	{
		return((p1.y - p2.y) / (p1.x - p2.x));
	}
	istream& operator>>(istream& is, Line& ln)
	{
		double pna;
		double pnb;
		double pnc;
		double pnd;
		is >> pna >> pnb >> pnc >> pnd;
		ln.setLine(pna, pnb, pnc, pnd);

		return is;
	}

	ostream& operator<<(ostream& os, Line& ln)
	{
		os << "(" << "(" << ln.getPoint1().getX() << "," << ln.getPoint1().getY() << ")" << "," << "(" << ln.getPoint2().getX() << "," << ln.getPoint2().getY() << ")" << ")";
		return os;
	}
