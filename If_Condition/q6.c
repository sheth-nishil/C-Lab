#include <stdio.h>

int main() {
	int m1, m2, m3, t;
	float a;

	scanf("%d%d%d", &m1, &m2, &m3);

	t = m1 + m2 + m3;
	a = t / 3.0f;

	if (m1 < 35 || m2 < 35 || m3 < 35) {
		printf("fail\n");
	} else if (a >= 70) {
		printf("dist\n");
	} else if (a >= 60) {
		printf("first\n");
	} else if (a >= 50) {
		printf("second\n");
	} else if (a >= 35) {
		printf("third\n");
	} else {
		printf("fail\n");
	}

	printf("t=%d\n", t);
	printf("a=%.2f\n", a);

	return 0;
}
