#include<stdio.h>
#define pi 3.141592
int main() {
	double dis, ang, rad;

	printf("�Ÿ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &dis);
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &ang);

	rad = dis / ang * 360 / 2 / pi; //�ѷ� = 2 * pi *r = dis / ang *360

	printf("������ �������� %lf", rad);

	return 0;
}