#include <stdio.h>
int main()
{
	int a, b, num3;
	printf("Please enter the first number:");
	scanf("%d", &a); // captures an integer value and stores in a
	printf("Please enter the second number:");
	scanf("%d", &b); // captures an integer value and stores in b
	int n1 = a,n2=b;//for doing the without variable part
	num3 = a + b;
	a = num3 - a;
	b = num3 - b;
	printf("By swapping,a and b are %d and %d\n", a,b);//With variable print
	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;
	printf("By swapping without third variable,a and b are %d and %d\n", n1,n2);//Without variable print
}