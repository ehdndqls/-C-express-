#include<stdio.h>
void array_copy(int a[], int b[], int size);
int main() {
	int size, i;
	int a[10] = { 1,2,3,0,0,0,0,0,0,0 };
	int b[10];
	size = sizeof(a) / sizeof(a[0]);

	array_copy(a, b, size);

	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < size; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");

}
void array_copy(int a[], int b[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		b[i] = a[i];
	}
}