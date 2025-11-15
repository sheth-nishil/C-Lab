#include <stdio.h>

int main() {
	float g, ns;

	scanf("%f", &g);
	ns = g - g * 0.10f;
	printf("%.2f", ns);

	return 0;
}
