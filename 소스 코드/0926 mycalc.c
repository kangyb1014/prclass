#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[])
{
	int num1 = *argv[2], num2;



	if (strcmp(argv[1],"add") == 0)
		printf("%d\n", atoi(argv[2]) + atoi(argv[3]));
	if (strcmp(argv[1], "sub") == 0)
		printf("%d\n", atoi(argv[2]) - atoi(argv[3]));
	if (strcmp(argv[1], "mul") == 0)
		printf("%d\n", atoi(argv[2]) * atoi(argv[3]));

	if (strcmp(argv[1], "div") == 0)
		printf("%lf\n", (double)atoi(argv[2]) / (double)atoi(argv[3]));

	if (strcmp(argv[1], "quot") == 0)
		printf("%d\n", atoi(argv[2]) / atoi(argv[3]));
	if (strcmp(argv[1], "remain") == 0)
		printf("%d\n", atoi(argv[2]) % atoi(argv[3]));

	if (strcmp(argv[1], "abs") == 0)
		printf("%d", abs(atoi(argv[2])));
	if (strcmp(argv[1], "rev") == 0)
		printf("%d\n", (-1) * atoi(argv[2]));


	return 0;
}

