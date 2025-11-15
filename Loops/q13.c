#include <stdio.h>

int main() {
	int i, s;

	s = 0;

	for (i = 1; i <= 100; i++) {
		if (i % 13 == 0) {
			s = s + i;
		}
	}

	printf("%d", s);

	return 0;
}
