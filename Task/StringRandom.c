/*  과제 1 : random.c
	작성일 : 18. 07. 19
	최종 수정일 : 18. 07. 22
	프로그램 내용 : 문자열을 입력하여 1부터 입력한 숫자 중 랜덤으로 10개 출력하는 프로그램
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

	printf("문자열 입력 : ");
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
	if (!strncmp(str, "/random ", 8)) {	//\random을 입력하고 
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
		printf("1부터 %d 중 랜덤값 : %d\n", a, rand()%a + 1);
	}

}
