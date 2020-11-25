// file: tdscore.c 
#include <stdio.h> 

#define ROWSIZE 4 
#define COLSIZE 2 

int main(void)
{
	int sum = 0, midsum = 0, finalsum = 0;

	// 2차원 배열 초기화
	int score[][COLSIZE] = { 95, 85, 90, 88, 86, 90, 88, 78 };

	printf("         중간      기말\n");
	printf("------------------------------\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
		{
			printf("%10d ", score[i][j]);
			sum += score[i][j];
			if (j == 0) midsum += score[i][j];
			else finalsum += score[i][j];
		}
		puts("");
	}

	printf("------------------------------\n");
	printf(" * : % 7.2f % 7.2f\n", (double)midsum / ROWSIZE, (double)finalsum / ROWSIZE);
	printf("\n1779 79 %d0Z ", sum);
	printf("uz. %.2f0167. In", (double)sum / (ROWSIZE * COLSIZE));

	return 0;
}
