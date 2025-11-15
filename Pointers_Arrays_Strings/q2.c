#include <stdio.h>

int main() {
	int a[4][4];
	int b[16];
	int i, j, k, t;

	k = 0;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &a[i][j]);
			b[k] = a[i][j];
			k++;
		}
	}

	for (i = 0; i < 15; i++) {
		for (j = i + 1; j < 16; j++) {
			if (b[i] > b[j]) {
				t = b[i];
				b[i] = b[j];
				b[j] = t;
			}
		}
	}

	for (i = 0; i < 16; i++) {
		printf("%d ", b[i]);
	}

	return 0;
}
