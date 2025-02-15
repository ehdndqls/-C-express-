#include<stdio.h>

struct point {
	int x, y;
};

int equal(struct point *p1, struct point *p2);

int main() {
	struct point p1 = { 1, 2 }, p2 = { 3,5 };
	if (equal(&p1, &p2))
		printf("(%d, %d) == (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
	else
		printf("(%d, %d) != (%d, %d)\n", p1.x, p1.y, p2.x, p2.y);
}

int equal(struct point *p1, struct point *p2) {
	if (p1->x == p2->x && p1->y == p2->y)
		return 1;
	else
		return 0;
}