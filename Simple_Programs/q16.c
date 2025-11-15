#include <stdio.h>

int main() {
	float p, r, n;

	scanf("%f%f%f", &p, &r, &n);
	printf("%.2f", p * r * n / 100);

	return 0;
}
