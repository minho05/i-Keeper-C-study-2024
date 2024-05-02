#include <stdio.h>
int main() {
	int count;
	int list[1000000];
	

	scanf_s("%d", &count);
	for (int i = 0; i < count; i++)
	{
		scanf_s("%d", &list[i]);
	}

	int max = list[0];

	int min = list[0];

	for (int i = 1; i < count; i++)
	{

		if(max < list[i])
			{
				max = list[i];
			}
		else if(min > list[i])
		{
			min = list[i];
		}
	}


	printf("%d\n", min);

	printf("%d", max);


}
