#include<stdio.h>
int linearSearch(int arr[], int a);
int binarySearch(int arr[],int a);
void bubbleSortDec(int arr[]);
void main(){
    int ch;
    printf("Enter 1 for Linear Search, 2 for Binary Search, 3 for Bubble Sort, 4 to exit\n");
    scanf("%d",&ch);
    int arr[10];
    int a,r;
    switch (ch)
    {
    case 1:
        printf("Enter array elements:\n");
        for(int i=0;i<10;i++)
            scanf("%d",&arr[i]);
        printf("Enter Element to be searched:");
        scanf("%d",&a);
        r=linearSearch(arr,a);
        if(r==-1)
            printf("Element not found.\n");
        else
            printf("Element found at %d location",r);
        break;
    case 2:
        printf("Enter array elements(sorted in increasing order):\n");
        for(int i=0;i<10;i++)
            scanf("%d",&arr[i]);
        printf("Enter Element to be searched:");
        scanf("%d",&a);
        r=binarySearch(arr,a);
        if(r==-1)
            printf("Element not found.\n");
        else
            printf("Element found at %d location",r);
        break;
    case 3:
        printf("Enter array elements:\n");
        for(int i=0;i<10;i++)
            scanf("%d",&arr[i]);
        bubbleSortDec(arr);
        printf("Sorted array:\n");
        for(int i=0;i<10;i++)
            printf("%d\t",arr[i]);
        printf("Sorted array in increasing order:\n");
        for(int i=9;i>=0;i--)
            printf("%d\t",arr[i]);
        break;
    case 4:
        printf("Bye Bye SearchNSort!");
        break;
    default:
        printf("Invalid value, exiting the program");
        break;
    }
}
int linearSearch(int arr[], int a){
    int r=-1;
    for(int i=0;i<10;i++)
        if (arr[i]==a){
            r=i+1;
            break;
        }
    return r;
}
int binarySearch(int arr[], int a){
    int upper=9, lower=0,mid,r=-1;
    while( lower<=upper ){
        mid =(lower + upper)/2;
        if(a > arr[mid])
            lower = mid+1;
        else if(a < arr[mid])
            upper = mid-1;
        else{
            r=mid+1;
            break;
        }
    }
    return r;
}
void bubbleSortDec(int arr[]){
    int temp,i,j;
    for(i=0; i<10; i++){
        for(j=9; j>i; j--){
            if(arr[j] > arr[j-1]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}