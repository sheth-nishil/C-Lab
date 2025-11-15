#include <stdio.h>

int main() {
	int n, t, p, sq;

	scanf("%d", &n);

	t = n;
	if (t < 0) {
		t = -t;
	}

	p = 1;

	while (t > 0) {
		p = p * 10;
		t = t / 10;
	}

	sq = n * n;

	if (sq % p == (n < 0 ? -n : n)) {
		printf("yes");
	} else {
		printf("no");
	}

	return 0;
}
