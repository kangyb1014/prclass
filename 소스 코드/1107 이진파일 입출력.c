#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct Class{
	char name[100];
	int classnum;
	int grade;
} cls;

int main()
{
	printf("이름,반,성적을 입력하세요. 입력이 끝나면 Ctrl+z를 입력하세요\n");
	
	//파일 열기
	FILE *fp;
	fp = fopen("save.bin", "wb");
	
	cls list;
	char line[201];

	fgets(line, 200, stdin);
	while (!feof(stdin))
	{
		sscanf(line, "%s %d %d", &list.name, &list.classnum, &list.grade);
		fwrite(&list, sizeof(list), 1, fp);
		fgets(line, 200, stdin);
	}
	fclose(fp);

	if ((fp = fopen("save.bin", "rb")) == NULL)
	{
		printf("Failed to open File\n");
		exit(1);
	}
		
	fread(&list, sizeof(list), 1, fp);

	while (!feof(fp))
	{
		printf("이름: %s , 반: %d , 성적: %d \n", list.name, list.classnum, list.grade);
		fread(&list, sizeof(list), 1, fp);
	}

	fclose(fp);

	return 0;
}
