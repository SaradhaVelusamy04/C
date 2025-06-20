#include <stdio.h>

int main() {
    int n = 5;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && (j == 0 || j == 4))
                printf("%d", j == 0 ? 1 : 5);
            else if (i == 1 && (j == 1 || j == 3))
                printf("%d", j == 1 ? 2 : 4);
            else if (i == 2 && j == 2)
                printf("3");
            else if (i == 3 && (j == 1 || j == 3))
                printf("%d", j == 1 ? 2 : 4);
            else if (i == 4 && (j == 0 || j == 4))
                printf("%d", j == 0 ? 1 : 5);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
