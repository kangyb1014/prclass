#include <stdio.h>
#include <string.h>

struct birthday {
	int year;
	int month;
	int day;
};
typedef struct birthday bir;

typedef struct person {
	char name[20];
	bir birth;
	char gender[7];
	char address[30];
	int phone;
} person;



void sortname(person book[], int n);
void sortbirth(person book[], int n);

person book[10];
int main()
{
	int n;
	printf("사람의 수를 입력해주세요\n");
	scanf("%d", &n);
	printf("사람의 이름, 생년월일, 성별, 주소, 전화번호를 입력하세요\n");
	for (int i = 0; i < n; i++)
		scanf("%s %d %d %d %s %s %d", &book[i].name, &book[i].birth.year, &book[i].birth.month, &book[i].birth.day, &book[i].gender, &book[i].address, &book[i].phone);

	printf("\n입력한 순서 \n");
	printf("이름\t 생년월일\t 성별\t 주소\t 전화번호\n");
	for (int i = 0; i < n; i++)
		printf("%s\t %d-%d-%d\t %s\t %s\t %011d\n", book[i].name, book[i].birth.year, book[i].birth.month, book[i].birth.day, book[i].gender, book[i].address, book[i].phone);

	printf("\n이름순서\n");
	printf("이름\t 생년월일\t 성별\t 주소\t 전화번호\n");
	sortname(book, n);
	for (int i = 0; i < n; i++)
		printf("%s\t %d-%d-%d\t %s\t %s\t %011d\n", book[i].name, book[i].birth.year, book[i].birth.month, book[i].birth.day, book[i].gender, book[i].address, book[i].phone);

	printf("\n생년월일순서\n");
	printf("이름\t 생년월일\t 성별\t 주소\t 전화번호\n");
	sortbirth(book, n);
	for (int i = 0; i < n; i++)
		printf("%s\t %d-%d-%d\t %s\t %s\t %011d\n", book[i].name, book[i].birth.year, book[i].birth.month, book[i].birth.day, book[i].gender, book[i].address, book[i].phone);
}

void sortname(person book[], int n)
{
	person temp;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (strcmp(book[i].name, book[j].name) > 0)
			{
				temp = book[i];
				book[i] = book[j];
				book[j] = temp;
			}
		}
	}
}


void sortbirth(person book[], int n)
{
	person temp;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (book[i].birth.year == book[j].birth.year)
			{
				if (book[i].birth.month == book[j].birth.month)
				{
					if (book[i].birth.day > book[j].birth.day)
					{
						temp = book[i];
						book[i] = book[j];
						book[j] = temp;
					}
				}
				else if (book[i].birth.month > book[j].birth.month)
				{
					temp = book[i];
					book[i] = book[j];
					book[j] = temp;
				}
			}
			else if (book[i].birth.year > book[j].birth.year)
			{
				temp = book[i];
				book[i] = book[j];
				book[j] = temp;
			}
		}
	}

}
