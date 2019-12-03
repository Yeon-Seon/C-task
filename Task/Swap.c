/*  ���� 3 : swap.c
	�ۼ��� : 18. 08. 02	
	���α׷� ���� : ���ڸ� ���� �о �������� ����ϴ� ���α׷�
*/

#include<stdio.h>

int main() {
	char ch[] = "Sweet if pleasure after pain.";
	char copych[30];
	int i, temp, size;
	FILE *f;

	if(fopen_s(&f, "word.bin", "wb")) {
		printf("���� �̻�");
		exit(1);
	}

	fwrite(ch, sizeof(ch), 1, f);
	fclose(f);

	if (fopen_s(&f, "word.bin", "rb")) {
		printf("���� �̻�");
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