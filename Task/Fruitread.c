/*  ���� 2 : fruit.c
	�ۼ��� : 18. 07. 26
	���α׷� ���� : fruit.txt�� �о� ����ϴ� ���α׷�
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

	printf("���� �Է� : ");
	gets(fw.name);
	printf("���� �Է� : ");
	gets(fw.money);

	printf("%d", fw.money);

	if (fopen_s(&f, fname, "w")) {
		//fopen_s(~~~) != 0
		//fopen("fruit.txt", "w" == NULL)
		printf("���� �̻�");
		exit(1);
	}

	fprintf(f, "%s %d\n", fw.name, fw.money);
	fclose(f);
	printf("===============\n�Է�%�Ϸ�\n===============\n");

	return 0;
}