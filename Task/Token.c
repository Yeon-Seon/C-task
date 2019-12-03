/*  과제 2 : token.c
	작성일 : 18. 07. 19
	프로그램 내용 : 문자열을 입력하여 스페이스바 기준으로 토큰 개수를 구한는 프로그램
*/

#include<stdio.h>
#include<string.h>	
int tokenNumberA(char *);
int main() {
	char ch[100];
	int n;

	printf("문자열을 입력 : ");
	gets(ch);

	printf("입력한 문자열 %s를 ", ch);
	n = tokenNumberA(ch);
	printf("스페이스로 나눴을때 토큰의 개수는 %d개 입니다.", n);
	return 0;
}

int tokenNumberA(char *str) {
	int cnt = 0;
	char *pstr = strtok(str, " ");
	while (pstr != '\0') {
		cnt++;
		pstr = strtok(NULL, " ");

	}
	return cnt;
}