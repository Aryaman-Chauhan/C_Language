#include <stdio.h>
void main(){
	int n, s=0;
	printf("Enter n:" );
	scanf("%d", &n);
	if (n>=0)
	{
		for (int i = n; i <= 2*n ; ++i)
		{
			s+=i;
		}
	}
	else
	{
		for (int i = 2*n; i >= 3*n ; --i)
		{
			s+=i;
		}
	}
	printf("Sum:%d\n", s);
}