#include <stdio.h>

int main() {
	float g, disc, ns;

	scanf("%f", &g);

	if (g > 20000) {
		disc = g * 0.15f;
	} else if (g > 10000) {
		disc = g * 0.10f;
	} else {
		disc = g * 0.05f;
	}

	ns = g - disc;
	printf("%.2f", ns);

	return 0;
}
