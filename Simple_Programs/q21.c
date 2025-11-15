#include <stdio.h>

int main() {
	float g, a, d, ns;

	scanf("%f", &g);

	a = g * 0.10f;
	d = g * 0.03f;
	ns = g + a - d;

	printf("%.2f", ns);

	return 0;
}
