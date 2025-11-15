#include <stdio.h>

void swap(int x, int y) {
	int t;

	t = x;
	x = y;
	y = t;

	printf("in=%d %d\n", x, y);
}

int main() {
	int a, b;

	scanf("%d%d", &a, &b);

	printf("before=%d %d\n", a, b);
	swap(a, b);
	printf("after=%d %d\n", a, b);

	return 0;
}
