/*  과제 3 : swap.c
	작성일 : 18. 08. 02	
	프로그램 내용 : 문자를 쓰고 읽어서 역순으로 출력하는 프로그램
*/

#include<stdio.h>

int main() {
	char ch[] = "Sweet if pleasure after pain.";
	char copych[30];
	int i, temp, size;
	FILE *f;

	if(fopen_s(&f, "word.bin", "wb")) {
		printf("파일 이상");
		exit(1);
	}

	fwrite(ch, sizeof(ch), 1, f);
	fclose(f);

	if (fopen_s(&f, "word.bin", "rb")) {
		printf("파일 이상");
		exit(1);
	}

	fread(copych, sizeof(copych), 1, f);
	
	size = strlen(copych);
	for (i = 0; i < size/2; i++) {
		temp = copych[i];
		copych[i] = copych[size - i-1];
		copych[size - i-1] = temp;
	}

	printf("%s\n", copych);
	

	return 0;
}