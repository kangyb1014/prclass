#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_EMAIL 50

char* reverse(char* str);

int main(){

	FILE *fp;
	char fname[] = "myinfo.txt";
	if ((fp = fopen(fname, "w")) == NULL)
		exit(1);

	char name[MAX_NAME];
	char email[MAX_EMAIL];
	
	gets(name);
	gets(email);

	fputs(name, fp);
	fprintf(fp, "\n");
	fputs(email , fp);

	fclose(fp);

	fp = fopen(fname, "r");
	fgets(name , MAX_NAME , fp);
	fgets(email, MAX_EMAIL, fp);

	puts(reverse(name));
	puts(reverse(email));


	// 


	FILE *source;
	source = fopen("source.c", "r");

	FILE *myprog = fopen("program.txt", "w");
	char prog[101];

	fgets(prog, 100, source);
	
	int cnt = 0;
	while (!feof(source))
	{
		fprintf(myprog, "%d ", ++cnt);
		fputs(prog, myprog);
		fgets(prog, 100, source);
	}
}

char *reverse(char *str)
{
	char temp;

	for (int i = 0; 2 * i <= strlen(str) - 1; i++)
	{
		temp = str[i];
		str[i] = str[strlen(str) - 1 -i];
		str[strlen(str) - 1 - i] = temp;
	}

	return str;
}
