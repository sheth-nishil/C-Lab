#include <stdio.h>

int main() {
	long long b;
	double kb, mb, gb;

	scanf("%lld", &b);

	kb = b / 1024.0;
	mb = kb / 1024.0;
	gb = mb / 1024.0;

	printf("KB=%.3f\n", kb);
	printf("MB=%.3f\n", mb);
	printf("GB=%.3f\n", gb);

	return 0;
}
