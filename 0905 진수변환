//input a integer and convert it to digit,octal,16 numbers
#include <stdio.h>

int main()
{
	printf("정수를 입력하세요\n");
	int n;
	scanf("%d", &n);

	printf("2진수: ");
	int zero_check = 0;
	for (int i = 31; i >= 0; i--)
		printf("%d", (n >> i) & 1);

	printf("\n8진수: ");
	long long octal = 0;
	long long cipher = 1;

	for (int i = 0; i <= 27; i = i + 3)
	{
		octal += ((n >> i) & 7) * cipher;
		cipher *= 10;
	}
	printf("%32lld", octal);

	printf("\n16진수:%25c", ' ');
	zero_check = 0;
	for (int i = 24; i >= 0; i = i - 4)
	{
		while (n > 0 && (zero_check == 0 && ((n >> i) & 15) == 0))
		{
			i = i - 4;
			printf(" ");
		}
		if (n <= 0)
		{
			i = i - 24;
			printf("      ");
		}

		zero_check = 1;
		if (((n >> i) & 15) < 10)
			printf("%d", (n >> i) & 15);
		else
			printf("%c", ((n >> i) & 15) + 55);
	}
	puts("\n");
}


/*while (zero_check == 0 && ((n >> i) & 1) == 0)
{
i = i - 1;
printf("");
}
zero_check = 1;
*/
