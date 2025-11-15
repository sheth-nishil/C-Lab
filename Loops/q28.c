#include <stdio.h>

int main() {
	int n, i, s;

	scanf("%d", &n);

	if (n <= 0) {
		printf("no");
		return 0;
	}

	s = 0;

	for (i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			s = s + i;
		}
	}

	if (s == n) {
		printf("yes");
	} else {
		printf("no");
	}

	return 0;
}
