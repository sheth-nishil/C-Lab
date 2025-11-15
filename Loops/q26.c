#include <stdio.h>

int main() {
	int n, t, s, d;

	scanf("%d", &n);

	t = n;
	if (t < 0) {
		t = -t;
	}

	s = 0;

	while (t > 0) {
		d = t % 10;
		s = s + d * d * d;
		t = t / 10;
	}

	if (s == (n < 0 ? -n : n)) {
		printf("yes");
	} else {
		printf("no");
	}

	return 0;
}
