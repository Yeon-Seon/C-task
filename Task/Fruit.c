/*  ���� 1,2 : fruit.c
	�ۼ��� : 18. 07. 26
	���α׷� ���� : ����ڷκ��� ���� �̸��� ������ �Է¹޾� �����ϴ� ���α׷�
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

	printf("���� �Է� : ");
	gets(fw.name);
	printf("���� �Է� : ");
	scanf("%d", &fw.money);


	if (fopen_s(&f, "fruit.txt", "w")) {
		printf("���� �̻�");
		exit(1);
	}

	fprintf(f, "%s %d\n", fw.name, fw.money);	//�����ۼ�
	fclose(f);
	printf("===============\n�Է�%�Ϸ�\n===============\n");

	if (fopen_s(&f, "fruit.txt", "r")) {
		printf("���� ����");
		exit(1);
	}

	//fscanf(f, "%s %d\n", fw.name, &fw.money);	//���Ϸκ��� �Է¹���. ������
	printf("\n ����� ���� Ȯ�� !\n");
	printf("���� : %s\n���� : %d\n", fw.name, fw.money);

	return 0;
}