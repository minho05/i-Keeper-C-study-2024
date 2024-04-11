#include <stdio.h>

int main(void) {
    int a = 5;
    int b = 5;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}