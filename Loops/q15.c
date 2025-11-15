#include <stdio.h>

int main() {
	int n, i, x, s;
	float m;

	scanf("%d", &n);

	s = 0;

	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		s = s + x;
	}

	m = s / (float)n;

	printf("s=%d\n", s);
	printf("m=%.2f\n", m);

	return 0;
}
