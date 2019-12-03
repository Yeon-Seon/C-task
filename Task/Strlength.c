/*  과제 2 : strlength.c
	작성일 : 18. 07. 03
	최종 수정일 : 18. 07. 10
	프로그램 내용 : 문자열을 입력, 문자열과 길이 출력
*/

#include<stdio.h>

void input(char (*name)[20], int);
void length(char (*name)[20], int);

int main() {

	char name[5][20];
	//sizeof(name) = 5 * 20 * 1(char) , sizeof(name[0]) = 20 * 1(char)
	input(name, sizeof(name) / sizeof(name[0]));  //sizeof(name)/ sizeof(name[0]) = 5(행의수)
	length(name, sizeof(name) / sizeof(name[0]));

	return 0;
}	//end of main

void input(char (*name)[20], int n) { //배열포인터
	int i = 0;
	while (i < 5) {
		printf("%d번 째 이름 입력 : ", (i+1));
		scanf("%s", *(name+i) );	//문자열 입력 %s
		i++;		
	}
}


void length(char (*name)[20], int n) {
	int i = 0, j = 0, count = 0; 
	
	do {
		count = 0;
		for (j = 0; j < 20; j++) {
			if (*(*(name + i) + j) != '\0') //문자열 공백 '\0'
				count++;
			else
				break;
		}
		printf("%s님 이름 길이 : %d", *(name + i), count);
		i++;
		puts(" ");

	} while (i < 5);
}