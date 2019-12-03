/*  과제 4 : Euclidean.c
	작성일 : 18. 07. 19
	프로그램 내용 : 최대공약수를 구하는 프로그램
*/

#include <stdio.h>

int gcd(int, int);
int main() {

	int a, b;
	printf("두 정수를 입력하면 최대공약수를 구합니다.\n");
	printf("두 정수 입력(숫자, 숫자)");
	scanf("%d %d", &a, &b);

	printf("\n%d와 %d의 최대공약수는 %d입니다 \n", a, b, gcd(a, b));



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