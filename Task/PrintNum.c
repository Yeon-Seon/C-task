/*  과제 2 : PrintNum.c
	작성일 : 18. 07. 11
	프로그램 설명 : 문자열을 입력받아 숫자만 출력되도록 하는 프로그램
*/

#include<stdio.h>

void search_digit(char *ch);
int main(int argc, char *argv[]) {
	char ch[100];

	printf("문자열 입력 : ");
	scanf("%s", ch);
	search_digit(ch);
	
	return 0;
} //end of main

void search_digit(char *ch) {
	int i = 0;

	while(*(ch+i) != '\0') {
		if (*(ch+i) >= 48 && *(ch+i) <= 57) {
			printf("%c ", *(ch + i));
		}
		i++;
	}


}