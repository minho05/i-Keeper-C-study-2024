#include <stdio.h>
int GetData();
int GetMax(int a, int b, int c);
void printData(int num1, int num2, int num3, int max);
int main(void)
{
    int aList[3] = { 0 };
    int nMax = -9999, i = 0;
    for (i = 0; i < 3; ++i)
    {
        aList[i] = GetData();
    }
    nMax = GetMax(aList[0], aList[1], aList[2]);
    printData(aList[0], aList[1], aList[2], nMax);
    return 0;
}
int GetData()
{
    int num;
    printf("정수를 입력하세요. : ");
    scanf_s("%d", &num);
    return num;
}
int GetMax(int a, int b, int c)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}
void printData(int num1, int num2, int num3, int max)
{
    printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.\n", num1, num2, num3, max);
}
return 0;
}
