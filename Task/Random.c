/*  과제 2 : strlength.c
작성일 : 18. 07. 04
최종 수정일 : 18. 07. 10
프로그램 내용 : 크기가 10인 배열에 1-10수를 중복되지 않게 랜덤으로 넣어지는 함수와 할당횟수 출력해주는 프로그램
*/

#include<stdio.h>	
#include<stdlib.h>
#include<time.h>

int add(int *,int);

int main() {
	int arr[10];
	int n;
	srand((long)time(NULL));	//srand 메인에서 선언
	n = add(arr, sizeof(arr)/sizeof(int)); // = 10
	printf("총 랜덤 할당 횟수 : %d\n", n);
	
	return 0;
}	//end of main

int add(int *arr, int an) {
	int i;
	int count = 0;
	int n = 0;	//반복 횟수를 저장할 정수형 변수
	
	
	while(count < an) {		
		arr[count] = rand() % 10 + 1;
		n++;
		for (i = 0; i < count; i++) {
			if (arr[count] == arr[i]) {	//배당받은 수가 이제껏 저장된 배열과 비교해서 같다면은
				break;	//저장하지 않고 빠져나옴
			}
			
		} 
		if (i == count)	//중복되는 수가 아니라면 count증가
			count++;
	}

	for (i = 0; i < an; i++)	//배열 출력 반복문
		printf("%3d", arr[i]);
	puts("");

	return n;
}