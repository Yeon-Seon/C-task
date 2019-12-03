/*  과제 1 : print.c
	작성일 : 18. 07. 03
	프로그램 설명 : 입력받은 값의 홀수, 짝수, 모두, 원하는 배수 출력
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

	printf("Number입력 : ");
	scanf("%d", &num);

	printf("1. 홀수출력, 2.짝수출력, 3.모두출력, 4.입력배수값");
	scanf("%d", &menu);

	if (menu == 1) {
		odd(num);
	}
	else if (menu == 2)
		even(num);
	else if (menu == 3)
		all(num);
	else if (menu == 4) {
		printf("몇의 배수 출력 하고싶?");
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