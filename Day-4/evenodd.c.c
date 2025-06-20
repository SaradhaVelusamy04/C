#include <stdio.h>

int main()
{
    int n;
    int i =0;
    printf("enter the number:");
    scanf("%d", &n);
    for(i = 0; i<=n; i++)
    {
        if ((n & 1) == 0)
        { 
            printf("%d is Even\n", i);
        }
        else{
             printf("%d is Odd\n", i);
        }
   

    }

    return 0;
}
