#include <stdio.h>

int main() {
	int i, j;

	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			if (i == 1) {
				printf("1 ");
			} else if (i == 2) {
				if (j == 1) {
					printf("1 ");
				} else if (j == 2) {
					printf("2 ");
				} else {
					printf("1 ");
				}
			} else {
				if (j == 1) {
					printf("2 ");
				} else if (j == 2) {
					printf("1 ");
				} else {
					printf("1 ");
				}
			}
		}
		printf("\n");
	}

	return 0;
}
