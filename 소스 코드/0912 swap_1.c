//input 2 files and swap by direct access and indirect access

#include <stdio.h>

int main()
{
	int a, b;
	char ans;
	do{
		printf("Enter two numbers: ");
		scanf("%d %d", &a, &b);

		printf("\nNumbers entered :\t\t%d\t%d", a, b);

		int temp;

		temp = a;
		a = b;
		b = temp;
		printf("\nSwap by direct access:\t\t%d\t%d", a, b);

		int *ptra = &a;
		int *ptrb = &b;

		temp = *ptra;
		*ptra = *ptrb;
		*ptrb = temp;
		printf("\nSwap by indirect access:\t%d\t%d\n", a, b);

		printf("\nRepeat?\ Y: Yes , N :No\n");
		scanf(" %c", &ans);

	} while (ans == 'Y');

	return 0;
}
