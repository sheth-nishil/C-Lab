#include <stdio.h>

int main() {
	int n, s;

	scanf("%d", &n);

	if (n < 0) {
		n = -n;
	}

	s = 0;

	while (n > 0) {
		s = s + n % 10;
		n = n / 10;
	}

	printf("%d", s);

	return 0;
}
