#include "2d.h"

void function1(int arr[10][10],int row,int col){
	int trans[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			trans[i][j]=arr[j][i];
		}
	}
	printf("Transpose of matrix \n" );
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			printf("%d ",trans[i][j] );
		}
		printf("\n");
	}
}

void function2(int (*arr1)[10], int row,int col){
	int i,j;
	int trans[10][10];

	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			trans[j][i]=*((*arr1)+j);
		}
		arr1++;
	}
	printf("Transpose using pointers \n");
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf("%d ",trans[i][j] );
		}
		printf("\n");
	}
}