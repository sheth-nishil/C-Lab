#include <stdio.h>

int main() {
	int s1, s2, s3, t;
	float a;

	scanf("%d%d%d", &s1, &s2, &s3);

	t = s1 + s2 + s3;
	a = t / 3.0f;

	printf("t=%d\n", t);
	printf("a=%.2f\n", a);

	return 0;
}
