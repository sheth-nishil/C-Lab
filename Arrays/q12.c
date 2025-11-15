#include <stdio.h>

int main() {
	int a[11];
	int i, n;

	for (i = 1; i <= 10; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &n);

	for (i = 10; i >= 1; i--) {
		a[i + 1] = a[i];
	}

	a[1] = n;

	for (i = 1; i <= 11; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}
