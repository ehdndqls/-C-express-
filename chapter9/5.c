#include<stdio.h>
int sum(int n);
int main() {
	int n;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	printf("1부터 %d까지의 합 = %d", n, sum(n));

	return 0;
}
int sum(int n) {
	if (n == 1)
		return 1;
	return n + sum(n - 1);
}