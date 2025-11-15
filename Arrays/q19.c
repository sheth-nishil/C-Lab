#include <stdio.h>

int main() {
	int a[10];
	int i, x, pos;

	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &x);

	pos = -1;

	for (i = 0; i < 10; i++) {
		if (a[i] == x) {
			pos = i;
			break;
		}
	}

	if (pos == -1) {
		printf("nf");
	} else {
		printf("%d", pos);
	}

	return 0;
}
