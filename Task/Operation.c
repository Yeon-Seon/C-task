/*  ���� 3 : operation.c
	�ۼ��� : 18. 07. 11
	���α׷� ���� : ��Ģ���� �Լ��� �����ϴ� ���α׷�
*/

#include<stdio.h>	

void add(double, double, double *);
void sub(double, double, double *);
void mult(double, double, double *);
void div(double, double, double *);

int main() {
	double num1, num2, result;
	int menu;
	void(*dd)(double, double, double *);	//�Լ�������

	printf("ù��° �� �Է� : ");
	scanf("%lf", &num1);
	printf("�ι�° �� �Է� : ");
	scanf("%lf", &num2);

	printf("��Ģ ������ �����ϼ���\n 1.���ϱ� 2.���� 3.���ϱ� 4.������ ");
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
