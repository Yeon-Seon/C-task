/*  ���� 2 : strlength.c
	�ۼ��� : 18. 07. 03
	���� ������ : 18. 07. 10
	���α׷� ���� : ���ڿ��� �Է�, ���ڿ��� ���� ���
*/

#include<stdio.h>

void input(char (*name)[20], int);
void length(char (*name)[20], int);

int main() {

	char name[5][20];
	//sizeof(name) = 5 * 20 * 1(char) , sizeof(name[0]) = 20 * 1(char)
	input(name, sizeof(name) / sizeof(name[0]));  //sizeof(name)/ sizeof(name[0]) = 5(���Ǽ�)
	length(name, sizeof(name) / sizeof(name[0]));

	return 0;
}	//end of main

void input(char (*name)[20], int n) { //�迭������
	int i = 0;
	while (i < 5) {
		printf("%d�� ° �̸� �Է� : ", (i+1));
		scanf("%s", *(name+i) );	//���ڿ� �Է� %s
		i++;		
	}
}


void length(char (*name)[20], int n) {
	int i = 0, j = 0, count = 0; 
	
	do {
		count = 0;
		for (j = 0; j < 20; j++) {
			if (*(*(name + i) + j) != '\0') //���ڿ� ���� '\0'
				count++;
			else
				break;
		}
		printf("%s�� �̸� ���� : %d", *(name + i), count);
		i++;
		puts(" ");

	} while (i < 5);
}