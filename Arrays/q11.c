#include <stdio.h>

int main() {
	int a[10];
	int b[10];
	int i, n, dir;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d%d", &n, &dir);

	for (i = 0; i < 10; i++) {
		b[i] = 0;
	}

	if (dir == 0) {
		for (i = 0; i < 10; i++) {
			if (i + n < 10) {
				b[i + n] = a[i];
			}
		}
	} else {
		for (i = 0; i < 10; i++) {
			if (i - n >= 0) {
				b[i - n] = a[i];
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}

	return 0;
}
