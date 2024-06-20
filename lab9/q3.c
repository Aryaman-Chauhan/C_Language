#include<stdio.h>
#include<stdlib.h>
int main(int n,char *arr[]){
	int *p,n1,n2;
	float *q;
	struct mainarr {
		int *ar1;
		float *ar2;
	} arr0, *r;
	r=&arr0;
	n1=atoi(arr[1]);
	n2=atoi(arr[2]);
	p=malloc(sizeof(int)*n1);
	q=malloc(sizeof(float)*n2);
	for(int i=0;i<n1;i++){
		printf("\nEnter value of element of a1%d 1st array:\n",i+1);
		scanf("%d",p+i);
	}
	for(int i=0;i<n2;i++){
		printf("\nEnter value of element of a2%d 2nd array:\n",i+1);
		scanf("%f",q+i);
	}
	arr0.ar1=p;
	arr0.ar2=q;
	printf("{");
	for(int i=0;i<n1;i++)
		printf("%d ",r->ar1[i]);
	printf("}");
	printf("\n");
	printf("{");
	for(int i=0;i<n2;i++)
		printf("%0.2f  ",r->ar2[i]);
	printf("}");
	printf("\n");
}