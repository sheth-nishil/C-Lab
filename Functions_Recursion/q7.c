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

int leap(int y) {
	if (y % 400 == 0) {
		return 1;
	}
	if (y % 100 == 0) {
		return 0;
	}
	if (y % 4 == 0) {
		return 1;
	}
	return 0;
}

long long fact(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * fact(n - 1);
}

void swapv(int x, int y) {
	int t;

	t = x;
	x = y;
	y = t;

	printf("in=%d %d\n", x, y);
}

void up(int a[], int n, int *max, int *min) {
	int i;

	*max = a[0];
	*min = a[0];

	for (i = 1; i < n; i++) {
		if (a[i] > *max) {
			*max = a[i];
		}
		if (a[i] < *min) {
			*min = a[i];
		}
	}
}

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

float divi(int a, int b) {
	if (b == 0) {
		return 0;
	}
	return a / (float)b;
}

int main() {
	int ch;

	scanf("%d", &ch);

	if (ch == 1) {
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%lld", power(a, b));
	} else if (ch == 2) {
		int y;
		scanf("%d", &y);
		if (leap(y)) {
			printf("yes");
		} else {
			printf("no");
		}
	} else if (ch == 3) {
		int n;
		scanf("%d", &n);
		printf("%lld", fact(n));
	} else if (ch == 4) {
		int a, b;
		scanf("%d%d", &a, &b);
		printf("before=%d %d\n", a, b);
		swapv(a, b);
		printf("after=%d %d\n", a, b);
	} else if (ch == 5) {
		int n, i;
		int a[100];
		int max, min;
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		up(a, n, &max, &min);
		printf("max=%d\n", max);
		printf("min=%d\n", min);
	} else if (ch == 6) {
		int a, b, o;
		scanf("%d%d%d", &a, &b, &o);
		if (o == 1) {
			printf("%d", add(a, b));
		} else if (o == 2) {
			printf("%d", sub(a, b));
		} else if (o == 3) {
			printf("%d", mul(a, b));
		} else if (o == 4) {
			printf("%.2f", divi(a, b));
		} else {
			printf("inv");
		}
	} else {
		printf("inv");
	}

	return 0;
}
