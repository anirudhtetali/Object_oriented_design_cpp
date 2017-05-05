#include<iostream>
#include "Point.h"
#include "Line.h"
using namespace std;
int main()
{
	Point p1;
	Line line, another_line;
	double t;
	cout << " enter 1 to input the points independently\n";
	cout << " enter 2 to input the points together\n";
	cin >> t;
	if (t == 1)
	{
		double a, b;
		cout << " enter point1 coordinates\n";
		cin >> a >> b;
		line.setPoint1(a, b);
		cout << " enter point2 coordinates\n";
		cin >> a >> b;
		line.setPoint2(a, b);
		
	}
	else
	{
		cout << " enter point1 and point2 coordinates\n";
		cin >> line;
	}
	cout << line;
	cout << "Length of the line - " << line.Distance(line) << endl;
	cout << "slope of the line - " << line.Slope(line) << endl;
	another_line = line;
	cout << another_line;
	cout << "Length of the line through copied_constructor- " << another_line.Distance(another_line) << endl;
	cout << "slope of the line through copied_constructor- " << another_line.Slope(another_line) << endl;
	cout << "enter a number to terminate "<< endl;

	int i;
	cin >> i;
	return 0;
}

