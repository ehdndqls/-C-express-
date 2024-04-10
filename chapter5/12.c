#include<stdio.h>
int main() {

	char a, b, c, d;
	unsigned int result;

	printf("첫번째 문자를 입력하시오: ");
	scanf_s(" %c", &a, 1);
	printf("두번째 문자를 입력하시오: ");
	scanf_s(" %c", &b, 1);
	printf("세번째 문자를 입력하시오: ");
	scanf_s(" %c", &c, 1);
	printf("네번째 문자를 입력하시오: ");
	scanf_s(" %c", &d, 1);

	result = a;
	result = result | (b << 8);
	result = result | (c << 16);
	result = result | (d << 24);
	printf("결과값: %x", result);
	return 0;
}