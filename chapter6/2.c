#include<stdio.h>
int main() {
	int divisor, dividend;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &dividend);
	printf("정수를 입력하시오: ");
	scanf_s("%d", &divisor);

	if (dividend % divisor == 0) 
		printf("약수입니다.\n");
	else
		printf("약수가 아닙니다.\n");

	return 0;
}