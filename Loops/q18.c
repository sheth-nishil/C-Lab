#include <stdio.h>

int main() {
	int i, b, g;
	char c;

	b = 0;
	g = 0;

	for (i = 0; i < 50; i++) {
		scanf(" %c", &c);
		if (c == 'M' || c == 'm') {
			b++;
		} else if (c == 'F' || c == 'f') {
			g++;
		}
	}

	printf("b=%d\n", b);
	printf("g=%d\n", g);

	return 0;
}
