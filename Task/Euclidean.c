/*  ���� 4 : Euclidean.c
	�ۼ��� : 18. 07. 19
	���α׷� ���� : �ִ������� ���ϴ� ���α׷�
*/

#include <stdio.h>

int gcd(int, int);
int main() {

	int a, b;
	printf("�� ������ �Է��ϸ� �ִ������� ���մϴ�.\n");
	printf("�� ���� �Է�(����, ����)");
	scanf("%d %d", &a, &b);

	printf("\n%d�� %d�� �ִ������� %d�Դϴ� \n", a, b, gcd(a, b));



	return 0;
}

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else {
		gcd(b, a%b);
	}
}

//ctrl k f, alt f8