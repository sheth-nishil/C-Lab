#include <stdio.h>

int main() {
	int n, i;
	long long f;

	scanf("%d", &n);

	f = 1;

	for (i = 1; i <= n; i++) {
		f = f * i;
	}

	printf("%lld", f);

	return 0;
}
