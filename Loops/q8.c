#include <stdio.h>

int main() {
	int n, i, x, s;

	scanf("%d", &n);

	x = 1;
	s = 0;

	for (i = 0; i < n; i++) {
		s = s + x;
		x = x + 2;
	}

	printf("%d", s);

	return 0;
}
