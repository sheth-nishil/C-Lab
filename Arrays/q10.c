#include <stdio.h>

int main() {
	int a[10];
	int f[10];
	int i, j;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		f[i] = 0;
	}

	for (i = 0; i < 10; i++) {
		if (f[i]) {
			continue;
		}
		int c = 1;
		for (j = i + 1; j < 10; j++) {
			if (a[i] == a[j]) {
				c++;
				f[j] = 1;
			}
		}
		printf("%d:%d\n", a[i], c);
	}

	return 0;
}
