#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 10000

int main(int argc, char* argv[]) {
	if (argc < 2)
	{
		printf("ERROR : 명령행 인자는 2개 이상이 되어야 합니다\n");
		return 0;
	}

	FILE *infile;
	if ((infile = fopen(argv[1], "r")) == NULL)
	{
		printf("읽을 파일이 없습니다\n");
		exit(1);
	}

	//출력 파일의 이름을 .rev로 설정
	char foutname[MAXLINE + 1];
	strcpy(foutname, argv[1]);
	for (int i = strlen(foutname) - 1; i > 0; i--) {
		if (foutname[i] == '.')
		{
			foutname[i + 1] = 'r';
			foutname[i + 2] = 'e';
			foutname[i + 3] = 'v';
			foutname[i + 4] = '\0';
			break;
		}
	}

	FILE *outfile = fopen(foutname, "w");

	int linecnt = 0, wordcnt = 0, charcnt = 0;
	char str[MAXLINE + 1];

	char *deli = " ,.\t";
	char *ptoken;
	char tempstr[MAXLINE+1];

	do
	{
		fgets(str, MAXLINE, infile);

		//단어 개수 카운트
		strcpy(tempstr, str);
		ptoken = strtok(tempstr, deli);
		while (ptoken != NULL)
		{
			++wordcnt;
			ptoken = strtok(NULL, deli);
		}


		//소문자는 대문자로, 대문자는 소문자로 변경
		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				++charcnt;
				str[i] += 32;
			}
			else if (str[i] >= 'a' && str[i] <= 'z')
			{
				++charcnt;
				str[i] -= 32;
			}
			else if (str[i] >= '0' && str[i] <= '9')
				++charcnt;

		}

		//outfile에 줄번호와 문자열 출력 , 줄 수 카운트
		fprintf(outfile, "%d ", ++linecnt);
		fputs(str, outfile);

	} while (!feof(infile));


	printf("<Count Result>\n");
	printf("Line Count:\t\t %d\n", linecnt);
	printf("Word count:\t\t %d\n", wordcnt);
	printf("Character count:\t %d\n", charcnt);
	printf("File saved in %s\n", foutname);

	return 0;

}
