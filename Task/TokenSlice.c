/*  �ǽ� 2 : token.c
	�ۼ��� : 18. 07. 26
	���α׷� ���� : ���ڿ��� �Է¹޾� ���⸶�� �ٹٲ��Ͽ� token.txt �� �����ϴ� ���α׷�
*/

#include <stdio.h>

int main() {
	FILE *f;
	char str[50];
	char ch;
	int i;

	if (fopen_s(&f, "space.txt", "w")) {
		printf("���� �̻�");
		exit(1);
	}

	printf("���ڿ� �Է� : ");
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