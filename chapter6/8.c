#include<stdio.h>
int main() {
	int time, age;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf_s("%d %d", &time, &age);

	if (time >= 17)
		printf("����� 10,000�Դϴ�");
	else if ((age >= 3 && age <= 12) || age >= 65)
		printf("����� 25,000�Դϴ�");
	else
		printf("����� 34,000�Դϴ�");

	return 0;
}