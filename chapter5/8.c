#include<stdio.h>
#define pi 3.141592
int main() {
	double radius;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &radius);

	printf("ǥ������ %lf�Դϴ�.\n", 4 * pi * radius * radius);
	printf("ü���� %lf�Դϴ�.", (4.0/ 3.0) * pi * radius * radius * radius);

	return 0;
}