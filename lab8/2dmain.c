#include <stdio.h>
#include "2d.h"


int main()
{
	int arr[10][10];
	int i,j,row,col;
	printf("Enter rows\n" );
	scanf("%d",&row);
	printf("Enter col\n");
	scanf(" %d",&col);
	printf("Please enter the elements: \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf(" %d",&arr[i][j]);
		}
	}
	printf("Initial matrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	function1(arr,row,col);
	function2(arr,row,col);
	return 0;
}