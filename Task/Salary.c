/*  ���� 1 : Salary.c
	�ۼ��� : 18. 07. 12
	���α׷� ���� : ����ü�� ���� �� ��޿� �°� ����
*/

#include<stdio.h>

struct aa {
	char name[20];
	int age;
	char grade;
	int salary;
}per;
int main() {
	
	printf("�̸� �Է� : ");
	//scanf("%s", per.name);
	gets(per.name);
	printf("���� �Է� : ");
	scanf("%d", &per.age);
	while (getchar() != '\n');
	printf("��� �Է� : ");
	//fflush(stdin);
	scanf("%c", &per.grade);

	if (per.grade == 'A')
		per.salary = 3000000;
	else if (per.grade == 'B')
		per.salary = 2500000;
	else if (per.grade == 'C')
		per.salary = 2000000;
	else if (per.grade == 'D')
		per.salary = 1500000;
	else if (per.grade == 'E')
		per.salary = 1000000;

	puts("----------------------------------");
	printf("�̸� : %s\n", per.name);
	printf("���� : %d\n", per.age);
	printf("��� : %c\n", per.grade);
	printf("���� : %d\n", per.salary);
	puts("----------------------------------");



	return 0;
}	//end of main