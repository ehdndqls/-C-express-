#include<stdio.h>
int main() {
	double ac, bc, ae, de;

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf_s("%lf", &bc);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf_s("%lf", &ac);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &ae);

	de = ae * bc / ac;

	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�.", de);

	return 0;
}