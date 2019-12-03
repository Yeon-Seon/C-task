/*  실습 2 : token.c
	작성일 : 18. 07. 26
	프로그램 설명 : 문자열을 입력받아 띄어쓰기마다 줄바꿈하여 token.txt 에 저장하는 프로그램
*/

#include <stdio.h>

int main() {
	FILE *f;
	char str[50];
	char ch;
	int i;

	if (fopen_s(&f, "space.txt", "w")) {
		printf("파일 이상");
		exit(1);
	}

	printf("문자열 입력 : ");
	gets(str);

	//fgets(str, 50, stdin);
	for(i = 0 ; i < strlen(str); i++){
		ch = *(str + i);
		if (*(str + i) != ' ')
			fputc(ch, f);
		else if(*(str + i) == ' ')
			fprintf(f, "\n");
	}
	
	fclose(f);

	return 0;
}