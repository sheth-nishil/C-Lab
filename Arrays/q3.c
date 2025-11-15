#include <stdio.h>

int main() {
	int a[5];
	int i, j, t;
	int asc;

	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &asc);

	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if ((asc && a[i] > a[j]) || (!asc && a[i] < a[j])) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}
