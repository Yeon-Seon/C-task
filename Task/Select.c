/*  ���� 2 : Select.c
	�ۼ��� : 18. 07. 12
	���α׷� ���� : 4���� ��� ������ �Է��Ͽ� ���̰� ���� ��� ������ ���� ������� ����ϴ� ���α׷�
*/

#include<stdio.h>

struct aa {
	char name[20];
	int age;
	char grade;
	int salary;
}per[4];

int main() {
	
	int i = 0;
	int age, s;


	for (i = 0; i < sizeof(per)/sizeof(struct aa); i++) {
		printf("�̸� �Է� : ");
		//scanf("%s", per.name);
		gets(per[i].name);
		printf("���� �Է� : ");
		scanf("%d", &per[i].age);
		while (getchar() != '\n');
		printf("��� �Է� : ");
		//fflush(stdin);
		scanf("%c", &per[i].grade);
		while (getchar() != '\n');

		if (per[i].grade == 'A')
			per[i].salary = 3000000;
		else if (per[i].grade == 'B')
			per[i].salary = 2500000;
		else if (per[i].grade == 'C')
			per[i].salary = 2000000;
		else if (per[i].grade == 'D')
			per[i].salary = 1500000;
		else if (per[i].grade == 'E')
			per[i].salary = 1000000;
	}

	age = 0;
	for (i = 1; i < sizeof(per) / sizeof(struct aa); i++) {
		if (per[age].age >= per[i].age) {
			if(per[age].salary <= per[i].salary)
				age = i;
			
		}
	}
	

	puts("----------------------------------");
	printf("�̸� : %s\n", per[age].name);
	printf("���� : %d\n", per[age].age);
	printf("��� : %c\n", per[age].grade);
	printf("���� : %d\n", per[age].salary);
	puts("----------------------------------");



	return 0;
}	//end of main