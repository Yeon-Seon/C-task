/*  실습 3 : student.c
	작성일 : 18. 07. 26
	프로그램 내용 : 파일명을 사용자로부터 입력 받아 학생들의 이름, 중간, 기말 점수를 저장하는 프로그램
*/

#include <stdio.h>
#include<string.h>

struct student {
	char name[20];
	double score[2];
};
typedef struct student student;

int main() {
	FILE *f;
	student stu[3];
	char fname[50];

	printf("파일 이름 입력 : ");
	gets(fname);
	strcat(fname, ".txt");

	if (fopen_s(&f, fname, "w")) {
		printf("파일 이상");
		exit(f);
	}	

	int i, cnt = 1;
	for (i = 0; i < 3; i++) {
		printf("이름 입력 : ");
		gets((stu + i)->name);
		

		printf("중간 고사 점수 입력 : ");
		scanf("%lf", &(stu + i)->score[0]);
		while (getchar() != '\n');

		printf("기말 고사 입력 : ");
		scanf("%lf", &(stu + i)->score[1]);
		while (getchar() != '\n');
		fprintf(f, " %s %.2lf %.2lf \n", stu[i].name, stu[i].score[0], stu[i].score[1]);
	}

	return 0;
}	//end of main
