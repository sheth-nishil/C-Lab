#include <stdio.h>

int main() {
	int i, x;
	int pc, nc, zc;

	pc = 0;
	nc = 0;
	zc = 0;

	for (i = 0; i < 200; i++) {
		scanf("%d", &x);
		if (x > 0) {
			pc++;
		} else if (x < 0) {
			nc++;
		} else {
			zc++;
		}
	}

	printf("+%d\n", pc);
	printf("-%d\n", nc);
	printf("0=%d\n", zc);

	return 0;
}
