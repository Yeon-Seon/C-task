/*  �ǽ� 3 : student.c
	�ۼ��� : 18. 07. 26
	���α׷� ���� : ���ϸ��� ����ڷκ��� �Է� �޾� �л����� �̸�, �߰�, �⸻ ������ �����ϴ� ���α׷�
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

	printf("���� �̸� �Է� : ");
	gets(fname);
	strcat(fname, ".txt");

	if (fopen_s(&f, fname, "w")) {
		printf("���� �̻�");
		exit(f);
	}	

	int i, cnt = 1;
	for (i = 0; i < 3; i++) {
		printf("�̸� �Է� : ");
		gets((stu + i)->name);
		

		printf("�߰� ��� ���� �Է� : ");
		scanf("%lf", &(stu + i)->score[0]);
		while (getchar() != '\n');

		printf("�⸻ ��� �Է� : ");
		scanf("%lf", &(stu + i)->score[1]);
		while (getchar() != '\n');
		fprintf(f, " %s %.2lf %.2lf \n", stu[i].name, stu[i].score[0], stu[i].score[1]);
	}

	return 0;
}	//end of main
