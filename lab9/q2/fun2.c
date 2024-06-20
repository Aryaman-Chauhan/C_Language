#include<stdio.h>
#include"header.h"
void f2(int*arr2d[],int x, int y)
{ 
	int i=0,j=0,k=0,l=0;
	int temp=0;
	int temp2[y];

		
	for(i=0;i<x;i++) 
	{
		for(j=0;j<y-1;j++)
		{
		
			for(k=0;k<y-1-j;k++)
			{
			
		
				if(*(arr2d[i]+k) > *(arr2d[i]+(k+1)))
				{
					temp = *(arr2d[i]+k);
					 *(arr2d[i]+k) = *(arr2d[i]+(k+1)) ;
					 *(arr2d[i]+(k+1)) = temp;

				}	
			}
		}
	}
	

	for(i=0;i<x-1;i++) 
	{
		for(j=0;j<x-i-1;j++)
		{
			if(*(arr2d[j]) > *(arr2d[j+1]))
				{
					for(l=0;l<y;l++)
					{
						*( temp2 +l )=*(arr2d[j] + l);

					}
					for(l=0;l<y;l++)
					{
						*(arr2d[j]+l)= *(arr2d[j+1]+l);
					}
					for(l=0;l<y;l++)
					{
						*(arr2d[j+1]+l)=*( temp2 + l);
					}
				}

		}
	}	
}