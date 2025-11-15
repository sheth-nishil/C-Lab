#include <stdio.h>

long long power(int a, int b) {
	long long p;
	int i;

	p = 1;

	for (i = 0; i < b; i++) {
		p = p * a;
	}

	return p;
}

int main() {
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%lld", power(a, b));

	return 0;
}
