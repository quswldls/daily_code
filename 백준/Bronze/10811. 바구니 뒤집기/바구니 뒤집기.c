#include <stdio.h>

int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	int basket[100], ith, jth, count, temp;
	for (int i = 0; i < N; i++)
	{
		basket[i] = i + 1;
	}

	for (int i = 0; i < M; i++)
	{
		scanf("%d %d", &ith, &jth);
		count = 1;
		for (int j = ith - 1; j < (ith + jth) / 2; j++)
		{
			temp = basket[jth - count];
			basket[jth - count] = basket[j];
			basket[j] = temp;
			count++;
		}
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d ", basket[i]);
	}

	return 0;
}