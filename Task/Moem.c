/*  �ǽ� 1 : Moem.m
	�ۼ��� : 18. 07. 26
	���α׷� ���� : ���ڿ��� �Է¹޾� ������ ���Ͽ� �����ϴ� ���α׷�
*/

#include <stdio.h>

int main() {
	char str[50];
	char vowel[] = "aeuio";
	char ch;
	int i, j;
	FILE *f;
	
	printf("���ڿ� �Է� : ");
	gets(str);

	if (fopen_s(&f, "vowel.txt", "w")) {
		printf("���� �̻�");
		exit(1);
	}

	for (i = 0; i < strlen(str); i++) {
		for (j = 0; j < 5; j++) {
			if (*(str + i) == *(vowel + j)) {
				ch = *(str + i);
				fputc(ch, f);
				//fputc(ch, f)�� ch�� �ִ� ���ڸ� f�� ����Ű�� ���Ͽ� ����
				//fprintf(f, "%c", *(str + i));
			}
		}
	}

	fclose(f);
	




	return 0;
}