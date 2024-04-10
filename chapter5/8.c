#include<stdio.h>
#define pi 3.141592
int main() {
	double radius;

	printf("구의 반지름을 입력하시오: ");
	scanf_s("%lf", &radius);

	printf("표면적은 %lf입니다.\n", 4 * pi * radius * radius);
	printf("체적은 %lf입니다.", (4.0/ 3.0) * pi * radius * radius * radius);

	return 0;
}