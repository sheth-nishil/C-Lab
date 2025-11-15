#include <stdio.h>

int main() {
	int a[10];
	int i, j, x;
	int n;

	n = 10;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &x);

	for (i = 0; i < n; i++) {
		if (a[i] == x) {
			for (j = i; j < n - 1; j++) {
				a[j] = a[j + 1];
			}
			n--;
			break;
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}
