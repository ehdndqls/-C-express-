#include<stdio.h>
int main() {
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	printf("���� �ڸ�: %d\n", n / 10);
	printf("���� �ڸ�: %d\n", n % 10);

	return 0;
}