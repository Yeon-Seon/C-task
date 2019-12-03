/*  과제 3 : StringArray.c
	작성일 : 18. 07. 12
	프로그램 내용 : 문자열 배열을 오름차순으로 정렬시킨 프로그램
*/

#include<stdio.h>

void sort(char *[], int);
int main() {
	char word[6][20] = { "A little boy", "Basic house", "America", "Crazy boy", "Bidulgi", "Gongjoosang" };
	int cnt = 0;
	
	sort(word, sizeof(word) / sizeof(word[0])); // = 6
	while (cnt < sizeof(word) / sizeof(word[0]))
		printf("%s \n", word[cnt++]);

	return 0;
}	//end of main

void sort(char *ch[20], int len) {
	int i, j;
	char temp;
	//버블정렬
	for (i = 0; i < (len-1); i++) {
		for (j = 0; j < (len-1-i); j++) {
			if (*(ch + j) > *(ch + (j + 1))) {
				temp = *(ch + j);
				*(ch + j) = *(ch + (j + 1));
				*(ch + (j + 1)) = temp;
			}
		}
	}
}