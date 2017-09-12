//3 * 3 matrix calculation by index and pointer
#include <stdio.h>

void indexsum(int mat_a[3][3], int mat_b[3][3], int mat_res[3][3]);
void pointersum(int mat_a[3][3], int mat_b[3][3], int mat_res[3][3]);
void indexprod(int mat_a[3][3], int mat_b[3][3], int mat_res[3][3]);
void pointerprod(int mat_a[3][3] , int mat_b[3][3],  int mat_res[3][3]);

void printmat(int mat[3][3]);

int main()
{
	int mat_a[3][3], mat_b[3][3], mat_res[3][3] = { 0, };

	printf("Input 3 * 3 matrix A\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			scanf("%d", &mat_a[i][j]);
	}

	printf("Input 3 * 3 matrix B\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			scanf("%d", &mat_b[i][j]);
	}

	printf("Add by array indexing\n");
	indexsum(mat_a, mat_b, mat_res);
	printmat(mat_res);

	printf("Add by pointer\n");
	pointersum(mat_a, mat_b, mat_res);
	printmat(mat_res);

	printf("by array indexing\n");
	indexprod(mat_a, mat_b, mat_res);
	printmat(mat_res);

	printf("by pointer\n");
	pointerprod(mat_a, mat_b, mat_res);
	printmat(mat_res);

	return 0;
}


void printmat(int mat[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", mat[i][j]);
			mat[i][j] = 0;
		}
		printf("\n");
	}
	printf("\n");
	return;
}


void indexsum(int mat_a[3][3], int mat_b[3][3], int mat_res[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
				mat_res[i][j] = mat_a[i][j] + mat_b[i][j];
		}
	}
	return;
}

void pointersum(int mat_a[3][3], int mat_b[3][3], int mat_res[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			*(*(mat_res+i)+j) = *(*(mat_a+i)+j) + *(*(mat_b+i)+j);
		}
	}
	return;
}

void indexprod(int mat_a[3][3], int mat_b[3][3], int mat_res[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
				mat_res[i][j] += mat_a[i][k] * mat_b[k][j];
				
				
		}
	}
	return;
}


void pointerprod(int mat_a[3][3], int mat_b[3][3], int mat_res[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
				*(*(mat_res + i) + j) += *(*(mat_a + i) + k) * *(*(mat_b + k) + j);
		}
	}
	return;
}
