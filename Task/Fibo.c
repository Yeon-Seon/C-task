/*  �ǽ� 3 : fibo.c
	�ۼ��� : 18. 07. 19
	���α׷� ���� : �Ǻ���ġ ���� ���ϴ� �Լ��� ����� �Է� ���� ����°�� �Ǻ���ġ ���� ����ϴ� ���α׷�
*/

#include<stdio.h>

int fibo(int);
int main() {
	int count, input;
	
	printf("n��°�� �Ǻ���ġ �� �Է� : ");
	scanf("%d", &input);
	
	printf("%d��°�� �Ǻ���ġ ���� : %d\n", input, fibo(input));

	return 0;
}

int fibo(int n) {
	int fn;
	if (n <= 1) {
		return n;
	}
	else {
		return fibo(n - 1) + fibo(n - 2);
	}

};