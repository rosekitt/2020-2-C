//file: address.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;

	printf("정수 입력 : ");
	scanf("입력값: %d", &input);
	printf( "주소값: %d(10진수), %p(16진수)\n", (int)&input, &input );
	printf("주소값: %u(10진수), %#x(16진수)\n", (unsigned)&input,(int) &input);
	printf("주소값 크기: %d\n", sizeof (&input));

	return 0;
}