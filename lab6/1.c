#include<stdio.h>
#include<math.h>
void IsArmstrong(int a);
int main(){
    int l,u;
    printf("Enter lower limit:");
    scanf("%d",&l);
    printf("Enter upper limit:");
    scanf("%d",&u);
    for(int i=l;i<=u;i++){
        IsArmstrong(i);
    }
    printf("\n");
    return 0;
}
void IsArmstrong(int a){
    int n,s=0,c=0;
    for(n=a;n>0;n=n/10)
        c++;
    n=a;
    while(n>0){
        int d=n%10;
        n=n/10;
        s=s+pow(d,c);
    }
    if (s==a)
    {
        printf("%d  ",a);
    }
    
}