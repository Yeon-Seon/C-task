/*  �ǽ� 3 : randomnum.c
	�ۼ��� : 18. 08. 14
	���� ������ : 18. 08. 17
	���α׷� ���� : �� ����
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>

int main() {
	FILE *f;
	int *num;	//���� ���� ���� ����
	int count, i, cnt = 0;	//���� ���� ����
	int *arr;	//���Ͽ��� �о�� �迭
	srand((long)time(NULL));

	printf("���� ���� �Է� : ");
	scanf("%d", &count);
	num = (int *)malloc(sizeof(int) * count);

	if (fopen_s(&f, "num.txt", "w")) {
		printf("���� �̻�");
		exit(1);
	}

	for (i = 0; i < _msize((void *)num) / sizeof(int); i++) {
		*(num + i) = rand() % 10;
		fprintf(f, "%d ", *(num+ i));
	}

	printf("���Ͽ� ���� �Ϸ�\n");
	fclose(f);

	puts(" ");
	printf("���Ͽ� �ִ� ���ڵ� ��� \n");

	if (fopen_s(&f, "num.txt", "r")) {
		printf("���� ����");
		exit(1);		
	}

	arr = (int *)malloc(sizeof(int) * 1);
	//*(arr + cnt) = fscanf(f, "%d", &arr);

	while (1) {
		arr = (int *)realloc(arr, sizeof(int) * (cnt + 1));
		*(arr + cnt) = fscanf(f, "%d", &arr);

		if (!feof(f))
			break;

		else
			cnt++;
	}

	for (i = 0; i <= cnt; i++) {
		printf("%d", *(arr + i));
	}

	void print_digit(int *arr);
	void max_digit(int *arr);
	return 0;
}