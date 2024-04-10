#include<stdio.h>
int main() {
	double ac, bc, ae, de;

	printf("지팡이의 높이를 입력하시오: ");
	scanf_s("%lf", &bc);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf_s("%lf", &ac);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf_s("%lf", &ae);

	de = ae * bc / ac;

	printf("피라미드의 높이는 %lf입니다.", de);

	return 0;
}