#include <stdio.h>

int main(void)
{
	int N;
	double score[1000], max = 0, sum = 0, avg;

	scanf("%d", &N);
    
	for (int i = 0; i < N; i++)
	{
		scanf("%lf", &score[i]);
	}
    for (int i = 0; i < N; i++)
	{
		if(score[i] > max) max = score[i];
	}
	for (int i = 0; i < N; i++)
	{
		sum += (score[i] / max * 100);
	}

	avg = sum / N;
	printf("%lf", avg);

	return 0;
}