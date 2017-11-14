#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct node
{
	int value;
	struct node *next;
} node;

int main()
{
	char str[11];
	node* curnode = (node*)malloc(sizeof(node));
	node* head = curnode;

	head->value = atoi(gets(str));
	int n = 1;

	while (gets(str))
	{
		curnode->next = (node*)malloc(sizeof(node));
		curnode = curnode->next;
		curnode->value = atoi(str);
		n++;
	}
	curnode->next = NULL;
	printf("입력된 자료의 개수 %d\n", n);

	//역순으로 출력
	printf("역순으로 출력: ");
	int last = n;
	while (last > 0)
	{
		curnode = head;
		for (int i = 0; i < last - 1; i++)
			curnode = curnode->next;
		printf("%d ", curnode->value);
		last--;
	}

	//중간값출력
	printf("\n중간값 출력:");
	curnode = head;
	int mid = 0;
	while (mid < n / 2)
	{
		if (n % 2 == 0 && mid == n / 2 - 1)
			printf("%d ", curnode->value);
		curnode = curnode->next;
		mid++;
	}
	printf("%d\n", curnode->value);

	//입력순으로출력
	printf("입력순으로 출력:");
	curnode = head;
	while (curnode != NULL)
	{
		printf("%d ", curnode->value);
		curnode = curnode->next;
	}

	//홀수번째 자료 삭제
	head = head->next;
	curnode = head;
	int cur = 2;

	if (n % 2 == 0)
		last = n;
	else
		last = n - 1;

	while (cur < last)
	{
		curnode->next = curnode->next->next;
		curnode = curnode->next;
		cur += 2;
	}
	curnode->next = NULL;

	printf("\n남은것출력\n");

	curnode = head;
	while (curnode != NULL)
	{
		printf("%d ", curnode->value);
		curnode = curnode->next;
	}


	return 0;
}
