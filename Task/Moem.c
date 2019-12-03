/*  실습 1 : Moem.m
	작성일 : 18. 07. 26
	프로그램 설명 : 문자열을 입력받아 모음만 파일에 저장하는 프로그램
*/

#include <stdio.h>

int main() {
	char str[50];
	char vowel[] = "aeuio";
	char ch;
	int i, j;
	FILE *f;
	
	printf("문자열 입력 : ");
	gets(str);

	if (fopen_s(&f, "vowel.txt", "w")) {
		printf("파일 이상");
		exit(1);
	}

	for (i = 0; i < strlen(str); i++) {
		for (j = 0; j < 5; j++) {
			if (*(str + i) == *(vowel + j)) {
				ch = *(str + i);
				fputc(ch, f);
				//fputc(ch, f)는 ch에 있는 문자를 f가 가리키는 파일에 저장
				//fprintf(f, "%c", *(str + i));
			}
		}
	}

	fclose(f);
	




	return 0;
}