#include <stdio.h>

int main() {
	int n, i, prime, c;

	c = 0;

	for (n = 2; n <= 500; n++) {
		prime = 1;
		for (i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				prime = 0;
				break;
			}
		}
		if (prime) {
			c++;
		}
	}

	printf("%d", c);

	return 0;
}
