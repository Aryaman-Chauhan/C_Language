#include <stdio.h>
void main(){
	int a, b, c, d, max1, max2;
	printf("Enter a:" );
	scanf("%d", &a);
	printf("Enter b:" );
	scanf("%d", &b);
	printf("Enter c:" );
	scanf("%d", &c);
	printf("Enter d:" );
	scanf("%d", &d);
	max1=a,max2=b;
	if (max1<(b>c?(b>d?b:d):(c>d?c:d)))
	{
		max1=(b>c?(b>d?b:d):(c>d?c:d));
		if (max1==b)
			max2=(a>c?(a>d?a:d):(c>d?c:d));
		else if(max1==c)
			max2=(b>a?(b>d?b:d):(a>d?a:d));
		else
			max2=(b>c?(b>a?b:a):(c>a?c:a));
	}
	else{
		max2=(b>c?(b>d?b:d):(c>d?c:d));
	}
	int s=max2+max1;
	printf("%d + %d = %d\n",max1,max2,s);
}