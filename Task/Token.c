/*  ���� 2 : token.c
	�ۼ��� : 18. 07. 19
	���α׷� ���� : ���ڿ��� �Է��Ͽ� �����̽��� �������� ��ū ������ ���Ѵ� ���α׷�
*/

#include<stdio.h>
#include<string.h>	
int tokenNumberA(char *);
int main() {
	char ch[100];
	int n;

	printf("���ڿ��� �Է� : ");
	gets(ch);

	printf("�Է��� ���ڿ� %s�� ", ch);
	n = tokenNumberA(ch);
	printf("�����̽��� �������� ��ū�� ������ %d�� �Դϴ�.", n);
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