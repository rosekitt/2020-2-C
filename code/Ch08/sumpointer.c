// file: sumpointer.c
#define _CRT_SECURE_NO_WARNINGS //scanf()오류를 방지하기 위한 상수 정의
#include <stdio.h>

int main(void)
{
	double x, y;
	double* px = &x;
	double* py = &y;

	//포인터 변수 px와 py를 사용
	printf("두 실수 입력: ");
	scanf("%lf %lf", px, py);
	//합 출력
	printf("%.2f + %.2f = %.2f\n", *px, *py, *px + *py);

	return 0;
}
