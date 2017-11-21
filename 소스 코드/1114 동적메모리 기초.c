#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	printf("입력할 자료의 수:");
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int)* n);

	int sum = 0;
	double variance = 0, mean = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", (arr + i));
		sum += *(arr + i);
		variance += pow(*(arr + i) , 2);

	}
	mean = sum;
	mean /= n;

	variance /= n;
	variance -= pow(mean , 2);
	
	printf("합: %d\t평균: %lf\t 표준편차:%lf", sum, mean, sqrt(variance));

	return 0;
}
