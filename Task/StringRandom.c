/*  ���� 1 : random.c
	�ۼ��� : 18. 07. 19
	���� ������ : 18. 07. 22
	���α׷� ���� : ���ڿ��� �Է��Ͽ� 1���� �Է��� ���� �� �������� 10�� ����ϴ� ���α׷�
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int identity(char *);
int changeInt(char *);
int main() {
	srand((long)time(NULL));
	char str[100];
	int s;

	printf("���ڿ� �Է� : ");
	gets(str);

	s = identity(str);
	if (s == 1)
		changeInt(str);
	else if(s == 0)
		printf("Error");
	
	return 0;
}	//end of main

int identity(char *str) {
	int num = atoi(str + 8);
	if (!strncmp(str, "/random ", 8)) {	//\random�� �Է��ϰ� 
		//if (atoi(str + 8) >= 48 && atoi(str + 8) <= 57) { 
			return 1;
		//}
	}

	else
		return 0;
}

int changeInt(char *str) {

	int a = atoi(str + 8);
	int i;
	printf("%d\n", a);
	for (i = 0; i < 10; i++) {
		printf("1���� %d �� ������ : %d\n", a, rand()%a + 1);
	}

}
