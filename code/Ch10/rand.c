// file: rand.c 
#include <stdio.h> 

#include <stdlib.h> //rand () 위한 헤더파일 포함

int main(void)
{
	printf("O ~ %5d 사이의 난수 5개: rand()\n", RAND_MAX);
	for (int i = 0; i < 5; i++)
		printf("%d ", rand()); 
	puts("");
	
	return 0;
}
