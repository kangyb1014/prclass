#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  _MAX 999999

const int V = 23;
using namespace std;

int n;
int edge[V][V];
int cache[1 << V][V] = { 0, };
//cache는 현재 노드에서 0011...에서 나머지를 갔을 때 최소 값

//0번노드를 갔으면 000...001
//1번노드를 갔으면 000...011

//파일 이름 문자열을 리턴하는 함수 . 99 이하의 숫자를 size 뒤에 붙여줌. ex)size05.txt
char *setstr(char str[], int size)
{
	strcpy(str, "size");
	int i = strlen(str);
	if (size < 10)
	{
		str[i] = '0';
		str[++i] = size + '0';
	}
	else
	{
		str[i] = (size / 10) + '0';
		str[++i] = (size % 10) + '0';
	}
	str[++i] = NULL;
	//strcat(str, ".txt");
	return str;
}

int TSP(int visit, int curnode)
{
	if (visit == (1 << n) - 1)	//모두 방문했을 경우 현재 노드에서 0까지 거리 리턴
	{
		return edge[curnode][0];
	}

	if (cache[visit][curnode] != 0)
	{
		return cache[visit][curnode];
	}

	int ret = _MAX;
	int temp;

	for (int i = 0; i < n; i++)
	{
		if ((visit & (1 << i)) == 0)
		{
			temp = 1 << i;
			ret = min(ret, TSP(visit + temp, i) + edge[curnode][i]);
		}
		cache[visit][curnode] = ret;
	}

	return ret;
}

int main()
{
	int temp;
	FILE *fin;
	FILE *fout = fopen("result.txt","w");
	char fname[12];

	clock_t before;
	double exetime;
	
	for (n = 2; n <= V; n++)
	{
		memset(cache, 0, sizeof(cache));
		memset(edge, 0, sizeof(edge));
		setstr(fname, n);

		if ((fin = fopen(strcat(fname,".txt"), "r")) == NULL)
		{
			printf("FAILED %d\n",n);
			return 0;
		}
		printf("%d start...", n);

		fscanf(fin, "%d", &temp);
		if (temp != n)
		{
			printf("temp:%d != n:%d\n",temp,n);
			return 0;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				fscanf(fin,"%d ",&edge[i][j]);
			}
		}
		before = clock();
		fprintf(fout,"size = %d , result = %d, time:", n , TSP(1, 0));
		exetime = (double)(clock() - before) / CLOCKS_PER_SEC;
		fprintf(fout,"%5.5f \n", exetime);
		fclose(fin);

		printf("end\n");
	}
	fclose(fout);
	return 0;
}
