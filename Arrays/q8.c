#include <stdio.h>

int main() {
	int a[5];
	int b[10];
	int i;

	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 10; i++) {
		b[i] = 0;
	}

	for (i = 0; i < 5; i++) {
		b[i * 2] = a[i];
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}

	return 0;
}
