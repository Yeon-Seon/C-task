/*  ���� 1 : print.c
	�ۼ��� : 18. 07. 03
	���α׷� ���� : �Է¹��� ���� Ȧ��, ¦��, ���, ���ϴ� ��� ���
*/

#include<stdio.h>	

void odd(int);
void even(int);
void all(int);
void NPrint(int, int);

int main() {
	int num;
	int n;
	int menu;

	printf("Number�Է� : ");
	scanf("%d", &num);

	printf("1. Ȧ�����, 2.¦�����, 3.������, 4.�Է¹����");
	scanf("%d", &menu);

	if (menu == 1) {
		odd(num);
	}
	else if (menu == 2)
		even(num);
	else if (menu == 3)
		all(num);
	else if (menu == 4) {
		printf("���� ��� ��� �ϰ��?");
		scanf("%d", &n);
		NPrint(num, n);
	}
	return 0;
}	//end of main

void odd(int num) {
	int i;
	for (i = 1; i <= num; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
}

void even(int num) {
	int i;
	for (i = 1; i <= num; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}

}

void all(int num) {
	int i;
	for (i = 1; i <= num; i++) {
		printf("%d ", i);
	}
}

void NPrint(int num, int n) {
	int i;

	for (i = 1; i <= num; i++) {
		if (i % n == 0) {
			printf("%d ", i);
		}
	}
}