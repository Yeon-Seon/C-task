/*  ���� 2 : strlength.c
�ۼ��� : 18. 07. 04
���� ������ : 18. 07. 10
���α׷� ���� : ũ�Ⱑ 10�� �迭�� 1-10���� �ߺ����� �ʰ� �������� �־����� �Լ��� �Ҵ�Ƚ�� ������ִ� ���α׷�
*/

#include<stdio.h>	
#include<stdlib.h>
#include<time.h>

int add(int *,int);

int main() {
	int arr[10];
	int n;
	srand((long)time(NULL));	//srand ���ο��� ����
	n = add(arr, sizeof(arr)/sizeof(int)); // = 10
	printf("�� ���� �Ҵ� Ƚ�� : %d\n", n);
	
	return 0;
}	//end of main

int add(int *arr, int an) {
	int i;
	int count = 0;
	int n = 0;	//�ݺ� Ƚ���� ������ ������ ����
	
	
	while(count < an) {		
		arr[count] = rand() % 10 + 1;
		n++;
		for (i = 0; i < count; i++) {
			if (arr[count] == arr[i]) {	//������ ���� ������ ����� �迭�� ���ؼ� ���ٸ���
				break;	//�������� �ʰ� ��������
			}
			
		} 
		if (i == count)	//�ߺ��Ǵ� ���� �ƴ϶�� count����
			count++;
	}

	for (i = 0; i < an; i++)	//�迭 ��� �ݺ���
		printf("%3d", arr[i]);
	puts("");

	return n;
}