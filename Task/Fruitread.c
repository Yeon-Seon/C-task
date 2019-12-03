/*  과제 2 : fruit.c
	작성일 : 18. 07. 26
	프로그램 내용 : fruit.txt를 읽어 출력하는 프로그램
*/


#include<stdio.h>

struct fruit {
	char name[20];
	int money;
};
typedef struct fruit fruit;

int main() {
	char fname[] = "fruit.txt";
	FILE *f;
	fruit fw;

	printf("과일 입력 : ");
	gets(fw.name);
	printf("가격 입력 : ");
	gets(fw.money);

	printf("%d", fw.money);

	if (fopen_s(&f, fname, "w")) {
		//fopen_s(~~~) != 0
		//fopen("fruit.txt", "w" == NULL)
		printf("파일 이상");
		exit(1);
	}

	fprintf(f, "%s %d\n", fw.name, fw.money);
	fclose(f);
	printf("===============\n입력%완료\n===============\n");

	return 0;
}