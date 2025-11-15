#include <stdio.h>

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
	int a, b, ch;

	scanf("%d%d%d", &a, &b, &ch);

	if (ch == 1) {
		printf("%d", add(a, b));
	} else if (ch == 2) {
		printf("%d", sub(a, b));
	} else if (ch == 3) {
		printf("%d", mul(a, b));
	} else if (ch == 4) {
		printf("%.2f", divi(a, b));
	} else {
		printf("inv");
	}

	return 0;
}
