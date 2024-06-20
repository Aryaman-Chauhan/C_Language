#include<stdio.h>
#include<stdlib.h> 
#include "header.h"

int main(int argc,char*argv[])
{
	int r=0,c=0;
	int i=0,j=0;
	r=atoi(argv[1]);
	c=atoi(argv[2]);	
	if(r<=0 || c<=0)
	    {
		printf("INVALID INPUT!\n");
    	}

	else 
	{
	int **arr2d = NULL; 
	arr2d = (int **)malloc(r*sizeof(int)); 
	for(i=0;i<r;i++)
	{
		arr2d[i]=(int*)malloc(c*sizeof(int));
	}
	printf("Please eneter the desired integers in 2-d array\n"); 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" element at %d%d = ",i+1,j+1);
			scanf("%d",&arr2d[i][j]);
			printf("\n");
		}
	}
	printf("the elements you have entered are \n"); 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr2d[i][j]);
		}
		printf("\n");
	}

	f2(arr2d,r,c);
	 
	printf("the sorted elements in individual row:\n");

    for(i=0;i<r;i++)
	    {
		   for(j=0;j<c;j++)
		  {
			printf("%d \t",arr2d[i][j]);
		   }
		printf("\n");
		} 
	
    free(arr2d);
    }
}
