/*  ���� 1 : score.c
	�ۼ��� : 18. 08. 09
	���α׷� ���� : �л� ����ŭ �޸𸮸� �Ҵ��Ͽ� ������ �Է� �� �л� ������ ��ü �������� ����ϴ� ���α׷�
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main() {
	int *score;
	int num, i, sum = 0;

	printf("�л� �� �Է��ϼ��� : ");
	scanf("%d", &num);
	score = (int *)malloc(sizeof(int) * num);

	//�л����� �Է�
	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		printf("%d�� ° �л� ���� �Է� : ", (i + 1));
		scanf("%d", (score + i));
	}

	//�л����� ���
	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		printf("%d�� ° �л� ���� : %d\n", (i + 1), *(score + i));
	}

	//�����
	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		sum += *(score + i);
	}
	printf("�� �л��� ���� : %d", sum);


	return 0;
}