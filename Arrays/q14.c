#include <stdio.h>

int main() {
	int a[11];
	int i, n;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &n);

	a[10] = n;

	for (i = 0; i < 11; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}
