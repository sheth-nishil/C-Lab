#include <stdio.h>

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

int main() {
	int y;

	scanf("%d", &y);

	if (leap(y)) {
		printf("yes");
	} else {
		printf("no");
	}

	return 0;
}
