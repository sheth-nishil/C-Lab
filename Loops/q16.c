#include <stdio.h>

int main() {
	int i, x, max, min;

	scanf("%d", &x);

	max = x;
	min = x;

	for (i = 1; i < 100; i++) {
		scanf("%d", &x);
		if (x > max) {
			max = x;
		}
		if (x < min) {
			min = x;
		}
	}

	printf("max=%d\n", max);
	printf("min=%d\n", min);

	return 0;
}
