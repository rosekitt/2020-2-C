// file: ptrtoary.c 
#include <stdio.h>

int main(void)
{
	int a[4] = { 1, 3, 6, 8 };
	int *pa = a; //a == &a[0] 

	// 새로 선언한 포인터 변수를 사용 
	printf("%d %d %d %d\n", *(pa), *(pa + 1), *(pa + 2), *(pa + 3));
	// 새로 선언한 포인터 변수를 배열과 같이 사용 가능 
	printf("%d %d %d %d\n", pa[0], pa[1], pa[2], pa[3]);
	// 물론 원래 배열로도 사용 가능
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	//물론 원래 배열 주소의 간접참조로도 가능
	printf("%d %d %d %d\n\n", *a, *(a + 1), *(a + 2), *(a + 3));

	pa = &a[1]; // &a[1] == a+1 
	//a[1]을 하나 증가시켜 출력 
	printf("%d ", ++*pa); // ++(*pa), 4 
	//a[1]를 출력한 후 pa를 하나 증가시켜 a[2]를 가리키도록 
	printf("%d ", *pa++); //*(pa++), 4 
	//a[2]를 하나 감소시켜 출력 
	printf("%d ", --*pa); //--(*pa)), 5 
	//a[2]를 출력하고 하나 감소시킴 
	printf("%d\n\n", (*pa)--); // 5 
	//현재 포인터 변수 pa는 a[2]를 가리키고 있으며 다음으로 배열 모두 출력 
	printf("%d %d %d %d\n", *(pa - 2), *(pa - 1), *pa, *(pa + 1));

	return 0;
}
