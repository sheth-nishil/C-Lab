#include <stdio.h>

int main() {
	int a[11];
	int i, pos, n;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d%d", &pos, &n);

	for (i = 10; i > pos; i--) {
		a[i] = a[i - 1];
	}

	a[pos] = n;

	for (i = 0; i < 11; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}
