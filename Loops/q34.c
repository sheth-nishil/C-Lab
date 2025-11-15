#include <stdio.h>

int main() {
	int n, i;
	long a, b, c;

	scanf("%d", &n);

	a = 1;
	b = 1;

	if (n >= 1) {
		printf("%ld ", a);
	}
	if (n >= 2) {
		printf("%ld ", b);
	}

	for (i = 3; i <= n; i++) {
		c = a + b;
		printf("%ld ", c);
		a = b;
		b = c;
	}

	return 0;
}
