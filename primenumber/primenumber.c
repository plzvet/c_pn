#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input;
	int i, j;
	int cnt=0;
	
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &input);

	for (i = 2; i <= input; i++) {
		for (j = 2; j < i; j++) {
			if ((i % j) == 0)
			{
				break;
			}
		}
		if (j == i) {
			printf("%5d", i);
			cnt++;
			if (cnt == 5)
			{
				cnt = 0;
				printf("\n");
			}
		}			
	}
	
}