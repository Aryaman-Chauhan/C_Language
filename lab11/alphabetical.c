#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    printf("Enter a String \n");
    scanf("%[^\n]",ch);
    char temp;
    int n = strlen(ch);
    ch[n]=' ';
    n=n+1;
    int k=0;
	for (int i = 0; i < n; i++) {
        if (ch[i]==' ')
        {
            for (;k<=i;k++)
            {          
                for (int j = k+1; j < i; j++) {
                    if (ch[k] > ch[j]) {
                            temp = ch[k];
                            ch[k] = ch[j];
                            ch[j] = temp;
                    }
                }
            }
            k=i;
        }
        else
        continue;
	}
	printf("%s\n",ch);

    return 0;
}