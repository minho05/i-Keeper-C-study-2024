#include <stdio.h>
int main() {
	int max;
	int list[9];
	int num = 1;
	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &list[i]);
	}
	
	max = list[0];
	
	for (int i = 1; i < 9; i++)
	{
		if (max < list[i]) {
			max = list[i];
			num = i+1;
		}
	}
	printf("%d\n",max);
	printf("%d", num);
}
