#include <stdio.h>
int main(){
	int num = 1;
	int N;
	printf("Enter N:");
	scanf("%d", &N);
	do
	{
		(num % 2) ? printf("%d\n", num) : 0; 
		num++;
	}while (num <= N);
	for (int i = 1; i <=N; i=i+2)
	{
		printf("%d\n", i);
	}
	return 0;
}