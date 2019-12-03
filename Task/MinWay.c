/*  �ǽ� 5 : MinWay.c
	�ۼ��� :18. 07. 12
	���α׷� ���� : 5*5������ ��� �ִ� ����� ���� ���ϴ� ���α׷�
*/

#include<stdio.h>

void Min_way(int *[], int);
void Print_way(int *[], int);
int main() {
	int way[5][5] = { 0 };

	Min_way(way, sizeof(way) / sizeof(way[0]));
	Print_way(way, sizeof(way) / sizeof(way[0]));

	return 0;
}	//end of main

void Min_way(int (*way)[5], int len) {
	int i, j;

	for (i = 0; i < len; i++) {
		*(*(way + i) + 0) = 1; //way[0][0] ~ way[4][0] = 1
		*(*(way + 0) + i) = 1;	//way[0][0] ~ way[0][4] = 1
	}

	for (i = 0; i < len; i++) {
		for (j = 0; j < len; j++) {
			if (i >= 1 && j >= 1) {  
				*(*(way + i) + j) = (*(*(way + (i - 1)) + j) + (*(*(way + i) + (j - 1))));
			}
		}
	}
}

void Print_way(int (*way)[5], int len) {
	int i, j;
	
	for (i = 0; i < len; i++) {
		for (j = 0; j < len; j++) {
			printf("%d ", *(*(way + i) + j));
		}
		puts("");
	}

}


