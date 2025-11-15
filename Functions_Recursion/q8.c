#include <stdio.h>

void printn(int n) {
	if (n == 0) {
		return;
	}
	printn(n - 1);
	printf("%d ", n);
}

int sumn(int n) {
	if (n == 0) {
		return 0;
	}
	return n + sumn(n - 1);
}

long long fact(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * fact(n - 1);
}

long long fib(int n) {
	if (n <= 2) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main() {
	int ch, n;
	int i;

	scanf("%d%d", &ch, &n);

	if (ch == 1) {
		printn(n);
	} else if (ch == 2) {
		printf("%d", sumn(n));
	} else if (ch == 3) {
		printf("%lld", fact(n));
	} else if (ch == 4) {
		for (i = 1; i <= n; i++) {
			printf("%lld ", fib(i));
		}
	} else {
		printf("inv");
	}

	return 0;
}
