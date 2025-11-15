#include <stdio.h>

void up(int a[], int n, int *max, int *min) {
	int i;

	*max = a[0];
	*min = a[0];

	for (i = 1; i < n; i++) {
		if (a[i] > *max) {
			*max = a[i];
		}
		if (a[i] < *min) {
			*min = a[i];
		}
	}
}

int main() {
	int n, i;
	int a[100];
	int max, min;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	up(a, n, &max, &min);

	printf("max=%d\n", max);
	printf("min=%d\n", min);

	return 0;
}
