// input 3 string

#include <stdio.h>

char *reverse(char *str1);
char *rotate(char *str1, int n);

int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	for (int i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);

	printf("첫 번째 문자열 reverse :\t%s\n", reverse(argv[1]));

	int num = 0;
	for (int i = 0; *(argv[3] + i) != NULL; i++, num *= 10)
		num += *(argv[3] + i) - 48;
	num /= 10;


	printf("세 번째 문자열의 숫자 : \t%d\n", num);
	printf("두 번째 문자열 %d만큼 rotate :\t%s\n",num , rotate(argv[2], num);

	return 0;
}

char *reverse(char *str1)
{
	int last_index;
	for (int i = 0; *(str1 + i) != NULL; i++)
		last_index = i;

	for (int i = 0, j = last_index; i < j; i++, j--)
	{
		int temp = str1[i];
		str1[i] = str1[j];
		str1[j] = temp;
	}
	return str1;
}


char *rotate(char *str1, int n)
{
	int last_index;
	for (int i = 0; *(str1 + i) != NULL; i++)
		last_index = i;

	for (int i = 0; i < n; i++)
	{
		char last_char = *(str1 + last_index);

		for (int j = last_index; j > 0; j--)
		{
			*(str1 + j) = *(str1 + j - 1);
		}
		*str1 = last_char;
	}
	return str1;
}

