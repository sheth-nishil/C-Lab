#include <stdio.h>

int main() {
	int n;
	int notes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
	int i, c;

	scanf("%d", &n);

	for (i = 0; i < 9; i++) {
		c = n / notes[i];
		if (c > 0) {
			printf("%d*%d\n", notes[i], c);
			n = n % notes[i];
		}
	}

	return 0;
}
