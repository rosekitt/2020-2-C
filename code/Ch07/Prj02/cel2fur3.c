// file:cel2fur3.c
#include <stdio.h>

int main(void)
{
	double celcius = 12.46;

	printf(" 섭씨 (C)   화씨 (F)\n");
	printf("---------------------\n");
	printf("%8.2lf %8.21lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.2lf %8.21lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;
	printf("%8.2lf %8.21lf\n", celcius, 9.0 / 5 * celcius + 32);
	celcius += 10;

	return 0;
}