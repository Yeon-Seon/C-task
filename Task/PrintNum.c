/*  ���� 2 : PrintNum.c
	�ۼ��� : 18. 07. 11
	���α׷� ���� : ���ڿ��� �Է¹޾� ���ڸ� ��µǵ��� �ϴ� ���α׷�
*/

#include<stdio.h>

void search_digit(char *ch);
int main(int argc, char *argv[]) {
	char ch[100];

	printf("���ڿ� �Է� : ");
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