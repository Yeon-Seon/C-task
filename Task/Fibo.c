/*  실습 3 : fibo.c
	작성일 : 18. 07. 19
	프로그램 내용 : 피보나치 수를 구하는 함수를 만들고 입력 받은 수번째의 피보나치 수를 출력하는 프로그램
*/

#include<stdio.h>

int fibo(int);
int main() {
	int count, input;
	
	printf("n번째의 피보나치 수 입력 : ");
	scanf("%d", &input);
	
	printf("%d번째의 피보나치 수는 : %d\n", input, fibo(input));

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