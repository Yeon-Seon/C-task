/*  ���� 1, 2 : score.c
	�ۼ��� : 18. 08. 02
	���α۸� ���� : ũ�Ⱑ 5�� �迭�� ������ �Է¹޾� ���ڶ� ������ score.bin�� �����ϴ� ���α׷�
*/

#include<stdio.h>	

int main() {

	int num[5];
	int i, sum = 0, j = 1;
	int cnum[5];
	FILE *f;

	if (fopen_s(&f, "score.bin", "wb")) {
		printf("���� �̻�");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("%d ��° ���� �Է� : ", j++);
		scanf("%d", &num[i]);
		sum += *(num + i);
	}
	fwrite(num, sizeof(num), 1, f);
	fwrite(&sum, sizeof(sum), 1, f);
	fclose(f);

	if (fopen_s(&f, "score.bin", "rb")) {
		printf("���� �̻�");
		exit(1);
	}
	j = 1;
	fread(cnum, sizeof(cnum), 1, f);
	fread(&sum, sizeof(sum), 1, f);
	for (i = 0; i < sizeof(cnum) / sizeof(int); i++) {
		printf("%3d = %3d\n", j++, *(cnum + i));
	}
	printf("�� �հ� : %3d\n", sum);

	fclose(f);

	return 0;
}