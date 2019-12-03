/*  과제 1, 2 : score.c
	작성일 : 18. 08. 02
	프로글매 내용 : 크기가 5인 배열에 정수를 입력받아 숫자랑 총합을 score.bin에 저장하는 프로그램
*/

#include<stdio.h>	

int main() {

	int num[5];
	int i, sum = 0, j = 1;
	int cnum[5];
	FILE *f;

	if (fopen_s(&f, "score.bin", "wb")) {
		printf("파일 이상");
		exit(1);
	}

	for (i = 0; i < 5; i++) {
		printf("%d 번째 숫자 입력 : ", j++);
		scanf("%d", &num[i]);
		sum += *(num + i);
	}
	fwrite(num, sizeof(num), 1, f);
	fwrite(&sum, sizeof(sum), 1, f);
	fclose(f);

	if (fopen_s(&f, "score.bin", "rb")) {
		printf("파일 이상");
		exit(1);
	}
	j = 1;
	fread(cnum, sizeof(cnum), 1, f);
	fread(&sum, sizeof(sum), 1, f);
	for (i = 0; i < sizeof(cnum) / sizeof(int); i++) {
		printf("%3d = %3d\n", j++, *(cnum + i));
	}
	printf("총 합계 : %3d\n", sum);

	fclose(f);

	return 0;
}