#include <stdio.h>

int main(void)
{
	int number[30] = { 0, };
	int student[28] = { 0, };

	for (int i = 0; i < 30; i++)
	{
		number[i] = i + 1;
	}

	for (int j = 0; j < 28; j++)
	{
		scanf("%d", &student[j]);
		
		
		for (int i = 0; i < 30; i++)
		{
			if (student[j] == number[i])
			{
				number[i] = 0;
			}

		}
	}

	for (int i = 0; i < 30; i++)
	{
		if (number[i] != 0)
		{
			printf("%d\n", number[i]);
		}
	}

}