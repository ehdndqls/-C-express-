#include<stdio.h>
int main() {
	int cm, feet;
	double inch, temp;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf_s("%d", &cm);

	feet = cm / 2.54 / 12;
	inch = cm / 2.54 - feet * 12;

	printf("%dcm�� %d��Ʈ %lf��ġ�Դϴ�.", cm, feet, inch);

	return 0;
}