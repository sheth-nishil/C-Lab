#include <stdio.h>

int main() {
	int n, i, flag;

	scanf("%d", &n);

	if (n <= 1) {
		printf("no");
		return 0;
	}

	flag = 1;

	for (i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			flag = 0;
			break;
		}
	}

	if (flag) {
		printf("yes");
	} else {
		printf("no");
	}

	return 0;
}
