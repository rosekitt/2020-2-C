//file: break.c
#define _CRT_SECUE_NO_WARNINGS// scanf( )오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int input;

	while (1)
	{
		printf("정수[음수, 0 (종료), 양수]를 입력 후 [ENTER] : ");
		SCANF("%d", &input);
		printf("입력한 정수 %d\n", input);
		if (input == 0)
			break;
	}
	puts("종료합니다.");

	return 0;
}