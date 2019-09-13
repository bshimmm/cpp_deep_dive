#include <iostream>
#include <cmath>
using namespace std;

//Write a program to compute an area of a triangle. Sides are input by users
//Area = sqrt(s*(s-a)*(s-b)*(s-c))
//where a, b and c are lengths of sides of triangle and s = (a+b+c)/2

int main()
{
	float area, a, b, c, s;
	cout << "Enter the lengths of a, b and c\n";
	cin >> a >> b >> c;
	s = (a + b + c) / 2;
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	cout << "The area of the triangle is:\n" << area;
	return 0;
}