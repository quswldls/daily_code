#include <stdio.h>

int main(void)
{
	int num[10] = { 0, };
	int remainder[10] = { 0, };
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		int check = 0;
		scanf("%d", &num[i]);
		remainder[i] = num[i] % 42;
		for (int j = 0; j < i; j++)
		{
			if (remainder[i] == remainder[j])
			{
				check = 1;
			}
		}
		if (check == 0)
		{
			count++;
		}
	}
	printf("%d", count);
}