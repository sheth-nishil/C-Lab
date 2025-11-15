#include <stdio.h>

int main() {
	int a[10];
	int i;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	printf("%d ", a[3]);
	printf("%d ", a[6]);
	printf("%d", a[8]);

	return 0;
}
