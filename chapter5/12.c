#include<stdio.h>
int main() {

	char a, b, c, d;
	unsigned int result;

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s(" %c", &a, 1);
	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s(" %c", &b, 1);
	printf("����° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s(" %c", &c, 1);
	printf("�׹�° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s(" %c", &d, 1);

	result = a;
	result = result | (b << 8);
	result = result | (c << 16);
	result = result | (d << 24);
	printf("�����: %x", result);
	return 0;
}