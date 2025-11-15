#include <stdio.h>

int main() {
	int i, n;

	n = 1;

	for (i = 0; i < 10; i++) {
		printf("%d ", n);
		n = n + 2;
	}

	return 0;
}
