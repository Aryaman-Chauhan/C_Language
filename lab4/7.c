#include <stdio.h>
#include <math.h>
#define PI 3.142F
#define E 2.718F
int main()
{
	float x, y, expr1=0, expr2=0, angle1=60*PI/180, angle2=30*PI/180;//angles accepted in radians only
	printf("Enter x:");
	scanf("%f", &x);
	printf("Enter y:");
	scanf("%f", &y);
	expr1 = (pow(E, x)* sin(angle1) + 5.6*pow(10, -5))/(3*cos(angle2));
	expr2 = sin((atan(0.33)+PI)/(2*y));
	printf("Values of expressions are %f and %f\n", expr1, expr2);
}