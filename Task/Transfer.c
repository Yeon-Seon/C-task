/*  실습 2 : transfer.c
	작성일 : 18. 08. 09
	프로그램 설명 : 전학 온 학생까지 점수 넣기
*/


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>)

int main() {
	int *score;
	int num, i, sum = 0;
	int nnum, addnum;

	printf("학생 수 입력하세요 : ");
	scanf("%d", &num);
	score = (int *)malloc(sizeof(int) * num);

	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		printf("%d번 째 학생 점수 입력 : ", (i + 1));
		scanf("%d", (score + i));
	}

	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		printf("%d번 째 학생 점수 : %d\n", (i + 1), *(score + i));
	}

	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		sum += *(score + i);
	}
	printf("총 학생의 점수 : %d", sum);

	//전학처리
	printf("\n전학 온 학생 수 입력하세요 : ");
	scanf("%d", &nnum);
	addnum = nnum + num;
	score = (int *)realloc(score, sizeof(int) * addnum);

	for (i = 0; i <nnum; i++) {
		printf("%d번 째 전학생 점수 입력 : ", (i + 1));
		scanf("%d", (score + (i+num)));
	}

	for (i = 0; i < nnum; i++) {
		printf("%d번 째 전학생 점수 : %d\n", (i + 1), *(score + (i+num)));
	}

	sum = 0;
	for (i = 0; i < _msize((void *)score) / sizeof(int); i++) {
		sum += *(score + i);
	}
	printf("총 학생의 점수 : %d", sum);

	return 0;
}