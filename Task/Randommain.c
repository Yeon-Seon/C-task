/*  실습 3 : randomnum.c
	작성일 : 18. 08. 14
	최종 수정일 : 18. 08. 17
	프로그램 설명 : 넘 길어요
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>

int main() {
	FILE *f;
	int *num;	//랜덤 숫자 저장 변수
	int count, i, cnt = 0;	//랜덤 숫자 개수
	int *arr;	//파일에서 읽어올 배열
	srand((long)time(NULL));

	printf("숫자 개수 입력 : ");
	scanf("%d", &count);
	num = (int *)malloc(sizeof(int) * count);

	if (fopen_s(&f, "num.txt", "w")) {
		printf("파일 이상");
		exit(1);
	}

	for (i = 0; i < _msize((void *)num) / sizeof(int); i++) {
		*(num + i) = rand() % 10;
		fprintf(f, "%d ", *(num+ i));
	}

	printf("파일에 저장 완료\n");
	fclose(f);

	puts(" ");
	printf("파일에 있는 숫자들 출력 \n");

	if (fopen_s(&f, "num.txt", "r")) {
		printf("파일 없음");
		exit(1);		
	}

	arr = (int *)malloc(sizeof(int) * 1);
	//*(arr + cnt) = fscanf(f, "%d", &arr);

	while (1) {
		arr = (int *)realloc(arr, sizeof(int) * (cnt + 1));
		*(arr + cnt) = fscanf(f, "%d", &arr);

		if (!feof(f))
			break;

		else
			cnt++;
	}

	for (i = 0; i <= cnt; i++) {
		printf("%d", *(arr + i));
	}

	void print_digit(int *arr);
	void max_digit(int *arr);
	return 0;
}