#include <stdio.h>

int main() {
	float g, a, d, ns;

	scanf("%f", &g);

	if (g > 10000) {
		a = g * 0.10f;
		d = g * 0.03f;
	} else if (g > 5000) {
		a = g * 0.07f;
		d = g * 0.02f;
	} else {
		a = 0;
		d = 0;
	}

	ns = g + a - d;
	printf("%.2f", ns);

	return 0;
}
