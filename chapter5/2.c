#include<stdio.h>
int main() {
	double a, b, add, sub, mul, div;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &a, &b);

	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;

	printf("%lf %lf %lf %lf", add, sub, mul, div);

	return 0;
}