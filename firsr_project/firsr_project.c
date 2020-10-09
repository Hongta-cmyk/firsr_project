#include <stdio.h>


const double PI = 3.142;
double calcArea(double radius);

int main()
{
	int age = 58;
	double price = 14.32;
	double radius = 2.1;
	
	double area = calcArea(radius);

	printf ("the area is %f\n" ,area);

	int yearsOfService = 0, monthStarted = 0;

	int timesDone;
	char MI = 'B';
	
	
	return 0;

}

double calcArea(double radius)
{
	double area = PI * (radius * radius);
	return area;

}
