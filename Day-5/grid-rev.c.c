#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {           
        for (int j = i; j >= 1; j--) {       
            printf("%d", j);
        }
        for (int j = 2; j <= 6 - i; j++) {  
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
