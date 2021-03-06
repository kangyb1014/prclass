#include <stdio.h>
#define EN 3
#define RO 5

char *reverse(char *str1);
char *encrypt(char *str1, int n);
char *rotate(char *str1, int n);


int main()
{
	char str[101];
	printf("Enter String(more than 20 chars) :");
	gets(str);
	printf("string Entered :\t%s\n", str);
	
	char str_copy[101];
	for (int i = 0; str[i] != NULL; i++)
	{
		str_copy[i] = str[i];
		str_copy[i + 1] = NULL;
	}
	
	printf("Reversed:\t\t%s\n",reverse(str_copy));

	for (int i = 0; str[i] != NULL; i++)
	{
		str_copy[i] = str[i];
		str_copy[i + 1] = NULL;
	}

	printf("Encrypted:\t\t%s\n", encrypt(str_copy, EN));


	for (int i = 0; str[i] != NULL; i++)
	{
		str_copy[i] = str[i];
		str_copy[i + 1] = NULL;
	}

	printf("Rotated:\t\t%s\n",rotate(str_copy, RO));


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

char *encrypt(char *str1, int n)
{

	for (int i = 0; *(str1 + i) != NULL; i++)
	{
		if( *(str1 + i) != ' ')
			*(str1 + i) += n;
		if (*(str1 + i) > 'Z')
			*(str1 + i) -= 26;
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
			*(str1 + j) = *(str1 + j-1);
		}
		*str1 = last_char;
	}
	return str1;
}
