#include<stdio.h>
#define pi 3.141592
int main() {
	double dis, ang, rad;

	printf("거리를 입력하시오: ");
	scanf_s("%lf", &dis);
	printf("각도를 입력하시오: ");
	scanf_s("%lf", &ang);

	rad = dis / ang * 360 / 2 / pi; //둘레 = 2 * pi *r = dis / ang *360

	printf("지구의 반지름은 %lf", rad);

	return 0;
}