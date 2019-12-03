/*  과제 1,2 : fruit.c
	작성일 : 18. 07. 26
	프로그램 내용 : 사용자로부터 과일 이름과 가격을 입력받아 저장하는 프로그램
*/

#include<stdio.h>

struct fruit {
	char name[20];
	int money;
};
typedef struct fruit fruit;

int main() {
	fruit fw;
	FILE *f;

	printf("과일 입력 : ");
	gets(fw.name);
	printf("가격 입력 : ");
	scanf("%d", &fw.money);


	if (fopen_s(&f, "fruit.txt", "w")) {
		printf("파일 이상");
		exit(1);
	}

	fprintf(f, "%s %d\n", fw.name, fw.money);	//파일작성
	fclose(f);
	printf("===============\n입력%완료\n===============\n");

	if (fopen_s(&f, "fruit.txt", "r")) {
		printf("파일 없음");
		exit(1);
	}

	//fscanf(f, "%s %d\n", fw.name, &fw.money);	//파일로부터 입력받음. 가져옴
	printf("\n 저장된 내용 확인 !\n");
	printf("과일 : %s\n가격 : %d\n", fw.name, fw.money);

	return 0;
}