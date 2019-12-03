/*  과제 1 : score.c
	작성일 : 18. 08. 09
	프로그램 내용 : 학생 수만큼 메모리를 할당하여 점수를 입력 후 학생 점수와 전체 점수까지 출력하는 프로그램
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main() {
	int *score;
	int num, i, sum = 0;

	printf("학생 수 입력하세요 : ");
	scanf("%d", &num);
	score = (int *)malloc(sizeof(int) * num);

	//학생점수 입력
	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		printf("%d번 째 학생 점수 입력 : ", (i + 1));
		scanf("%d", (score + i));
	}

	//학생점수 출력
	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		printf("%d번 째 학생 점수 : %d\n", (i + 1), *(score + i));
	}

	//합출력
	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		sum += *(score + i);
	}
	printf("총 학생의 점수 : %d", sum);


	return 0;
}