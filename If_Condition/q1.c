#include <stdio.h>

int main() {
	int a, b;

	scanf("%d%d", &a, &b);

	if (a > b) {
		printf("max=%d\n", a);
		printf("min=%d\n", b);
	} else if (b > a) {
		printf("max=%d\n", b);
		printf("min=%d\n", a);
	} else {
		printf("eq=%d\n", a);
	}

	return 0;
}
