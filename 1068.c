#include <stdio.h>
int main(void) {
	int a;
	scanf("%d", &a);
	if ((a <= 100) and (a >= 90))
		printf("A");
	else if ((a < 90) and (a >= 70))
		printf("B");
	else if ((a < 70) and (a >= 40))
		printf("C");
	else
		printf("D");
	return 0;
}