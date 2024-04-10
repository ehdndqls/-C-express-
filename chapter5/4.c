#include<stdio.h>
int main() {
	int cm, feet;
	double inch, temp;

	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &cm);

	feet = cm / 2.54 / 12;
	inch = cm / 2.54 - feet * 12;

	printf("%dcm는 %d피트 %lf인치입니다.", cm, feet, inch);

	return 0;
}