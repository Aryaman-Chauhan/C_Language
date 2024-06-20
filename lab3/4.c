#include <stdio.h>
int main(){
	float u, a, t;
	printf("Input speed:");
	scanf("%f", &u);
	printf("Input acceleration:");
	scanf("%f", &a);
	printf("Input time:");
	scanf("%f", &t);
	float temp1 = u * t;
	float temp2 = 0.5 * a * t * t;
	float d = temp1 + temp2;
	printf("The distance travelled is: %f \n",d );
	return 0;
}