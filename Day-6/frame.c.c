#include <stdio.h>

int main() {
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for(int j=0; j<n;j++){
       if (i==0 || j==0||i==4||j==4){
           printf("*");
       }
       else{
           printf(" ");
       }
       
        }
        printf("\n");
    
    }

    return 0;
}