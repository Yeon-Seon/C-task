/*  �ǽ� 2 : transfer.c
	�ۼ��� : 18. 08. 09
	���α׷� ���� : ���� �� �л����� ���� �ֱ�
*/


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>)

int main() {
	int *score;
	int num, i, sum = 0;
	int nnum, addnum;

	printf("�л� �� �Է��ϼ��� : ");
	scanf("%d", &num);
	score = (int *)malloc(sizeof(int) * num);

	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		printf("%d�� ° �л� ���� �Է� : ", (i + 1));
		scanf("%d", (score + i));
	}

	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		printf("%d�� ° �л� ���� : %d\n", (i + 1), *(score + i));
	}

	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		sum += *(score + i);
	}
	printf("�� �л��� ���� : %d", sum);

	//����ó��
	printf("\n���� �� �л� �� �Է��ϼ��� : ");
	scanf("%d", &nnum);
	addnum = nnum + num;
	score = (int *)realloc(score, sizeof(int) * addnum);

	for (i = 0; i <nnum; i++) {
		printf("%d�� ° ���л� ���� �Է� : ", (i + 1));
		scanf("%d", (score + (i+num)));
	}

	for (i = 0; i < nnum; i++) {
		printf("%d�� ° ���л� ���� : %d\n", (i + 1), *(score + (i+num)));
	}

	sum = 0;
	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		sum += *(score + i);
	}
	printf("�� �л��� ���� : %d", sum);

	return 0;
}