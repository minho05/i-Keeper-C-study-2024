#include <stdio.h>
int main(void) {
    int a;
    scanf_s("%d", &a);
    if (a <= 0)
    {
        printf("minus\n");
        if (a % 2 == 0) //���ǹ��� ��ø
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
    else
    {
        printf("plus\n");
        if (a % 2 == 0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
    return 0;
}
