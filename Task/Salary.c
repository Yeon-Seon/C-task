/*  과제 1 : Salary.c
	작성일 : 18. 07. 12
	프로그램 내용 : 구조체를 선언 후 등급에 맞게 월급
*/

#include<stdio.h>

struct aa {
	char name[20];
	int age;
	char grade;
	int salary;
}per;
int main() {
	
	printf("이름 입력 : ");
	//scanf("%s", per.name);
	gets(per.name);
	printf("나이 입력 : ");
	scanf("%d", &per.age);
	while (getchar() != '\n');
	printf("등급 입력 : ");
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
	printf("이름 : %s\n", per.name);
	printf("나이 : %d\n", per.age);
	printf("등급 : %c\n", per.grade);
	printf("월급 : %d\n", per.salary);
	puts("----------------------------------");



	return 0;
}	//end of main