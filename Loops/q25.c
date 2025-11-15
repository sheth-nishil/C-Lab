#include <stdio.h>

int main() {
	int n, t, r;

	scanf("%d", &n);

	t = n;
	if (t < 0) {
		t = -t;
	}

	r = 0;

	while (t > 0) {
		r = r * 10 + t % 10;
		t = t / 10;
	}

	if (r == (n < 0 ? -n : n)) {
		printf("yes");
	} else {
		printf("no");
	}

	return 0;
}
