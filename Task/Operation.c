/*  과제 3 : operation.c
	작성일 : 18. 07. 11
	프로그램 내용 : 사칙연산 함수를 실행하는 프로그램
*/

#include<stdio.h>	

void add(double, double, double *);
void sub(double, double, double *);
void mult(double, double, double *);
void div(double, double, double *);

int main() {
	double num1, num2, result;
	int menu;
	void(*dd)(double, double, double *);	//함수포인터

	printf("첫번째 수 입력 : ");
	scanf("%lf", &num1);
	printf("두번째 수 입력 : ");
	scanf("%lf", &num2);

	printf("사칙 연산을 선택하세요\n 1.더하기 2.빼기 3.곱하기 4.나누기 ");
	scanf("%d", &menu);
	switch (menu) {
		case 1 :
			dd = add;
			dd(num1, num2, &result);
			printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
			break;
		case 2:
			dd = sub;
			dd(num1, num2, &result);
			printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
			break;
		case 3:
			dd = mult;
			dd(num1, num2, &result);
			printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
			break;
		case 4:
			dd = div;
			dd(num1, num2, &result);
			printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
			break;
	}
		
	return 0;
}	//end of main

void add(double num1, double num2, double *result) {
	*result = num1 + num2;
}

void sub(double num1, double num2, double *result) {
	*result = num1 - num2;
}

void mult(double num1, double num2, double *result) {
	*result = num1 * num2;
}

void div(double num1, double num2, double *result) {
	*result = num1 / num2;
}
