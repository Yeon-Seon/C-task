/*  과제 2 : Select.c
	작성일 : 18. 07. 12
	프로그램 내용 : 4명의 사람 정보를 입력하여 나이가 제일 어리고 연봉이 제일 높은사람 출력하는 프로그램
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
		printf("이름 입력 : ");
		//scanf("%s", per.name);
		gets(per[i].name);
		printf("나이 입력 : ");
		scanf("%d", &per[i].age);
		while (getchar() != '\n');
		printf("등급 입력 : ");
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
	printf("이름 : %s\n", per[age].name);
	printf("나이 : %d\n", per[age].age);
	printf("등급 : %c\n", per[age].grade);
	printf("월급 : %d\n", per[age].salary);
	puts("----------------------------------");



	return 0;
}	//end of main