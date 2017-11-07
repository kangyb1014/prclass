#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZEARR 50

int main()
{
	int arr[SIZEARR];

	FILE *fp = fopen("test.bin", "wb+");
	if (fp == NULL)
	{
		printf("failed to open file");
		exit(1);
	}

	printf("파일로 출력: ");
	for (int i = 0; i < SIZEARR; i++)
	{
		arr[i] = i * 3;
		putw(arr[i], fp);
		printf("%d ", arr[i]);
	}

	
	rewind(fp);

	printf("\n파일에서 입력: ");
	for (int i = 0; i < SIZEARR; i++)
	{
		if (i % 2 == 0)
			printf("%d ", getw(fp));
		else
			fseek(fp, sizeof(int), SEEK_CUR);
	}

	return 0;
}
