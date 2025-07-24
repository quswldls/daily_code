#include <stdio.h>

int main(void)
{
	int N, M;
	int i, j;
	int poket[101];

	scanf("%d %d", &N, &M);

	for (int n = 0; n < N; n++)
	{
		poket[n] = n + 1;
	}

	for (int n = 0; n < M; n++)
	{
		scanf("%d %d", &i, &j);
		int temp = 0;
		temp = poket[i - 1];
		poket[i - 1] = poket[j - 1];
		poket[j - 1] = temp;
	}

	for (int n = 0; n < N; n++)
	{
		printf("%d ", poket[n]);
	}
	return 0;
}