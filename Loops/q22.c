#include <stdio.h>

int main() {
	int n, c;

	scanf("%d", &n);

	if (n == 0) {
		c = 1;
	} else {
		if (n < 0) {
			n = -n;
		}
		c = 0;
		while (n > 0) {
			c++;
			n = n / 10;
		}
	}

	printf("%d", c);

	return 0;
}
