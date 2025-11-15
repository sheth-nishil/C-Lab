#include <stdio.h>

int main() {
	int r, c;
	int i, j, k;

	scanf("%d%d", &r, &c);

	int a[10][10];
	int b[10][10];
	int s[10][10];
	int m[10][10];

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			s[i][j] = a[i][j] + b[i][j];
		}
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			m[i][j] = 0;
			for (k = 0; k < c; k++) {
				m[i][j] = m[i][j] + a[i][k] * b[k][j];
			}
		}
	}

	printf("add:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}

	printf("mul:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	return 0;
}
