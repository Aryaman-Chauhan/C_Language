#include <stdio.h>
#include <math.h>
int main()
{
	double x1, x2, a, b, c;
	printf("Please enter a:");
	scanf("%lf", &a); // captures an integer value and stores in num1
	printf("Please enter b:");
	scanf("%lf", &b);
	printf("Please enter c:");
	scanf("%lf", &c);
	x1 = (-b - sqrt((double)(pow(b, 2) - 4*a*c)))/(2*a);
	x2 = (-b + sqrt((double)(pow(b, 2) - 4*a*c)))/(2*a);
	printf("Roots are %lf and %lf\n", x1, x2);
}