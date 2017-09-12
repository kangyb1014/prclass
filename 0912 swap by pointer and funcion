// input swapping mode(int). and input 2 integers to swap. 
#include <stdio.h>

void tempswap(int *a, int *b);
void addswap(int *a, int *b);
void multswap(int *a, int *b);
void eorswap(int *a, int *b);

int main()
{
	int a, b,mode;
	
	do{
		printf("select mode and input 2 integers.\n1.Temporary variable\n2.Addition/subtraction\n3.Multiplu/Division\n4.Exclusive OR\n0:Exit\n");
		scanf("%d", &mode);
		if (mode)
		{
			scanf("%d %d", &a, &b);
			switch (mode)
			{
			case 1:
				tempswap(&a, &b);
				break;
			case 2:
				addswap(&a, &b);
				break;

			case 3:
				multswap(&a, &b);
				break;

			case 4:
				eorswap(&a, &b);
				break;
			default:
				break;
			}
			printf("Swap complete.\ta : %d, \tb :%d\n\n", a, b);
		}
	}while (mode);

	return 0;
}

void tempswap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}

void addswap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	return;
}

void multswap(int *a, int *b)
{
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
	return;
}

void eorswap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	return;
}
