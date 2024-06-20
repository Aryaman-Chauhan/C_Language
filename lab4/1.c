#include <stdio.h>
void main(){
	printf("Enter no. of days: ");
	int days;
	scanf("%d", &days);
	int y=0, m=0;
	y=days/365;
	days=days%365;
	m=days/30;
	days=days%30;
	printf("%d years, %d months and %d days.\n",y,m,days );
}