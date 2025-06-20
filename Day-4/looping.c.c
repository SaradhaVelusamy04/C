#include <stdio.h>

int main()
{
    int n;
   

    printf("Enter the number: ");
    scanf("%d", &n);  

    printf("For Loop:\n");
    for (int i = 0; i <= n; i++) 
    {
        printf("%d\n", i); 
    }
    printf("while loop:\n");
    int i=0;
    while (i <= n)
    {
        i++;
        printf("%d\n", i);
       
    }
    printf("Do-While Loop:\n");
    i = 0;  
    do {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}
