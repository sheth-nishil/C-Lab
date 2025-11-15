#include <stdio.h>

int main() {
	int i, x, s;
	float m;

	s = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &x);
		s = s + x;
	}

	m = s / 10.0f;

	printf("s=%d\n", s);
	printf("m=%.2f\n", m);

	return 0;
}
